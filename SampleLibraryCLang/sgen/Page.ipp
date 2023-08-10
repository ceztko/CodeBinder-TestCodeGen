/* This file was generated. DO NOT EDIT! */
#include "Page.h"
#include "CBInterop.hpp"

// Cpp implementations declarations
namespace samplelibrary
{

inline void SLPageGetAnnotations(
    SLPdfPage* page, SLAnnotation* annots[]);

inline int SLPageGetAnnotationCount(
    SLPdfPage* page);

inline int SLPageGetIndex(
    SLPdfPage* page);

inline void SLPageGetRect(
    SLPdfPage* page, double rect[4]);

}
// C trampolines
extern "C"
{

SAMPLELIBRARY_SHARED_API void SLPageGetAnnotations(
    SLPdfPage* page, SLAnnotation* annots[])
{
    samplelibrary::SLPageGetAnnotations(page, annots);
}

SAMPLELIBRARY_SHARED_API int SLPageGetAnnotationCount(
    SLPdfPage* page)
{
    return samplelibrary::SLPageGetAnnotationCount(page);
}

SAMPLELIBRARY_SHARED_API int SLPageGetIndex(
    SLPdfPage* page)
{
    return samplelibrary::SLPageGetIndex(page);
}

SAMPLELIBRARY_SHARED_API void SLPageGetRect(
    SLPdfPage* page, double rect[4])
{
    samplelibrary::SLPageGetRect(page, rect);
}

}


