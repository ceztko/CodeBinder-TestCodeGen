/* This file was generated. DO NOT EDIT! */
#ifndef OCDOCUMENT_HEADER
#define OCDOCUMENT_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCDocument : CBHandledObject
{
    @private OCPageCollection * _pages;

    @private OCMetadata * _metadata;
}

    - (id)init;

    + (OCDocument *)createWithFile:(NSString *)filename;

    + (OCDocument *)createWithFile:(NSString *)filename
            :(NSString *)password
    ;

    + (OCDocument *)createWithArray:(CBUInt8Array *)bytes;

    + (OCDocument *)createWithArray:(CBUInt8Array *)bytes
            :(NSString *)password
    ;

    @property(nonatomic,readonly) OCPageCollection * pages;
    - (OCPageCollection *)pages;

    @property(nonatomic,readonly) OCMetadata * metadata;
    - (OCMetadata *)metadata;
@end
#endif // OCDOCUMENT_HEADER
