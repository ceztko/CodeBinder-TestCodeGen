#ifndef CB_CBUINT16ARRAY
#define CB_CBUINT16ARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBUInt16Array : NSObject
{
    @private
    uint16_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const uint16_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint16_t *)arr :(NSUInteger)length;

-(id)initWithArray:(uint16_t *)arr :(NSUInteger)length :(BOOL)copy;

-(uint16_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(uint16_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) uint16_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(uint16_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBUINT16ARRAY
