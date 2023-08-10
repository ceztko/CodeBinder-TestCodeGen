#ifndef CB_CBUINT64ARRAY
#define CB_CBUINT64ARRAY
#pragma once

#import "cboclibdefs.h"
#import <Foundation/Foundation.h>

OBJC_CODEBINDER_API @interface CBUInt64Array : NSObject
{
    @private
    uint64_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const uint64_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint64_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint64_t *)arr :(NSUInteger)length :(BOOL)copy;

-(uint64_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(uint64_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) uint64_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(uint64_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBUINT64ARRAY
