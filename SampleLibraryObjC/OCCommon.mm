/* This file was generated. DO NOT EDIT! */
#import "Internal/OCSampleLibrary.h"
#import "Internal/CBOCInterop.h"
#import <SampleLibrary.h>

@implementation OCCommon
    static BOOL _init;

    + (void)initPlatform
    {

    }

    + (void)initLibrary
    {
        if (_init)
            return;
        SLInit();
        [OCCommon initPlatform];
    }
@end
