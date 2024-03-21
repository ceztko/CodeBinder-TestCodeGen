/* This file was generated. DO NOT EDIT! */
#ifndef CB_HANDLEREF
#define CB_HANDLEREF
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

// https://docs.microsoft.com/en-us/dotnet/api/system.runtime.interopservices.handleref
OCSAMPLELIBRARY_API @interface CBHandleRef : NSObject
{
    @private
    NSObject * _wrapper;
    void * _handle;
}

@property (nonatomic,readonly) NSObject * wrapper;
@property (nonatomic,readonly) void * handle;

- (id)init;
- (id)init:(NSObject *)wrapper :(void *)handle;
- (NSObject *)wrapper;
- (void *)handle;
@end

#endif // CB_HANDLEREF