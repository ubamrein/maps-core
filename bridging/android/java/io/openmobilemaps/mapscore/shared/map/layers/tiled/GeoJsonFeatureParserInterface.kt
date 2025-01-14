// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from geo_json_parser.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class GeoJsonFeatureParserInterface {

    companion object {
        @JvmStatic
        external fun create(): GeoJsonFeatureParserInterface
    }

    abstract fun parse(geoJson: String): ArrayList<io.openmobilemaps.mapscore.shared.map.layers.tiled.vector.VectorLayerFeatureInfo>?

    private class CppProxy : GeoJsonFeatureParserInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        companion object {
            @JvmStatic
            external fun nativeDestroy(nativeRef: Long)
        }

        override fun parse(geoJson: String): ArrayList<io.openmobilemaps.mapscore.shared.map.layers.tiled.vector.VectorLayerFeatureInfo>? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_parse(this.nativeRef, geoJson)
        }
        private external fun native_parse(_nativeRef: Long, geoJson: String): ArrayList<io.openmobilemaps.mapscore.shared.map.layers.tiled.vector.VectorLayerFeatureInfo>?
    }
}
