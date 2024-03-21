#ifndef CB_CBPTRARRAY
#define CB_CBPTRARRAY
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

OCSAMPLELIBRARY_API @interface CBPtrArray : NSObject
{
    @private
    void ** _data;
    NSUInteger _length;
    BOOL _handled;
}

-(id)init:(NSUInteger)length;

-(id)initWithValues:(NSUInteger)length, ...;

-(id)initWithConstArray:(void * const *)arr :(NSUInteger)length;

-(id)initWithArray:(void **)arr :(NSUInteger)length;

-(id)initWithArray:(void **)arr :(NSUInteger)length :(BOOL)copy;

-(void *)objectAtIndexedSubscript:(NSUInteger)idx;

-(void)setObject:(void *)value atIndexedSubscript:(NSUInteger)idx;

@property (readonly,nonatomic) void ** data;
@property (readonly,nonatomic) NSUInteger length;

-(void)dealloc;

-(void **)data;

-(NSUInteger)length;
@end

#endif // CB_CBPTRARRAY
