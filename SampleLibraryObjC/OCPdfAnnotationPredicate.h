/* This file was generated. DO NOT EDIT! */
#ifndef OCPDFANNOTATIONPREDICATE_HEADER
#define OCPDFANNOTATIONPREDICATE_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCPdfAnnotationPredicate : NSObject
{
    @private OCAnnotationType _targetType;
}

    - (id)init:(OCAnnotationType)targetType;

    - (BOOL)p:(OCAnnotation *)annot;
@end
#endif // OCPDFANNOTATIONPREDICATE_HEADER
