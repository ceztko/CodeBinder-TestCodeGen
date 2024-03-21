/* This file was generated. DO NOT EDIT! */
#ifndef CB_EXCPETION
#define CB_EXCPETION
#pragma once

#import "../objclibdefs.h"
#import <Foundation/Foundation.h>

// Substitute for .NET Excpetion
OCSAMPLELIBRARY_API @interface CBException : NSException
- (id)init;
- (id)init:(NSString *)message;
@end

#endif // CB_EXCPETION