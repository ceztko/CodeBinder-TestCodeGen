#ifndef CB_CBNSINTEGERARRAY
#define CB_CBNSINTEGERARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBNSIntegerArray : NSObject
{
    @private
    NSInteger * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const NSInteger *)arr :(NSUInteger)length;

-(id)initWithArray:(NSInteger *)arr :(NSUInteger)length;

-(id)initWithArray:(NSInteger *)arr :(NSUInteger)length :(BOOL)copy;

-(NSInteger)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(NSInteger)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) NSInteger * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(NSInteger *)data;

-(NSUInteger)length;
@end

#endif // CB_CBNSINTEGERARRAY
