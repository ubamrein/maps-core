// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from wmts_capabilities.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.raster.wmts

data class WmtsLayerDescription(
    val identifier: String,
    val title: String?,
    val abstractText: String?,
    val dimensions: ArrayList<WmtsLayerDimension>,
    val bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord,
    val tileMatrixSetLink: String,
    val resourceTemplate: String,
    val resourceFormat: String,
)