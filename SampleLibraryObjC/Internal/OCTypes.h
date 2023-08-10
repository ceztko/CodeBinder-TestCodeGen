/* This file was generated. DO NOT EDIT! */
#ifndef CODE_BINDER_OBJC_OCSAMPLELIBRARY_INTERNAL_TYPES_HEADER
#define CODE_BINDER_OBJC_OCSAMPLELIBRARY_INTERNAL_TYPES_HEADER

#include <stdexcept>
#import "../OCTypes.h"
#import "CBOCBinderUtils.h"

// CBToString for enums
inline NSString * CBToString(OCAnnotationType value)
{
    switch (value)
    {
        case OCAnnotationType_Unknown:
            return@"OCAnnotationType_Unknown";
        case OCAnnotationType_Link:
            return@"OCAnnotationType_Link";
        case OCAnnotationType_Popup:
            return@"OCAnnotationType_Popup";
        case OCAnnotationType_Any:
            return@"OCAnnotationType_Any";
        default:
            throw std::runtime_error("Unsupported");
    }
}

inline NSString * CBToString(OCDocVersion value)
{
    switch (value)
    {
        case OCDocVersion_Unknown:
            return@"OCDocVersion_Unknown";
        case OCDocVersion_v1_0:
            return@"OCDocVersion_v1_0";
        case OCDocVersion_v2_0:
            return@"OCDocVersion_v2_0";
        default:
            throw std::runtime_error("Unsupported");
    }
}


#endif // CODE_BINDER_OBJC_OCSAMPLELIBRARY_INTERNAL_TYPES_HEADER
