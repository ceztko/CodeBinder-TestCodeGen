#ifndef CB_CBINT8ARRAY
#define CB_CBINT8ARRAY
#pragma once

#import "cboclibdefs.h"
#import <Foundation/Foundation.h>

OBJC_CODEBINDER_API @interface CBInt8Array : NSObject
{
    @private
    int8_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const int8_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int8_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int8_t *)arr :(NSUInteger)length :(BOOL)copy;

-(int8_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(int8_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) int8_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(int8_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBINT8ARRAY
