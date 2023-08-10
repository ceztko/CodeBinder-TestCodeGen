/* This file was generated. DO NOT EDIT! */
#ifndef CB_KEYVALUEPAIR
#define CB_KEYVALUEPAIR
#pragma once

#import "cboclibdefs.h"
#import <Foundation/Foundation.h>

// Substitute for .NET KeyValuePair
OBJC_CODEBINDER_API @interface CBKeyValuePair<__covariant KeyType, __covariant ValueType> : NSObject
{
@private
    KeyType _key;
    ValueType _value;
}

@property (nonatomic,readonly) KeyType key;
@property (nonatomic,readonly) ValueType value;

- (id)init:(KeyType)key :(ValueType)value;
- (KeyType)key;
- (ValueType)value;
@end

#endif // CB_KEYVALUEPAIR
