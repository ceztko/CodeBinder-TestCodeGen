/* This file was generated. DO NOT EDIT! */
#ifndef CODE_BINDER_OBJC_OCSAMPLELIBRARY_TYPES_HEADER
#define CODE_BINDER_OBJC_OCSAMPLELIBRARY_TYPES_HEADER

#import "CBOCBaseTypes.h"

// Forward declared classes

@class OCAnnotation;
@class OCAnnotationLink;
@class OCAnnotationPopup;
@class OCAnnotationCollection;
@class OCPdfAnnotationPredicate;
@class OCCommon;
@class OCDocument;
@class OCPageCollection;
@class OCMetadata;
@class OCPage;
@class OCPageAnnotationCollection;
@class OCRect;

// Forward declared interfaces


// Enums

typedef NS_ENUM(int32_t, OCAnnotationType)
{
    OCAnnotationType_Unknown = 0,
    OCAnnotationType_Link = 1,
    OCAnnotationType_Popup = 2,
    OCAnnotationType_Any = -1,
};

typedef NS_ENUM(int32_t, OCDocVersion)
{
    OCDocVersion_Unknown = 0,
    OCDocVersion_v1_0 = 10,
    OCDocVersion_v2_0 = 20,
};


// Callbacks


#endif // CODE_BINDER_OBJC_OCSAMPLELIBRARY_TYPES_HEADER
