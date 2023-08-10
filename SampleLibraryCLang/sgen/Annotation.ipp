/* This file was generated. DO NOT EDIT! */
#include "Annotation.h"
#include "CBInterop.hpp"

// Cpp implementations declarations
namespace samplelibrary
{

inline SLAnnotationType SLAnnotGetType(
    SLAnnotation* annot);

inline void SLAnnotGetRect(
    SLAnnotation* annot, double rect[4]);

}
// C trampolines
extern "C"
{

SAMPLELIBRARY_SHARED_API SLAnnotationType SLAnnotGetType(
    SLAnnotation* annot)
{
    return samplelibrary::SLAnnotGetType(annot);
}

SAMPLELIBRARY_SHARED_API void SLAnnotGetRect(
    SLAnnotation* annot, double rect[4])
{
    samplelibrary::SLAnnotGetRect(annot, rect);
}

}


