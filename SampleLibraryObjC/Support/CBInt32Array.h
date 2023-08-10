#ifndef CB_CBINT32ARRAY
#define CB_CBINT32ARRAY
#pragma once

#import "cboclibdefs.h"
#import <Foundation/Foundation.h>

OBJC_CODEBINDER_API @interface CBInt32Array : NSObject
{
    @private
    int32_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const int32_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int32_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int32_t *)arr :(NSUInteger)length :(BOOL)copy;

-(int32_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(int32_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) int32_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(int32_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBINT32ARRAY
