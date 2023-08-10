/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCMetadata
    - (id)init:(OCDocument *)doc
    {
        self = [super init];
        if (self == nil)
            return nil;
        _doc = doc;
        return self;
    }

    - (NSString *)title
    {
        return (SN2OC)SLDocGetTitle(CBGetNativeHandle(_doc.handle));
    }

    - (OCDocVersion)docVersion
    {
        return (OCDocVersion)SLDocGetVersion(CBGetNativeHandle(_doc.handle));
    }
@end
