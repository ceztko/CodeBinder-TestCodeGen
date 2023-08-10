#define OBJC_CODEBINDER_EXPORT
#import "CBNSIntegerArray.h"
#include <cstdlib>

@implementation CBNSIntegerArray

-(id)init:(NSUInteger)length
{
    self = [super init];
    if (self == nil)
        return nil;
    _data = (NSInteger *)calloc(length, sizeof(NSInteger));
    _length = length;
    _handled = YES;
    return self;
}

-(id)initWithValues:(NSUInteger)length, ...
{
    self = [self init:length];
    if (self == nil)
        return nil;
    va_list args;
    va_start(args, length);
    for (int i = 0; i < length; i++)
    {
        _data[i] = va_arg(args, NSInteger);
    }
    return self;
}

-(id)initWithConstArray:(const NSInteger *)arr :(NSUInteger)length
{
    self = [self init:length];
    if (self == nil)
        return nil;
    memcpy(_data, arr, length);
    return self;
}

-(id)initWithArray:(NSInteger *)arr :(NSUInteger)length
{
    self = [self initWithArray:arr :length :YES];
    if (self == nil)
        return nil;
    return self;
}

-(id)initWithArray:(NSInteger *)arr :(NSUInteger)length :(BOOL)copy
{
    if (copy)
    {
        self = [self initWithConstArray:arr :length];
    }
    else
    {
        self = [super init];
        _data = arr;
        _length = length;
        _handled = false;
    }
    if (self == nil)
        return nil;
    return self;
}

-(NSInteger)objectAtIndexedSubscript:(NSUInteger)idx
{
    if (idx >= _length)
        @throw [NSException exceptionWithName:@"IndexOutofRange" reason:@"Index was outside the bounds of the array." userInfo:nil];
    return _data[idx];
}

-(void)setObject:(NSInteger)value atIndexedSubscript:(NSUInteger)idx
{
    if (idx >= _length)
        @throw [NSException exceptionWithName:@"IndexOutofRange" reason:@"Index was outside the bounds of the array." userInfo:nil];
    _data[idx] = value;
}

-(void)dealloc
{
    if(_handled)
        free(_data);
}

-(NSInteger *)data
{
    return _data;
}

-(NSUInteger)length
{
    return _length;
}
@end
