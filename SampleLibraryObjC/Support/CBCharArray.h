#ifndef CB_CBCHARARRAY
#define CB_CBCHARARRAY
#pragma once

#import "cboclibdefs.h"
#import <Foundation/Foundation.h>

OBJC_CODEBINDER_API @interface CBCharArray : NSObject
{
    @private
    char * _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(const char *)arr :(NSUInteger)length;

-(id)initWithArray:(char *)arr :(NSUInteger)length;

-(id)initWithArray:(char *)arr :(NSUInteger)length :(BOOL)copy;

-(char)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(char)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) char * data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(char *)data;

-(NSUInteger)length;
@end

#endif // CB_CBCHARARRAY
