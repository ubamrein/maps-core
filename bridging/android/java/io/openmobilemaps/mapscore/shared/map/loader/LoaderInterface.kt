// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

package io.openmobilemaps.mapscore.shared.map.loader

import java.util.concurrent.atomic.AtomicBoolean

abstract class LoaderInterface {

    abstract fun loadTexture(url: String, etag: String?): TextureLoaderResult

    abstract fun loadData(url: String, etag: String?): DataLoaderResult

    private class CppProxy : LoaderInterface {
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

        override fun loadTexture(url: String, etag: String?): TextureLoaderResult {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_loadTexture(this.nativeRef, url, etag)
        }
        private external fun native_loadTexture(_nativeRef: Long, url: String, etag: String?): TextureLoaderResult

        override fun loadData(url: String, etag: String?): DataLoaderResult {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_loadData(this.nativeRef, url, etag)
        }
        private external fun native_loadData(_nativeRef: Long, url: String, etag: String?): DataLoaderResult
    }
}