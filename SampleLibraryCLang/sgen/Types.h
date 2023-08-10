#pragma once

#include "CBBaseTypes.h"

// Opaque types

#define SLAnnotation void
#define SLDocument void
#define SLPdfPage void

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
// Enums

typedef enum
{
    ANNOTATION_TYPE_UNKNOWN = 0,
    ANNOTATION_TYPE_LINK = 1,
    ANNOTATION_TYPE_POPUP = 2,
    ANNOTATION_TYPE_ANY = -1,
    __ANNOTATION_TYPE__ = 0xFFFFFFFF,
} SLAnnotationType;

typedef enum
{
    DOC_VERSION_UNKNOWN = 0,
    DOC_VERSION_1_0 = 10,
    DOC_VERSION_2_0 = 20,
    __DOC_VERSION__ = 0xFFFFFFFF,
} SLDocVersion;

// Function pointer delegates


#ifdef __cplusplus
}
#endif // __cplusplus
