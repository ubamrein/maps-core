// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from wmts_capabilities.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.raster.wmts;

import java.util.ArrayList;

public final class WmtsLayerDimension {


    /*package*/ final String identifier;

    /*package*/ final String defaultValue;

    /*package*/ final ArrayList<String> values;

    public WmtsLayerDimension(
            String identifier,
            String defaultValue,
            ArrayList<String> values) {
        this.identifier = identifier;
        this.defaultValue = defaultValue;
        this.values = values;
    }

    public String getIdentifier() {
        return identifier;
    }

    public String getDefaultValue() {
        return defaultValue;
    }

    public ArrayList<String> getValues() {
        return values;
    }

    @Override
    public String toString() {
        return "WmtsLayerDimension{" +
                "identifier=" + identifier +
                "," + "defaultValue=" + defaultValue +
                "," + "values=" + values +
        "}";
    }

}
