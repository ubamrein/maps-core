// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

package io.openmobilemaps.mapscore.shared.graphics.common;

public final class SharedBytes {


    /*package*/ final long address;

    /*package*/ final int elementCount;

    /*package*/ final int bytesPerElement;

    public SharedBytes(
            long address,
            int elementCount,
            int bytesPerElement) {
        this.address = address;
        this.elementCount = elementCount;
        this.bytesPerElement = bytesPerElement;
    }

    public long getAddress() {
        return address;
    }

    public int getElementCount() {
        return elementCount;
    }

    public int getBytesPerElement() {
        return bytesPerElement;
    }

    @Override
    public String toString() {
        return "SharedBytes{" +
                "address=" + address +
                "," + "elementCount=" + elementCount +
                "," + "bytesPerElement=" + bytesPerElement +
        "}";
    }

}
