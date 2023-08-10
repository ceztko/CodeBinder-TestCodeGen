/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class PdfAnnotationPredicate
{
    AnnotationType _targetType;

    public PdfAnnotationPredicate(AnnotationType targetType)
    {
        _targetType = targetType;
    }

    public boolean p(Annotation annot)
    {
        if (_targetType != AnnotationType.Any && annot.getType() != _targetType)
            return false;
        return true;
    }
}
