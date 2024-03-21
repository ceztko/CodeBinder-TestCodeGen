/* This file was generated. DO NOT EDIT! */
#import "CBException.h"

@implementation CBException

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;

    return self;
}
- (id)init:(NSString *)message
{
    self = [super initWithName:@"Exception" reason:message userInfo:nil];
    if (self == nil)
        return nil;

    return self;
}
@end