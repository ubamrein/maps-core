// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.vector

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class Tiled2dMapVectorLayerInterface {

    companion object {
        @JvmStatic
        external fun createFromStyleJson(layerName: String, path: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double): Tiled2dMapVectorLayerInterface

        @JvmStatic
        external fun createFromStyleJsonWithZoomInfo(layerName: String, path: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo): Tiled2dMapVectorLayerInterface

        @JvmStatic
        external fun createFromLocalStyleJson(layerName: String, styleJson: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double): Tiled2dMapVectorLayerInterface

        @JvmStatic
        external fun createFromLocalStyleJsonWithZoomInfo(layerName: String, styleJson: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo): Tiled2dMapVectorLayerInterface

        @JvmStatic
        external fun createFromStyleJsonWithUrlParams(layerName: String, path: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double, sourceUrlParams: HashMap<String, String>): Tiled2dMapVectorLayerInterface

        @JvmStatic
        external fun createFromStyleJsonWithZoomInfoUrlParams(layerName: String, path: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo, sourceUrlParams: HashMap<String, String>): Tiled2dMapVectorLayerInterface

        @JvmStatic
        external fun createFromLocalStyleJsonWithUrlParams(layerName: String, styleJson: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double, sourceUrlParams: HashMap<String, String>): Tiled2dMapVectorLayerInterface

        @JvmStatic
        external fun createFromLocalStyleJsonWithZoomInfoUrlParams(layerName: String, styleJson: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo, sourceUrlParams: HashMap<String, String>): Tiled2dMapVectorLayerInterface
    }

    abstract fun setSelectionDelegate(selectionDelegate: Tiled2dMapVectorLayerSelectionCallbackInterface?)

    abstract fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface

    abstract fun getStyleMetadataJson(): String?

    abstract fun setFeatureState(identifier: String, properties: HashMap<String, VectorLayerFeatureInfoValue>)

    private class CppProxy : Tiled2dMapVectorLayerInterface {
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

        override fun setSelectionDelegate(selectionDelegate: Tiled2dMapVectorLayerSelectionCallbackInterface?) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setSelectionDelegate(this.nativeRef, selectionDelegate)
        }
        private external fun native_setSelectionDelegate(_nativeRef: Long, selectionDelegate: Tiled2dMapVectorLayerSelectionCallbackInterface?)

        override fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asLayerInterface(this.nativeRef)
        }
        private external fun native_asLayerInterface(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.LayerInterface

        override fun getStyleMetadataJson(): String? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getStyleMetadataJson(this.nativeRef)
        }
        private external fun native_getStyleMetadataJson(_nativeRef: Long): String?

        override fun setFeatureState(identifier: String, properties: HashMap<String, VectorLayerFeatureInfoValue>) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setFeatureState(this.nativeRef, identifier, properties)
        }
        private external fun native_setFeatureState(_nativeRef: Long, identifier: String, properties: HashMap<String, VectorLayerFeatureInfoValue>)
    }
}
