/* This file was generated. DO NOT EDIT! */
#pragma once

#include "libdefs.h"
#include "Types.h"

#ifdef __cplusplus
extern "C"
{
#endif

SAMPLELIBRARY_SHARED_API void SLFreeDocument(
    SLDocument* doc);

SAMPLELIBRARY_SHARED_API SLDocument* SLCreateDocument(
    );

SAMPLELIBRARY_SHARED_API SLDocument* SLPdfLoadBuffer(
    const uint8_t buffer[], int offset, int size, cbstring password);

SAMPLELIBRARY_SHARED_API SLDocument* SLPdfLoadFile(
    cbstring filename, cbstring password);

SAMPLELIBRARY_SHARED_API cbbool SLIsPdfDocument(
    cbstring filename, SLDocVersion * version);

SAMPLELIBRARY_SHARED_API cbbool SLIsPdfDocumentBuffer(
    const uint8_t buffer[], int size, SLDocVersion * version);

SAMPLELIBRARY_SHARED_API int SLDocGetPageCount(
    SLDocument* doc);

SAMPLELIBRARY_SHARED_API void SLDocGetPages(
    SLDocument* doc, SLPdfPage* pages[]);

SAMPLELIBRARY_SHARED_API SLPdfPage* SLDocGetPage(
    SLDocument* doc, int index);

SAMPLELIBRARY_SHARED_API void SLDocAppendPage(
    SLDocument* doc, SLDocument* srcdoc, int pageIndex);

SAMPLELIBRARY_SHARED_API SLPdfPage* SLDocNewPageAt(
    SLDocument* doc, int atIndex, const double rect[4]);

SAMPLELIBRARY_SHARED_API SLPdfPage* SLDocNewPage(
    SLDocument* doc, const double rect[4]);

SAMPLELIBRARY_SHARED_API SLDocVersion SLDocGetVersion(
    SLDocument* doc);

SAMPLELIBRARY_SHARED_API cbstring SLDocGetTitle(
    SLDocument* doc);

#ifdef __cplusplus
}
#endif
