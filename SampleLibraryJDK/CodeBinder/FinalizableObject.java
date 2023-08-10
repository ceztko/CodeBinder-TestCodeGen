/* This file was generated. DO NOT EDIT! */
package CodeBinder;

import java.util.*;

public abstract class FinalizableObject
{
    ArrayList<IObjectFinalizer> _finalizers;

    protected FinalizableObject()
    {
    }

    protected void registerFinalizer(IObjectFinalizer finalizer)
    {
        if (BinderUtils.isCleanerAvaiable())
        {
            BinderUtils.registerForFinalization(this, finalizer);
        }
        else
        {
            if (_finalizers == null)
                _finalizers = new ArrayList<IObjectFinalizer>();

            _finalizers.add(finalizer);
        }
    }
}
