/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCRect
    - (id)init:(double)x
            :(double)y
            :(double)width
            :(double)height

    {
        self = [super init];
        if (self == nil)
            return nil;
        X = x;
        Y = y;
        Width = width;
        Height = height;
        return self;
    }

    + (OCRect *)create:(CBDoubleArray *)array
    {
        return [[OCRect alloc]init:array.data[0] :array.data[1] :array.data[2] :array.data[3]];
    }

    - (CBDoubleArray *)toArray
    {
        return [[CBDoubleArray alloc]initWithValues:4, self.left, self.bottom, Width, Height];
    }

    - (double)left
    {
        return X;
    }
    - (void)setLeft:(double)value
    {
        X = value;
    }

    - (double)bottom
    {
        return Y;
    }
    - (void)setBottom:(double)value
    {
        Y = value;
    }

    - (double)right
    {
        return self.left + Width;
    }

    - (double)top
    {
        return self.bottom + Height;
    }
@end
