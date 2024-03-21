#ifndef CB_CBBOOLARRAY
#define CB_CBBOOLARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBBoolArray : NSObject
{
    @private
    BOOL * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const BOOL *)arr :(NSUInteger)length;

-(id)initWithArray:(BOOL *)arr :(NSUInteger)length;

-(id)initWithArray:(BOOL *)arr :(NSUInteger)length :(BOOL)copy;

-(BOOL)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(BOOL)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) BOOL * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(BOOL *)data;

-(NSUInteger)length;
@end

#endif // CB_CBBOOLARRAY
