/* This file was generated. DO NOT EDIT! */
#ifndef OCPAGE_INTERNAL_HEADER
#define OCPAGE_INTERNAL_HEADER
#pragma once

#import "OCTypes.h"
#import "../OCPage.h"

@interface OCPage ()
    - (id)init:(OCDocument *)doc
            :(void *)page
    ;

    - (int32_t)getAnnotationCount;

    - (void)getAnnotations:(NSMutableArray *)annotations
            :(OCPdfAnnotationPredicate *)predicate
    ;
@end
#endif // OCPAGE_INTERNAL_HEADER
