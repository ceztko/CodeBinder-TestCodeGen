/* This file was generated. DO NOT EDIT! */
#pragma once

#include "libdefs.h"
#include "Types.h"

#ifdef __cplusplus
extern "C"
{
#endif

SAMPLELIBRARY_SHARED_API void SLPageGetAnnotations(
    SLPdfPage* page, SLAnnotation* annots[]);

SAMPLELIBRARY_SHARED_API int SLPageGetAnnotationCount(
    SLPdfPage* page);

SAMPLELIBRARY_SHARED_API int SLPageGetIndex(
    SLPdfPage* page);

SAMPLELIBRARY_SHARED_API void SLPageGetRect(
    SLPdfPage* page, double rect[4]);

#ifdef __cplusplus
}
#endif
