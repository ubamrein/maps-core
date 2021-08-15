/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

package io.openmobilemaps.mapscore.map.view

import android.content.Context
import android.opengl.GLSurfaceView
import android.util.AttributeSet
import android.view.MotionEvent
import androidx.lifecycle.Lifecycle
import androidx.lifecycle.LifecycleObserver
import androidx.lifecycle.OnLifecycleEvent
import androidx.lifecycle.coroutineScope
import io.openmobilemaps.mapscore.graphics.GlTextureView
import io.openmobilemaps.mapscore.shared.graphics.common.Color
import io.openmobilemaps.mapscore.shared.graphics.common.Vec2F
import io.openmobilemaps.mapscore.shared.graphics.common.Vec2I
import io.openmobilemaps.mapscore.shared.map.*
import io.openmobilemaps.mapscore.shared.map.controls.TouchAction
import io.openmobilemaps.mapscore.shared.map.controls.TouchEvent
import io.openmobilemaps.mapscore.shared.map.controls.TouchHandlerInterface
import io.openmobilemaps.mapscore.map.scheduling.AndroidScheduler
import io.openmobilemaps.mapscore.map.scheduling.AndroidSchedulerCallback
import io.openmobilemaps.mapscore.shared.map.scheduling.TaskInterface
import javax.microedition.khronos.egl.EGLConfig
import javax.microedition.khronos.opengles.GL10

open class MapView @JvmOverloads constructor(context: Context, attrs: AttributeSet? = null, defStyleAttr: Int = 0) :
	GlTextureView(context, attrs, defStyleAttr), GLSurfaceView.Renderer, AndroidSchedulerCallback, LifecycleObserver {

	protected var mapInterface: MapInterface? = null
		private set
	protected var scheduler: AndroidScheduler? = null
		private set

	private var touchHandler: TouchHandlerInterface? = null
	private var touchDisabled = false

	init {
		System.loadLibrary("mapscore")
	}

	open fun setupMap(mapConfig: MapConfig) {
		val densityExact = resources.displayMetrics.xdpi

		setRenderer(this)
		val scheduler = AndroidScheduler(this)
		val mapInterface = MapInterface.createWithOpenGl(
			mapConfig,
			scheduler,
			densityExact
		)
		mapInterface.setCallbackHandler(object : MapCallbackInterface() {
			override fun invalidate() {
				scheduler.launchCoroutine { requestRender() }
			}
		})
		mapInterface.setBackgroundColor(Color(1f, 1f, 1f, 1f))
		touchHandler = mapInterface.getTouchHandler()
		this.mapInterface = mapInterface
		this.scheduler = scheduler
	}

	fun registerLifecycle(lifecycle: Lifecycle) {
		requireScheduler().setCoroutineScope(lifecycle.coroutineScope)
		lifecycle.addObserver(this)
	}

	override fun onSurfaceCreated(gl: GL10?, config: EGLConfig?) {
		requireMapInterface().getRenderingContext().onSurfaceCreated()
	}

	override fun onSurfaceChanged(gl: GL10?, width: Int, height: Int) {
		requireMapInterface().setViewportSize(Vec2I(width, height))
	}

	override fun onDrawFrame(gl: GL10?) {
		requireMapInterface().drawFrame()
	}

	override fun scheduleOnGlThread(task: TaskInterface) {
		queueEvent { task.run() }
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_START)
	open fun onStart() {
		requireScheduler().resume()
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_RESUME)
	open fun onResume() {
		requireMapInterface().resume()
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_PAUSE)
	open fun onPause() {
		requireMapInterface().pause()
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_STOP)
	open fun onStop() {
		requireScheduler().pause()
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_DESTROY)
	open fun onDestroy() {
		setRenderer(null)
		mapInterface = null
		scheduler = null
		touchHandler = null
	}

	fun setTouchEnabled(enabled: Boolean) {
		touchDisabled = !enabled
	}

	override fun onTouchEvent(event: MotionEvent?): Boolean {
		if (event == null || touchDisabled) {
			return false
		}

		val action: TouchAction? = when (event.actionMasked) {
			MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> TouchAction.DOWN
			MotionEvent.ACTION_MOVE -> TouchAction.MOVE
			MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP -> TouchAction.UP
			else -> null
		}

		if (action != null) {
			val pointers = ArrayList<Vec2F>(10)
			for (i in 0 until event.pointerCount) {
				pointers.add(Vec2F(event.getX(i), event.getY(i)))
			}
			touchHandler?.onTouchEvent(TouchEvent(pointers, action))
		}

		return true
	}

	fun setBackgroundColor(color: Color) {
		requireMapInterface().setBackgroundColor(color)
	}

	open fun addLayer(layer: LayerInterface) {
		requireMapInterface().addLayer(layer)
	}

	open fun insertLayerAt(layer: LayerInterface, at: Int) {
		requireMapInterface().insertLayerAt(layer, at)
	}

	open fun insertLayerAbove(layer: LayerInterface, above: LayerInterface) {
		requireMapInterface().insertLayerAbove(layer, above)
	}

	open fun insertLayerBelow(layer: LayerInterface, below: LayerInterface) {
		requireMapInterface().insertLayerBelow(layer, below)
	}

	open fun removeLayer(layer: LayerInterface) {
		requireMapInterface().removeLayer(layer)
	}

	fun getCamera(): MapCamera2dInterface {
		return requireMapInterface().getCamera()
	}

	fun requireMapInterface(): MapInterface = mapInterface  ?: throw IllegalStateException("Map is not setup or already destroyed!")
	fun requireScheduler(): AndroidScheduler = scheduler  ?: throw IllegalStateException("Map is not setup or already destroyed!")

}