// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from task_scheduler.djinni

package io.openmobilemaps.mapscore.shared.map.scheduling;

import com.snapchat.djinni.NativeObjectManager;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class SchedulerInterface {
    public abstract void addTask(TaskInterface task);

    public abstract void addTasks(ArrayList<TaskInterface> tasks);

    public abstract void removeTask(String id);

    public abstract void clear();

    public abstract void pause();

    public abstract void resume();

    public static final class CppProxy extends SchedulerInterface
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
        public void addTask(TaskInterface task)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_addTask(this.nativeRef, task);
        }
        private native void native_addTask(long _nativeRef, TaskInterface task);

        @Override
        public void addTasks(ArrayList<TaskInterface> tasks)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_addTasks(this.nativeRef, tasks);
        }
        private native void native_addTasks(long _nativeRef, ArrayList<TaskInterface> tasks);

        @Override
        public void removeTask(String id)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_removeTask(this.nativeRef, id);
        }
        private native void native_removeTask(long _nativeRef, String id);

        @Override
        public void clear()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_clear(this.nativeRef);
        }
        private native void native_clear(long _nativeRef);

        @Override
        public void pause()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_pause(this.nativeRef);
        }
        private native void native_pause(long _nativeRef);

        @Override
        public void resume()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_resume(this.nativeRef);
        }
        private native void native_resume(long _nativeRef);
    }
}
