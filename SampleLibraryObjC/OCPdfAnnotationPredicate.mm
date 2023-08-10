/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCPdfAnnotationPredicate
    - (id)init:(OCAnnotationType)targetType
    {
        self = [super init];
        if (self == nil)
            return nil;
        _targetType = targetType;
        return self;
    }

    - (BOOL)p:(OCAnnotation *)annot
    {
        if (_targetType != OCAnnotationType_Any && annot.type != _targetType)
            return NO;
        return YES;
    }
@end
