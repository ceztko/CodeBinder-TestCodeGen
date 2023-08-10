/* This file was generated. DO NOT EDIT! */
#ifndef OCPAGE_HEADER
#define OCPAGE_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCPage : CBHandledObject
{
    @private OCPageAnnotationCollection * _annotations;
}

    @property(nonatomic) OCDocument * document;

    @property(nonatomic,readonly) int32_t index;
    - (int32_t)index;

    @property(nonatomic,readonly) OCRect * rect;
    - (OCRect *)rect;

    @property(nonatomic,readonly) OCPageAnnotationCollection * annotations;
    - (OCPageAnnotationCollection *)annotations;
@end
#endif // OCPAGE_HEADER
