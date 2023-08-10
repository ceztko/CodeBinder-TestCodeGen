/* This file was generated. DO NOT EDIT! */
package CodeBinder;

import java.lang.reflect.*;

public class BinderUtils
{
    static Object _cleaner;
    static Method _register;

    static
    {
        String versionStr = System.getProperty("java.specification.version");
        if (versionStr.startsWith("1.") || versionStr.startsWith("0."))
            versionStr = versionStr.substring(2);

        int version = Integer.parseInt(versionStr);
        if (version >= 9)
        {
            try
            {
                Class cleanerClass = Class.forName("java.lang.ref.Cleaner");
                Method create = cleanerClass.getMethod("create");
                _register = cleanerClass.getDeclaredMethod("register", Object.class, Runnable.class);
                _cleaner = create.invoke(null);
            }
            catch (ClassNotFoundException | InvocationTargetException | IllegalAccessException |
                   NoSuchMethodException ex)
            {
                System.err.println(ex);
                throw new RuntimeException(ex);
            }
        }
    }

    // Simulates as operator https://stackoverflow.com/a/148949/213871
    public static <T> T as(Object obj, Class<T> clazz)
    {
        if (clazz.isInstance(obj))
            return clazz.cast(obj);

        return null;
    }

    public static boolean equals(String lhs, String rhs)
    {
        if (lhs == null)
        {
            if (rhs == null)
                return true;
            else
                return false;
        }
        else
        {
            return lhs.equals(rhs);
        }
    }

    public static boolean isCleanerAvaiable()
    {
        return _cleaner != null;
    }

    public static NativeHandle createNativeHandle(Object obj)
    {
        return new NativeHandle(newGlobalRef(obj), false);
    }

    public static NativeHandle createWeakNativeHandle(Object obj)
    {
        return new NativeHandle(newGlobalWeakRef(obj), true);
    }

    public static void freeNativeHandle(NativeHandle nativeHandle)
    {
        if (nativeHandle.weak)
            deleteGlobalWeakRef(nativeHandle.handle);
        else
            deleteGlobalRef(nativeHandle.handle);
    }

    static void registerForFinalization(Object obj, IObjectFinalizer finalizer)
    {
        try
        {
            _register.invoke(_cleaner, obj, finalizer);
        }
        catch (InvocationTargetException | IllegalAccessException ex)
        {
            System.err.println(ex);
            throw new RuntimeException(ex);
        }
    }

    static native long newGlobalRef(Object obj);
    static native void deleteGlobalRef(long globalref);
    static native long newGlobalWeakRef(Object obj);
    static native void deleteGlobalWeakRef(long globalref);
    static native Object getGlobalRefTarget(long handle);
    static native Object getGlobalWeakRefTarget(long handle);
}