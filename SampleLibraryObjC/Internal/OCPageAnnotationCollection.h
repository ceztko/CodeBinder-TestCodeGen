/* This file was generated. DO NOT EDIT! */
#ifndef OCPAGEANNOTATIONCOLLECTION_INTERNAL_HEADER
#define OCPAGEANNOTATIONCOLLECTION_INTERNAL_HEADER
#pragma once

#import "OCTypes.h"
#import "../OCPageAnnotationCollection.h"

@interface OCPageAnnotationCollection ()
    - (id)init:(OCPage *)page;

    - (void)getAllInternal:(NSMutableArray *)annots
            :(OCPdfAnnotationPredicate *)predicate
    ;
@end
#endif // OCPAGEANNOTATIONCOLLECTION_INTERNAL_HEADER
