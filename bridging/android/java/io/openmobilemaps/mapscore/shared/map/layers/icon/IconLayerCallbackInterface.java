// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

package io.openmobilemaps.mapscore.shared.map.layers.icon;

import com.snapchat.djinni.NativeObjectManager;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class IconLayerCallbackInterface {
    public abstract boolean onClickConfirmed(ArrayList<IconInfoInterface> icons);

    public static final class CppProxy extends IconLayerCallbackInterface
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
        public boolean onClickConfirmed(ArrayList<IconInfoInterface> icons)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_onClickConfirmed(this.nativeRef, icons);
        }
        private native boolean native_onClickConfirmed(long _nativeRef, ArrayList<IconInfoInterface> icons);
    }
}
