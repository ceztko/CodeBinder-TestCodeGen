/* This file was generated. DO NOT EDIT! */
#define OBJC_CODEBINDER_EXPORT
#import "CBKeyValuePair.h"

@implementation CBKeyValuePair

- (id)init:(id)key :(id)value
{
    self = [super init];
    if (self == nil)
        return nil;

    _key = key;
    _value = value;
    return self;
}

- (id)key
{
    return _key;
}

- (id)value
{
    return _value;
}
@end
