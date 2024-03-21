#ifndef CB_CBUINT32ARRAY
#define CB_CBUINT32ARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBUInt32Array : NSObject
{
    @private
    uint32_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const uint32_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint32_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint32_t *)arr :(NSUInteger)length :(BOOL)copy;

-(uint32_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(uint32_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) uint32_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(uint32_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBUINT32ARRAY
