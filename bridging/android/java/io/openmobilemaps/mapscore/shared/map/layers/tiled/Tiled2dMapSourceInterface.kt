// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class Tiled2dMapSourceInterface {

    abstract fun onVisibleBoundsChanged(visibleBounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, curT: Int, zoom: Double)

    abstract fun setMinZoomLevelIdentifier(value: Int?)

    abstract fun getMinZoomLevelIdentifier(): Int?

    abstract fun setMaxZoomLevelIdentifier(value: Int?)

    abstract fun getMaxZoomLevelIdentifier(): Int?

    abstract fun pause()

    abstract fun resume()

    abstract fun isReadyToRenderOffscreen(): io.openmobilemaps.mapscore.shared.map.LayerReadyState

    abstract fun setErrorManager(errorManager: io.openmobilemaps.mapscore.shared.map.ErrorManager)

    abstract fun forceReload()

    private class CppProxy : Tiled2dMapSourceInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        external fun nativeDestroy(nativeRef: Long)

        override fun onVisibleBoundsChanged(visibleBounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, curT: Int, zoom: Double) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onVisibleBoundsChanged(this.nativeRef, visibleBounds, curT, zoom)
        }
        private external fun native_onVisibleBoundsChanged(_nativeRef: Long, visibleBounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, curT: Int, zoom: Double)

        override fun setMinZoomLevelIdentifier(value: Int?) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setMinZoomLevelIdentifier(this.nativeRef, value)
        }
        private external fun native_setMinZoomLevelIdentifier(_nativeRef: Long, value: Int?)

        override fun getMinZoomLevelIdentifier(): Int? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getMinZoomLevelIdentifier(this.nativeRef)
        }
        private external fun native_getMinZoomLevelIdentifier(_nativeRef: Long): Int?

        override fun setMaxZoomLevelIdentifier(value: Int?) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setMaxZoomLevelIdentifier(this.nativeRef, value)
        }
        private external fun native_setMaxZoomLevelIdentifier(_nativeRef: Long, value: Int?)

        override fun getMaxZoomLevelIdentifier(): Int? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getMaxZoomLevelIdentifier(this.nativeRef)
        }
        private external fun native_getMaxZoomLevelIdentifier(_nativeRef: Long): Int?

        override fun pause() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_pause(this.nativeRef)
        }
        private external fun native_pause(_nativeRef: Long)

        override fun resume() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_resume(this.nativeRef)
        }
        private external fun native_resume(_nativeRef: Long)

        override fun isReadyToRenderOffscreen(): io.openmobilemaps.mapscore.shared.map.LayerReadyState {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_isReadyToRenderOffscreen(this.nativeRef)
        }
        private external fun native_isReadyToRenderOffscreen(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.LayerReadyState

        override fun setErrorManager(errorManager: io.openmobilemaps.mapscore.shared.map.ErrorManager) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setErrorManager(this.nativeRef, errorManager)
        }
        private external fun native_setErrorManager(_nativeRef: Long, errorManager: io.openmobilemaps.mapscore.shared.map.ErrorManager)

        override fun forceReload() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_forceReload(this.nativeRef)
        }
        private external fun native_forceReload(_nativeRef: Long)
    }
}
