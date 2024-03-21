#ifndef CB_CBUINT8ARRAY
#define CB_CBUINT8ARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBUInt8Array : NSObject
{
    @private
    uint8_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const uint8_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint8_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint8_t *)arr :(NSUInteger)length :(BOOL)copy;

-(uint8_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(uint8_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) uint8_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(uint8_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBUINT8ARRAY
