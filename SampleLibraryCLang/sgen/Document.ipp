/* This file was generated. DO NOT EDIT! */
#include "Document.h"
#include "CBInterop.hpp"

// Cpp implementations declarations
namespace samplelibrary
{

inline void SLFreeDocument(
    SLDocument* doc);

inline SLDocument* SLCreateDocument(
    );

inline SLDocument* SLPdfLoadBuffer(
    const uint8_t buffer[], int offset, int size, const cbstringp& password);

inline SLDocument* SLPdfLoadFile(
    const cbstringp& filename, const cbstringp& password);

inline cbbool SLIsPdfDocument(
    const cbstringp& filename, SLDocVersion * version);

inline cbbool SLIsPdfDocumentBuffer(
    const uint8_t buffer[], int size, SLDocVersion * version);

inline int SLDocGetPageCount(
    SLDocument* doc);

inline void SLDocGetPages(
    SLDocument* doc, SLPdfPage* pages[]);

inline SLPdfPage* SLDocGetPage(
    SLDocument* doc, int index);

inline void SLDocAppendPage(
    SLDocument* doc, SLDocument* srcdoc, int pageIndex);

inline SLPdfPage* SLDocNewPageAt(
    SLDocument* doc, int atIndex, const double rect[4]);

inline SLPdfPage* SLDocNewPage(
    SLDocument* doc, const double rect[4]);

inline SLDocVersion SLDocGetVersion(
    SLDocument* doc);

inline cbstringr SLDocGetTitle(
    SLDocument* doc);

}
// C trampolines
extern "C"
{

SAMPLELIBRARY_SHARED_API void SLFreeDocument(
    SLDocument* doc)
{
    samplelibrary::SLFreeDocument(doc);
}

SAMPLELIBRARY_SHARED_API SLDocument* SLCreateDocument(
    )
{
    return samplelibrary::SLCreateDocument();
}

SAMPLELIBRARY_SHARED_API SLDocument* SLPdfLoadBuffer(
    const uint8_t buffer[], int offset, int size, cbstring password)
{
    return samplelibrary::SLPdfLoadBuffer(buffer, offset, size, std::move(password));
}

SAMPLELIBRARY_SHARED_API SLDocument* SLPdfLoadFile(
    cbstring filename, cbstring password)
{
    return samplelibrary::SLPdfLoadFile(std::move(filename), std::move(password));
}

SAMPLELIBRARY_SHARED_API cbbool SLIsPdfDocument(
    cbstring filename, SLDocVersion * version)
{
    return samplelibrary::SLIsPdfDocument(std::move(filename), version);
}

SAMPLELIBRARY_SHARED_API cbbool SLIsPdfDocumentBuffer(
    const uint8_t buffer[], int size, SLDocVersion * version)
{
    return samplelibrary::SLIsPdfDocumentBuffer(buffer, size, version);
}

SAMPLELIBRARY_SHARED_API int SLDocGetPageCount(
    SLDocument* doc)
{
    return samplelibrary::SLDocGetPageCount(doc);
}

SAMPLELIBRARY_SHARED_API void SLDocGetPages(
    SLDocument* doc, SLPdfPage* pages[])
{
    samplelibrary::SLDocGetPages(doc, pages);
}

SAMPLELIBRARY_SHARED_API SLPdfPage* SLDocGetPage(
    SLDocument* doc, int index)
{
    return samplelibrary::SLDocGetPage(doc, index);
}

SAMPLELIBRARY_SHARED_API void SLDocAppendPage(
    SLDocument* doc, SLDocument* srcdoc, int pageIndex)
{
    samplelibrary::SLDocAppendPage(doc, srcdoc, pageIndex);
}

SAMPLELIBRARY_SHARED_API SLPdfPage* SLDocNewPageAt(
    SLDocument* doc, int atIndex, const double rect[4])
{
    return samplelibrary::SLDocNewPageAt(doc, atIndex, rect);
}

SAMPLELIBRARY_SHARED_API SLPdfPage* SLDocNewPage(
    SLDocument* doc, const double rect[4])
{
    return samplelibrary::SLDocNewPage(doc, rect);
}

SAMPLELIBRARY_SHARED_API SLDocVersion SLDocGetVersion(
    SLDocument* doc)
{
    return samplelibrary::SLDocGetVersion(doc);
}

SAMPLELIBRARY_SHARED_API cbstring SLDocGetTitle(
    SLDocument* doc)
{
    return samplelibrary::SLDocGetTitle(doc);
}

}


