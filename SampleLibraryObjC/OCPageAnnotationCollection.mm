/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCPageAnnotationCollection
    - (id)init:(OCPage *)page
    {
        self = [super init];
        if (self == nil)
            return nil;
        _page = page;
        return self;
    }

    - (int32_t)count
    {
        return [_page getAnnotationCount];
    }

    - (void)getAllInternal:(NSMutableArray *)annots
            :(OCPdfAnnotationPredicate *)predicate

    {
        [_page getAnnotations:annots :predicate];
    }
@end
