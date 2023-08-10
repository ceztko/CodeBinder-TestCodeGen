/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class PageAnnotationCollection extends AnnotationCollection
{
    private Page _page;

    PageAnnotationCollection(Page page)
    {
        _page = page;
    }

    public int getCount()
    {
        return _page.getAnnotationCount();
    }

    protected <TAnnotation extends Annotation> void getAllInternal(
            ArrayList<TAnnotation> annots,
            PdfAnnotationPredicate predicate
        )
    {
        _page.getAnnotations(annots, predicate);
    }
}
