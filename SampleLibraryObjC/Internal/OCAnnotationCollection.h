/* This file was generated. DO NOT EDIT! */
#ifndef OCANNOTATIONCOLLECTION_INTERNAL_HEADER
#define OCANNOTATIONCOLLECTION_INTERNAL_HEADER
#pragma once

#import "OCTypes.h"
#import "../OCAnnotationCollection.h"

@interface OCAnnotationCollection ()
    - (void)getAllPrivate:(NSMutableArray *)annots
            :(OCAnnotationType)targetType
    ;

    - (void)getAllInternal:(NSMutableArray *)annots
            :(OCPdfAnnotationPredicate *)predicate
    ;
@end
#endif // OCANNOTATIONCOLLECTION_INTERNAL_HEADER
