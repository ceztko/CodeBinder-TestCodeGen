/* This file was generated. DO NOT EDIT! */
#pragma once

#include "libdefs.h"
#include "Types.h"

#ifdef __cplusplus
extern "C"
{
#endif

SAMPLELIBRARY_SHARED_API SLAnnotationType SLAnnotGetType(
    SLAnnotation* annot);

SAMPLELIBRARY_SHARED_API void SLAnnotGetRect(
    SLAnnotation* annot, double rect[4]);

#ifdef __cplusplus
}
#endif
