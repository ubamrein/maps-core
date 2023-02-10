// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

package io.openmobilemaps.mapscore.shared.map.layers.polygon;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class PolygonLayerCallbackInterface {
    public abstract void onClickConfirmed(PolygonInfo polygon);

    public static final class CppProxy extends PolygonLayerCallbackInterface
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

        @Override
        public void onClickConfirmed(PolygonInfo polygon)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_onClickConfirmed(this.nativeRef, polygon);
        }
        private native void native_onClickConfirmed(long _nativeRef, PolygonInfo polygon);
    }
}
