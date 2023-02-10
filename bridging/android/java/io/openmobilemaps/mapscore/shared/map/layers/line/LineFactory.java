// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni

package io.openmobilemaps.mapscore.shared.map.layers.line;

import com.snapchat.djinni.NativeObjectManager;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class LineFactory {
    public static native LineInfoInterface createLine(String identifier, ArrayList<io.openmobilemaps.mapscore.shared.map.coordinates.Coord> coordinates, LineStyle style);

    public static final class CppProxy extends LineFactory
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
            NativeObjectManager.register(this, nativeRef);
        }
        public static native void nativeDestroy(long nativeRef);
    }
}
