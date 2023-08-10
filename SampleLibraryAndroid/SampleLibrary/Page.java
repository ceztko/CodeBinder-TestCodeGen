/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class Page extends HandledObject<Page>
{
    PageAnnotationCollection _annotations;

    private Document __document;
    public Document getDocument()
    {
        return __document;
    }
    private void setDocument(Document value)
    {
        __document = value;
    }

    Page(
            Document doc,
            long page
        )
    {
        super(page, false);
        _annotations = new PageAnnotationCollection(this);
        setDocument(doc);
    }

    int getAnnotationCount()
    {
        return SLPageGetAnnotationCount(getHandle());
    }

    <TAnnotation extends Annotation> void getAnnotations(
            ArrayList<TAnnotation> annotations,
            PdfAnnotationPredicate predicate
        )
    {
        long[] annotPtrs = new long[getAnnotationCount()];
        SLPageGetAnnotations(getHandle(), annotPtrs);
        for (int i = 0; i < annotPtrs.length; i++)
        {
            long annotPtr = annotPtrs[i];
            Annotation annot = Annotation.createAnnotation(annotPtr, this);
            if (predicate.p(annot))
                annotations.add((TAnnotation)annot);
        }
    }

    public int getIndex()
    {
        return SLPageGetIndex(getHandle());
    }

    public Rect getRect()
    {
        double[] array = new double[4];
        SLPageGetRect(getHandle(), array);
        return Rect.create(array);
    }

    public PageAnnotationCollection getAnnotations()
    {
        return _annotations;
    }

    private static native void SLPageGetAnnotations(
            HandleRef page,
            long[] annots
        );

    private static native int SLPageGetAnnotationCount(HandleRef page);

    private static native int SLPageGetIndex(HandleRef page);

    private static native void SLPageGetRect(
            HandleRef page,
            double[] rect
        );
}
