#ifndef CB_CBINT64ARRAY
#define CB_CBINT64ARRAY
#pragma once

#import "cboclibdefs.h"
#import <Foundation/Foundation.h>

OBJC_CODEBINDER_API @interface CBInt64Array : NSObject
{
    @private
    int64_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const int64_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int64_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int64_t *)arr :(NSUInteger)length :(BOOL)copy;

-(int64_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(int64_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) int64_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(int64_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBINT64ARRAY
