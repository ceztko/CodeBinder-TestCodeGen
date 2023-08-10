/* This file was generated. DO NOT EDIT! */
#ifndef OCRECT_HEADER
#define OCRECT_HEADER
#pragma once

#import "objclibdefs.h"
#import "OCTypes.h"

OCSAMPLELIBRARY_API @interface OCRect : NSObject
{
    @public double X;

    @public double Y;

    @public double Width;

    @public double Height;
}

    - (id)init:(double)x
            :(double)y
            :(double)width
            :(double)height
    ;

    + (OCRect *)create:(CBDoubleArray *)array;

    - (CBDoubleArray *)toArray;

    @property(nonatomic) double left;
    - (double)left;
    - (void)setLeft:(double)value;

    @property(nonatomic) double bottom;
    - (double)bottom;
    - (void)setBottom:(double)value;

    @property(nonatomic,readonly) double right;
    - (double)right;

    @property(nonatomic,readonly) double top;
    - (double)top;
@end
#endif // OCRECT_HEADER
