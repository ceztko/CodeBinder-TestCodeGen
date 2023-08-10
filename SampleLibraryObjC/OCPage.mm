/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCPage
    @synthesize document = __document;

    - (id)init:(OCDocument *)doc
            :(void *)page

    {
        self = [super init:page :NO];
        if (self == nil)
            return nil;
        _annotations = [[OCPageAnnotationCollection alloc]init:self];
        self.document = doc;
        return self;
    }

    - (int32_t)getAnnotationCount
    {
        return SLPageGetAnnotationCount(CBGetNativeHandle(self.handle));
    }

    - (void)getAnnotations:(NSMutableArray *)annotations
            :(OCPdfAnnotationPredicate *)predicate

    {
        CBPtrArray * annotPtrs = [[CBPtrArray alloc]init:[self getAnnotationCount]];
        SLPageGetAnnotations(CBGetNativeHandle(self.handle), CBGetNativeArray(annotPtrs));
        for (int32_t i = 0; i < annotPtrs.length; i++)
        {
            void * annotPtr = annotPtrs.data[i];
            OCAnnotation * annot = [OCAnnotation createAnnotation:annotPtr :self];
            if ([predicate p:annot])
                [annotations addObject:CBCastOperator<OCAnnotation>(annot)];
        }
    }

    - (int32_t)index
    {
        return SLPageGetIndex(CBGetNativeHandle(self.handle));
    }

    - (OCRect *)rect
    {
        CBDoubleArray * array = [[CBDoubleArray alloc]init:4];
        SLPageGetRect(CBGetNativeHandle(self.handle), CBGetNativeArray(array));
        return [OCRect create:array];
    }

    - (OCPageAnnotationCollection *)annotations
    {
        return _annotations;
    }
@end
