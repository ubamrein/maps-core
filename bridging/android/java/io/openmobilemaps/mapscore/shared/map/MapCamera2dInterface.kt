// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.map

import java.util.concurrent.atomic.AtomicBoolean

abstract class MapCamera2dInterface {

    abstract fun moveToCenterPositionZoom(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Double, animated: Boolean)

    abstract fun moveToCenterPosition(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, animated: Boolean)

    abstract fun getCenterPosition(): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

    abstract fun setZoom(zoom: Double, animated: Boolean)

    abstract fun getZoom(): Double

    abstract fun setRotation(angle: Float, animated: Boolean)

    abstract fun getRotation(): Float

    abstract fun setMinZoom(minZoom: Double)

    abstract fun setMaxZoom(maxZoom: Double)

    abstract fun setBounds(bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord)

    abstract fun isInBounds(coords: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): Boolean

    abstract fun setPaddingLeft(padding: Float, animated: Boolean)

    abstract fun setPaddingRight(padding: Float, animated: Boolean)

    abstract fun setPaddingTop(padding: Float, animated: Boolean)

    abstract fun setPaddingBottom(padding: Float, animated: Boolean)

    abstract fun getVisibleRect(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

    abstract fun getInvariantModelMatrix(coordinate: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, scaleInvariant: Boolean, rotationInvariant: Boolean): ArrayList<Float>

    abstract fun addListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCamera2dListenerInterface)

    abstract fun removeListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCamera2dListenerInterface)

    abstract fun coordFromScreenPosition(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

    abstract fun mapUnitsFromPixels(distancePx: Double): Double

    abstract fun setRotationEnabled(enabled: Boolean)

    abstract fun asCameraInterface(): io.openmobilemaps.mapscore.shared.graphics.CameraInterface

    companion object {
        @JvmStatic
        fun create(mapInterface: MapInterface, screenDensityPpi: Float): MapCamera2dInterface {
            return CppProxy.create(mapInterface, screenDensityPpi)
        }
    }

    private class CppProxy : MapCamera2dInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
        }

        private external fun nativeDestroy(nativeRef: Long)
        fun _djinni_private_destroy() {
            val destroyed = this.destroyed.getAndSet(true)
            if (!destroyed) nativeDestroy(this.nativeRef)
        }
        protected fun finalize() {
            _djinni_private_destroy()
        }

        override fun moveToCenterPositionZoom(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Double, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_moveToCenterPositionZoom(this.nativeRef, centerPosition, zoom, animated)
        }
        private external fun native_moveToCenterPositionZoom(_nativeRef: Long, centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Double, animated: Boolean)

        override fun moveToCenterPosition(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_moveToCenterPosition(this.nativeRef, centerPosition, animated)
        }
        private external fun native_moveToCenterPosition(_nativeRef: Long, centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, animated: Boolean)

        override fun getCenterPosition(): io.openmobilemaps.mapscore.shared.map.coordinates.Coord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getCenterPosition(this.nativeRef)
        }
        private external fun native_getCenterPosition(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

        override fun setZoom(zoom: Double, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setZoom(this.nativeRef, zoom, animated)
        }
        private external fun native_setZoom(_nativeRef: Long, zoom: Double, animated: Boolean)

        override fun getZoom(): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getZoom(this.nativeRef)
        }
        private external fun native_getZoom(_nativeRef: Long): Double

        override fun setRotation(angle: Float, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setRotation(this.nativeRef, angle, animated)
        }
        private external fun native_setRotation(_nativeRef: Long, angle: Float, animated: Boolean)

        override fun getRotation(): Float {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRotation(this.nativeRef)
        }
        private external fun native_getRotation(_nativeRef: Long): Float

        override fun setMinZoom(minZoom: Double) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setMinZoom(this.nativeRef, minZoom)
        }
        private external fun native_setMinZoom(_nativeRef: Long, minZoom: Double)

        override fun setMaxZoom(maxZoom: Double) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setMaxZoom(this.nativeRef, maxZoom)
        }
        private external fun native_setMaxZoom(_nativeRef: Long, maxZoom: Double)

        override fun setBounds(bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setBounds(this.nativeRef, bounds)
        }
        private external fun native_setBounds(_nativeRef: Long, bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord)

        override fun isInBounds(coords: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_isInBounds(this.nativeRef, coords)
        }
        private external fun native_isInBounds(_nativeRef: Long, coords: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): Boolean

        override fun setPaddingLeft(padding: Float, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingLeft(this.nativeRef, padding, animated)
        }
        private external fun native_setPaddingLeft(_nativeRef: Long, padding: Float, animated: Boolean)

        override fun setPaddingRight(padding: Float, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingRight(this.nativeRef, padding, animated)
        }
        private external fun native_setPaddingRight(_nativeRef: Long, padding: Float, animated: Boolean)

        override fun setPaddingTop(padding: Float, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingTop(this.nativeRef, padding, animated)
        }
        private external fun native_setPaddingTop(_nativeRef: Long, padding: Float, animated: Boolean)

        override fun setPaddingBottom(padding: Float, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingBottom(this.nativeRef, padding, animated)
        }
        private external fun native_setPaddingBottom(_nativeRef: Long, padding: Float, animated: Boolean)

        override fun getVisibleRect(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getVisibleRect(this.nativeRef)
        }
        private external fun native_getVisibleRect(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

        override fun getInvariantModelMatrix(coordinate: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, scaleInvariant: Boolean, rotationInvariant: Boolean): ArrayList<Float> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getInvariantModelMatrix(this.nativeRef, coordinate, scaleInvariant, rotationInvariant)
        }
        private external fun native_getInvariantModelMatrix(_nativeRef: Long, coordinate: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, scaleInvariant: Boolean, rotationInvariant: Boolean): ArrayList<Float>

        override fun addListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCamera2dListenerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addListener(this.nativeRef, listener)
        }
        private external fun native_addListener(_nativeRef: Long, listener: io.openmobilemaps.mapscore.shared.map.camera.MapCamera2dListenerInterface)

        override fun removeListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCamera2dListenerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_removeListener(this.nativeRef, listener)
        }
        private external fun native_removeListener(_nativeRef: Long, listener: io.openmobilemaps.mapscore.shared.map.camera.MapCamera2dListenerInterface)

        override fun coordFromScreenPosition(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): io.openmobilemaps.mapscore.shared.map.coordinates.Coord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_coordFromScreenPosition(this.nativeRef, posScreen)
        }
        private external fun native_coordFromScreenPosition(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

        override fun mapUnitsFromPixels(distancePx: Double): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_mapUnitsFromPixels(this.nativeRef, distancePx)
        }
        private external fun native_mapUnitsFromPixels(_nativeRef: Long, distancePx: Double): Double

        override fun setRotationEnabled(enabled: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setRotationEnabled(this.nativeRef, enabled)
        }
        private external fun native_setRotationEnabled(_nativeRef: Long, enabled: Boolean)

        override fun asCameraInterface(): io.openmobilemaps.mapscore.shared.graphics.CameraInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asCameraInterface(this.nativeRef)
        }
        private external fun native_asCameraInterface(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.CameraInterface

        companion object {
            @JvmStatic
            external fun create(mapInterface: MapInterface, screenDensityPpi: Float): MapCamera2dInterface
        }
    }
}
