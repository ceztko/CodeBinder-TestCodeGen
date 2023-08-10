/* This file was generated. DO NOT EDIT! */
#define OBJC_CODEBINDER_EXPORT
#import "CBHandleRef.h"

@implementation CBHandleRef

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;

    _wrapper = nil;
    _handle = 0;
    return self;
}

- (id)init:(NSObject *)wrapper :(void *)handle;
{
    self = [super init];
    if (self == nil)
        return nil;

    _wrapper = wrapper;
    _handle = handle;
    return self;
}

- (NSObject *)wrapper
{
    return _wrapper;
}

- (void *)handle
{
    return _handle;
}

@end
