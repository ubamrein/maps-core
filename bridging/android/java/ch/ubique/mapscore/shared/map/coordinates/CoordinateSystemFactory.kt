// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

package ch.ubique.mapscore.shared.map.coordinates

import java.util.concurrent.atomic.AtomicBoolean

abstract class CoordinateSystemFactory {

    companion object {
        @JvmStatic
        fun getEpsg2056System(): MapCoordinateSystem {
            return CppProxy.getEpsg2056System()
        }

        @JvmStatic
        fun getEpsg3857System(): MapCoordinateSystem {
            return CppProxy.getEpsg3857System()
        }
    }

    private class CppProxy : CoordinateSystemFactory {
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

        companion object {
            @JvmStatic
            external fun getEpsg2056System(): MapCoordinateSystem

            @JvmStatic
            external fun getEpsg3857System(): MapCoordinateSystem
        }
    }
}
