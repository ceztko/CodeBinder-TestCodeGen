/* This file was generated. DO NOT EDIT! */
#ifndef CB_EXCPETION
#define CB_EXCPETION
#pragma once

#import "cboclibdefs.h"
#import <Foundation/Foundation.h>

// Substitute for .NET Excpetion
OBJC_CODEBINDER_API @interface CBException : NSException
- (id)init;
- (id)init:(NSString *)message;
@end

#endif // CB_EXCPETION
