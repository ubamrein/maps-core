// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

package io.openmobilemaps.mapscore.shared.graphics.common;

public final class Quad2dD {


    /*package*/ final Vec2D topLeft;

    /*package*/ final Vec2D topRight;

    /*package*/ final Vec2D bottomRight;

    /*package*/ final Vec2D bottomLeft;

    public Quad2dD(
            Vec2D topLeft,
            Vec2D topRight,
            Vec2D bottomRight,
            Vec2D bottomLeft) {
        this.topLeft = topLeft;
        this.topRight = topRight;
        this.bottomRight = bottomRight;
        this.bottomLeft = bottomLeft;
    }

    public Vec2D getTopLeft() {
        return topLeft;
    }

    public Vec2D getTopRight() {
        return topRight;
    }

    public Vec2D getBottomRight() {
        return bottomRight;
    }

    public Vec2D getBottomLeft() {
        return bottomLeft;
    }

    @Override
    public String toString() {
        return "Quad2dD{" +
                "topLeft=" + topLeft +
                "," + "topRight=" + topRight +
                "," + "bottomRight=" + bottomRight +
                "," + "bottomLeft=" + bottomLeft +
        "}";
    }

}
