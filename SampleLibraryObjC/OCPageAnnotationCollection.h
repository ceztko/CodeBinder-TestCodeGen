/* This file was generated. DO NOT EDIT! */
#ifndef OCPAGEANNOTATIONCOLLECTION_HEADER
#define OCPAGEANNOTATIONCOLLECTION_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"
#import "OCAnnotationCollection.h"

OCSAMPLELIBRARY_API @interface OCPageAnnotationCollection : OCAnnotationCollection
{
    @private OCPage * _page;
}

    @property(nonatomic,readonly) int32_t count;
    - (int32_t)count;
@end
#endif // OCPAGEANNOTATIONCOLLECTION_HEADER
