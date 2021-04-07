// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.graphics

import java.util.concurrent.atomic.AtomicBoolean

abstract class RenderingContextInterface {

    /** Ensure calling on graphics thread */
    abstract fun onSurfaceCreated()

    /** Ensure calling on graphics thread */
    abstract fun setViewportSize(size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2I)

    abstract fun getViewportSize(): io.openmobilemaps.mapscore.shared.graphics.common.Vec2I

    abstract fun setBackgroundColor(color: io.openmobilemaps.mapscore.shared.graphics.common.Color)

    abstract fun setupDrawFrame()

    abstract fun preRenderStencilMask()

    abstract fun postRenderStencilMask()

    private class CppProxy : RenderingContextInterface {
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

        override fun onSurfaceCreated() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onSurfaceCreated(this.nativeRef)
        }
        private external fun native_onSurfaceCreated(_nativeRef: Long)

        override fun setViewportSize(size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2I) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setViewportSize(this.nativeRef, size)
        }
        private external fun native_setViewportSize(_nativeRef: Long, size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2I)

        override fun getViewportSize(): io.openmobilemaps.mapscore.shared.graphics.common.Vec2I {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getViewportSize(this.nativeRef)
        }
        private external fun native_getViewportSize(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.common.Vec2I

        override fun setBackgroundColor(color: io.openmobilemaps.mapscore.shared.graphics.common.Color) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setBackgroundColor(this.nativeRef, color)
        }
        private external fun native_setBackgroundColor(_nativeRef: Long, color: io.openmobilemaps.mapscore.shared.graphics.common.Color)

        override fun setupDrawFrame() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setupDrawFrame(this.nativeRef)
        }
        private external fun native_setupDrawFrame(_nativeRef: Long)

        override fun preRenderStencilMask() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_preRenderStencilMask(this.nativeRef)
        }
        private external fun native_preRenderStencilMask(_nativeRef: Long)

        override fun postRenderStencilMask() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_postRenderStencilMask(this.nativeRef)
        }
        private external fun native_postRenderStencilMask(_nativeRef: Long)
    }
}
