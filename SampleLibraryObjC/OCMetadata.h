/* This file was generated. DO NOT EDIT! */
#ifndef OCMETADATA_HEADER
#define OCMETADATA_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCMetadata : NSObject
{
    @private OCDocument * _doc;
}

    @property(nonatomic,readonly) NSString * title;
    - (NSString *)title;

    @property(nonatomic,readonly) OCDocVersion docVersion;
    - (OCDocVersion)docVersion;
@end
#endif // OCMETADATA_HEADER
