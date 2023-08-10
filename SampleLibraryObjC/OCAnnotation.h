/* This file was generated. DO NOT EDIT! */
#ifndef OCANNOTATION_HEADER
#define OCANNOTATION_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCAnnotation : CBHandledObject
{
    @private OCAnnotationType _type;

    @private OCPage * _page;
}

    @property(nonatomic,readonly) OCRect * rect;
    - (OCRect *)rect;

    @property(nonatomic,readonly) OCPage * page;
    - (OCPage *)page;

    @property(nonatomic,readonly) OCAnnotationType type;
    - (OCAnnotationType)type;
@end
#endif // OCANNOTATION_HEADER
