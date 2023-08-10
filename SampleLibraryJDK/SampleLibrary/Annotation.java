/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class Annotation extends HandledObject<Annotation>
{
    AnnotationType _type;

    Page _page;

    protected Annotation(
            AnnotationType type,
            Page page,
            long annot
        )
    {
        super(annot, false);
        _type = type;
        _page = page;
    }

    static Annotation createAnnotation(
            long annot,
            Page page
        )
    {
        AnnotationType type = AnnotationType.fromValue(SLAnnotGetType(annot));
        return createAnnotation(annot, type, page);
    }

    static Annotation createAnnotation(
            long annot,
            AnnotationType type,
            Page page
        )
    {
        switch (type)
        {
            case Link:
                return new AnnotationLink(page, annot);
            case Popup:
                return new AnnotationPopup(page, annot);
            default:
                throw new RuntimeException("Unknown annotation type");        }
    }

    public Rect getRect()
    {
        double[] array = new double[4];
        SLAnnotGetRect(getHandle(), array);
        return Rect.create(array);
    }

    public Page getPage()
    {
        return _page;
    }

    public AnnotationType getType()
    {
        return _type;
    }

    private static native int SLAnnotGetType(long annot);

    private static native void SLAnnotGetRect(
            HandleRef annot,
            double[] rect
        );
}
