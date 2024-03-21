#ifndef CB_CBINT16ARRAY
#define CB_CBINT16ARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBInt16Array : NSObject
{
    @private
    int16_t * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const int16_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int16_t *)arr :(NSUInteger)length;

-(id)initWithArray:(int16_t *)arr :(NSUInteger)length :(BOOL)copy;

-(int16_t)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(int16_t)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) int16_t * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(int16_t *)data;

-(NSUInteger)length;
@end

#endif // CB_CBINT16ARRAY
