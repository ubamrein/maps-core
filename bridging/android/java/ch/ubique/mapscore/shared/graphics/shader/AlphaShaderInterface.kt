// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

package ch.ubique.mapscore.shared.graphics.shader

import java.util.concurrent.atomic.AtomicBoolean

abstract class AlphaShaderInterface {

    abstract fun updateAlpha(value: Float)

    abstract fun asShaderProgramInterface(): ShaderProgramInterface

    private class CppProxy : AlphaShaderInterface {
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

        override fun updateAlpha(value: Float) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_updateAlpha(this.nativeRef, value)
        }
        private external fun native_updateAlpha(_nativeRef: Long, value: Float)

        override fun asShaderProgramInterface(): ShaderProgramInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asShaderProgramInterface(this.nativeRef)
        }
        private external fun native_asShaderProgramInterface(_nativeRef: Long): ShaderProgramInterface
    }
}
