// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

package ch.ubique.mapscore.shared.graphics.objects

import java.util.concurrent.atomic.AtomicBoolean

abstract class Rectangle2dInterface {

    abstract fun setFrame(frame: ch.ubique.mapscore.shared.graphics.common.RectD, textureCoordinates: ch.ubique.mapscore.shared.graphics.common.RectD)

    abstract fun loadTexture(textureHolder: TextureHolderInterface)

    abstract fun removeTexture()

    abstract fun asGraphicsObject(): GraphicsObjectInterface

    private class CppProxy : Rectangle2dInterface {
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

        override fun setFrame(frame: ch.ubique.mapscore.shared.graphics.common.RectD, textureCoordinates: ch.ubique.mapscore.shared.graphics.common.RectD) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setFrame(this.nativeRef, frame, textureCoordinates)
        }
        private external fun native_setFrame(_nativeRef: Long, frame: ch.ubique.mapscore.shared.graphics.common.RectD, textureCoordinates: ch.ubique.mapscore.shared.graphics.common.RectD)

        override fun loadTexture(textureHolder: TextureHolderInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_loadTexture(this.nativeRef, textureHolder)
        }
        private external fun native_loadTexture(_nativeRef: Long, textureHolder: TextureHolderInterface)

        override fun removeTexture() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_removeTexture(this.nativeRef)
        }
        private external fun native_removeTexture(_nativeRef: Long)

        override fun asGraphicsObject(): GraphicsObjectInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asGraphicsObject(this.nativeRef)
        }
        private external fun native_asGraphicsObject(_nativeRef: Long): GraphicsObjectInterface
    }
}
