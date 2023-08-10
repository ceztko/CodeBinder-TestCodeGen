/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public abstract class AnnotationCollection
{
    public ArrayList<Annotation> getAll()
    {
        return getAll(AnnotationType.Any);
    }

    public ArrayList<Annotation> getAll(AnnotationType type)
    {
        ArrayList<Annotation> ret = new ArrayList<Annotation>();
        getAllPrivate(ret, type);
        return ret;
    }

    private <TAnnotation extends Annotation> void getAllPrivate(
            ArrayList<TAnnotation> annots,
            AnnotationType targetType
        )
    {
        getAllInternal(annots, new PdfAnnotationPredicate(targetType));
    }

    protected abstract <TAnnotation extends Annotation> void getAllInternal(
            ArrayList<TAnnotation> annots,
            PdfAnnotationPredicate predicate
        );
}
