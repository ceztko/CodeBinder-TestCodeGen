/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCAnnotationCollection
    - (NSMutableArray *)getAll
    {
        return [self getAll:OCAnnotationType_Any];
    }

    - (NSMutableArray *)getAll:(OCAnnotationType)type
    {
        NSMutableArray * ret = [[NSMutableArray alloc]init];
        [self getAllPrivate:ret :type];
        return ret;
    }

    - (void)getAllPrivate:(NSMutableArray *)annots
            :(OCAnnotationType)targetType

    {
        [self getAllInternal:annots :[[OCPdfAnnotationPredicate alloc]init:targetType]];
    }

    - (void)getAllInternal:(NSMutableArray *)annots
            :(OCPdfAnnotationPredicate *)predicate

    {
        @throw [NSException exceptionWithName:@"Not implemented" reason:nil userInfo:nil];
    }
@end
