/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCAnnotation
    - (id)init:(OCAnnotationType)type
            :(OCPage *)page
            :(void *)annot

    {
        self = [super init:annot :NO];
        if (self == nil)
            return nil;
        _type = type;
        _page = page;
        return self;
    }

    + (OCAnnotation *)createAnnotation:(void *)annot
            :(OCPage *)page

    {
        OCAnnotationType type = (OCAnnotationType)SLAnnotGetType(annot);
        return [OCAnnotation createAnnotation:annot :type :page];
    }

    + (OCAnnotation *)createAnnotation:(void *)annot
            :(OCAnnotationType)type
            :(OCPage *)page

    {
        switch (type)
        {
            case OCAnnotationType_Link:
                return [[OCAnnotationLink alloc]init:page :annot];
            case OCAnnotationType_Popup:
                return [[OCAnnotationPopup alloc]init:page :annot];
            default:
                @throw [[CBException alloc]init:@"Unknown annotation type"];
        }
    }

    - (OCRect *)rect
    {
        CBDoubleArray * array = [[CBDoubleArray alloc]init:4];
        SLAnnotGetRect(CBGetNativeHandle(self.handle), CBGetNativeArray(array));
        return [OCRect create:array];
    }

    - (OCPage *)page
    {
        return _page;
    }

    - (OCAnnotationType)type
    {
        return _type;
    }
@end
