/* This file was generated. DO NOT EDIT! */
#ifndef OCANNOTATIONCOLLECTION_HEADER
#define OCANNOTATIONCOLLECTION_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCAnnotationCollection : NSObject
    - (NSMutableArray *)getAll;

    - (NSMutableArray *)getAll:(OCAnnotationType)type;
@end
#endif // OCANNOTATIONCOLLECTION_HEADER
