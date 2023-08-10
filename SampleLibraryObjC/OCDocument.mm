/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCDocument
    + (void)initialize
    {
        if (self != [OCDocument class])
            return;
        [OCCommon initLibrary];
    }

    - (id)init
    {
        self = [self init:SLCreateDocument()];
        if (self == nil)
            return nil;

        return self;
    }

    - (id)init:(void *)ptr
    {
        self = [super init:ptr :YES];
        if (self == nil)
            return nil;
        _pages = [[OCPageCollection alloc]init:self];
        _metadata = [[OCMetadata alloc]init:self];
        return self;
    }

    - (void)freeHandle:(void *)handle
    {
        SLFreeDocument(handle);
    }

    + (OCDocument *)createWithFile:(NSString *)filename
    {
        return [self createWithFile:filename :(NSString *)nil];
    }

    + (OCDocument *)createWithFile:(NSString *)filename
            :(NSString *)password

    {
        void * ptr = SLPdfLoadFile(SN2OC(filename), SN2OC(password));
        OCDocument * doc = [[OCDocument alloc]init:ptr];
        return doc;
    }

    + (OCDocument *)createWithArray:(CBUInt8Array *)bytes
    {
        return [self createWithArray:bytes :(NSString *)nil];
    }

    + (OCDocument *)createWithArray:(CBUInt8Array *)bytes
            :(NSString *)password

    {
        void * ptr = SLPdfLoadBuffer(CBGetNativeArray(bytes), 0, bytes.length, SN2OC(password));
        return [[OCDocument alloc]init:ptr];
    }

    - (OCPageCollection *)pages
    {
        return _pages;
    }

    - (OCMetadata *)metadata
    {
        return _metadata;
    }
@end
