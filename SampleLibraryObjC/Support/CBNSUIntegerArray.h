#ifndef CB_CBNSUINTEGERARRAY
#define CB_CBNSUINTEGERARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBNSUIntegerArray : NSObject
{
    @private
    NSUInteger * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const NSUInteger *)arr :(NSUInteger)length;

-(id)initWithArray:(NSUInteger *)arr :(NSUInteger)length;

-(id)initWithArray:(NSUInteger *)arr :(NSUInteger)length :(BOOL)copy;

-(NSUInteger)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(NSUInteger)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) NSUInteger * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(NSUInteger *)data;

-(NSUInteger)length;
@end

#endif // CB_CBNSUINTEGERARRAY
