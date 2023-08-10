/* This file was generated. DO NOT EDIT! */
package CodeBinder;

import java.util.*;

public abstract class HandledObjectFinalizer implements IObjectFinalizer
{
    long handle;

    // For retrocompatibility
    protected void finalize() throws Throwable
    {
        if (!BinderUtils.isCleanerAvaiable())
            freeHandle(handle);
    }

    public void run()
    {
        freeHandle(handle);
    }

    public abstract void freeHandle(long handle);
}