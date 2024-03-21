#import "CBUInt64Array.h"
#include <cstdlib>

@implementation CBUInt64Array

-(id)init:(NSUInteger)length
{
    self = [super init];
    if (self == nil)
        return nil;
    _data = (uint64_t *)calloc(length, sizeof(uint64_t));
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
        _data[i] = va_arg(args, uint64_t);
    }
    return self;
}

-(id)initWithConstArray:(const uint64_t *)arr :(NSUInteger)length
{
    self = [self init:length];
    if (self == nil)
        return nil;
    memcpy(_data, arr, length);
    return self;
}

-(id)initWithArray:(uint64_t *)arr :(NSUInteger)length
{
    self = [self initWithArray:arr :length :YES];
    if (self == nil)
        return nil;
    return self;
}

-(id)initWithArray:(uint64_t *)arr :(NSUInteger)length :(BOOL)copy
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

-(uint64_t)objectAtIndexedSubscript:(NSUInteger)idx
{
    if (idx >= _length)
        @throw [NSException exceptionWithName:@"IndexOutofRange" reason:@"Index was outside the bounds of the array." userInfo:nil];
    return _data[idx];
}

-(void)setObject:(uint64_t)value atIndexedSubscript:(NSUInteger)idx
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

-(uint64_t *)data
{
    return _data;
}

-(NSUInteger)length
{
    return _length;
}
@end
