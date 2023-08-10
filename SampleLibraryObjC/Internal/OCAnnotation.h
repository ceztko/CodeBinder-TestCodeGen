/* This file was generated. DO NOT EDIT! */
#ifndef OCANNOTATION_INTERNAL_HEADER
#define OCANNOTATION_INTERNAL_HEADER
#pragma once

#import "OCTypes.h"
#import "../OCAnnotation.h"

@interface OCAnnotation ()
    - (id)init:(OCAnnotationType)type
            :(OCPage *)page
            :(void *)annot
    ;

    + (OCAnnotation *)createAnnotation:(void *)annot
            :(OCPage *)page
    ;

    + (OCAnnotation *)createAnnotation:(void *)annot
            :(OCAnnotationType)type
            :(OCPage *)page
    ;
@end
#endif // OCANNOTATION_INTERNAL_HEADER
