/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCPageCollection
    - (id)init:(OCDocument *)doc
    {
        self = [super init];
        if (self == nil)
            return nil;
        _doc = doc;
        return self;
    }

    - (OCPage *)newPage
    {
        return [self newPage:(OCRect *)nil];
    }

    - (OCPage *)newPage:(OCRect *)size
    {
        void * page = SLDocNewPage(CBGetNativeHandle(_doc.handle), CBGetNativeArray(size == nil ? (CBDoubleArray *)nil : [size toArray]));
        return [[OCPage alloc]init:_doc :page];
        ;
    }

    - (OCPage *)newPageAt:(int32_t)atIndex
    {
        return [self newPageAt:atIndex :(OCRect *)nil];
    }

    - (OCPage *)newPageAt:(int32_t)atIndex
            :(OCRect *)size

    {
        void * page = SLDocNewPageAt(CBGetNativeHandle(_doc.handle), atIndex, CBGetNativeArray(size == nil ? (CBDoubleArray *)nil : [size toArray]));
        return [[OCPage alloc]init:_doc :page];
    }

    - (NSMutableArray *)toList
    {
        int32_t pageCount = SLDocGetPageCount(CBGetNativeHandle(_doc.handle));
        CBPtrArray * pages = [[CBPtrArray alloc]init:pageCount];
        SLDocGetPages(CBGetNativeHandle(_doc.handle), CBGetNativeArray(pages));
        NSMutableArray * ret = [[NSMutableArray alloc]initWithCapacity:pageCount];
        for (int32_t i = 0; i < pages.length; i++)
        {
            void * page = pages.data[i];
            [ret addObject:[[OCPage alloc]init:_doc :page]];
        }
        return ret;
    }

    - (OCPage *)get:(int32_t)index
    {
        void * page = SLDocGetPage(CBGetNativeHandle(_doc.handle), index);
        return [[OCPage alloc]init:_doc :page];
    }

    - (int32_t)count
    {
        return SLDocGetPageCount(CBGetNativeHandle(_doc.handle));
    }
@end
