/* This file was generated. DO NOT EDIT! */
package CodeBinder;

public class NativeHandle
{
    long handle;
    boolean weak;

    NativeHandle(long handle, boolean weak)
    {
        this.handle = handle;
        this.weak = weak;
    }

    public long getAddress()
    {
        return handle;
    }

    public Object getTarget()
    {
        if (weak)
            return BinderUtils.getGlobalWeakRefTarget(handle);
        else
            return BinderUtils.getGlobalRefTarget(handle);
    }
}