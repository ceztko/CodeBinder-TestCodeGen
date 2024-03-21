#ifndef CB_CBDOUBLEARRAY
#define CB_CBDOUBLEARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBDoubleArray : NSObject
{
    @private
    double * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const double *)arr :(NSUInteger)length;

-(id)initWithArray:(double *)arr :(NSUInteger)length;

-(id)initWithArray:(double *)arr :(NSUInteger)length :(BOOL)copy;

-(double)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(double)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) double * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(double *)data;

-(NSUInteger)length;
@end

#endif // CB_CBDOUBLEARRAY
