#ifndef CB_CBFLOATARRAY
#define CB_CBFLOATARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBFloatArray : NSObject
{
    @private
    float * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const float *)arr :(NSUInteger)length;

-(id)initWithArray:(float *)arr :(NSUInteger)length;

-(id)initWithArray:(float *)arr :(NSUInteger)length :(BOOL)copy;

-(float)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(float)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) float * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(float *)data;

-(NSUInteger)length;
@end

#endif // CB_CBFLOATARRAY
