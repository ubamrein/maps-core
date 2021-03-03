// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.raster.wmts

import java.util.concurrent.atomic.AtomicBoolean

abstract class WmtsTiled2dMapLayerConfigFactory {

    companion object {
        @JvmStatic
        fun create(wmtsLayerConfiguration: WmtsLayerDescription, zoomLevelInfo: ArrayList<io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomLevelInfo>, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo, coordinateSystemIdentifier: String): io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig {
            return CppProxy.create(wmtsLayerConfiguration, zoomLevelInfo, zoomInfo, coordinateSystemIdentifier)
        }
    }

    private class CppProxy : WmtsTiled2dMapLayerConfigFactory {
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
            external fun create(wmtsLayerConfiguration: WmtsLayerDescription, zoomLevelInfo: ArrayList<io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomLevelInfo>, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo, coordinateSystemIdentifier: String): io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig
        }
    }
}
