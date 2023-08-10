/* This file was generated. DO NOT EDIT! */
#ifndef OCPAGECOLLECTION_HEADER
#define OCPAGECOLLECTION_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCPageCollection : NSObject<NSFastEnumeration>
{
    @private OCDocument * _doc;
}

    - (OCPage *)newPage;

    - (OCPage *)newPage:(OCRect *)size;

    - (OCPage *)newPageAt:(int32_t)atIndex;

    - (OCPage *)newPageAt:(int32_t)atIndex
            :(OCRect *)size
    ;

    - (NSMutableArray *)toList;

    - (OCPage *)get:(int32_t)index;

    @property(nonatomic,readonly) int32_t count;
    - (int32_t)count;
@end
#endif // OCPAGECOLLECTION_HEADER
