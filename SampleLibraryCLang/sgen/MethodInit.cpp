/* This file was generated. DO NOT EDIT! */
#include "Annotation.h"
#include "Document.h"
#include "Page.h"

// Reference this symbol to ensure all functions are defined
// See https://github.com/dotnet/samples/tree/3870722f5c5e80fd6a70946e6e96a5c990620e42/core/nativeaot/NativeLibrary#user-content-building-static-libraries
extern "C" void* CB_CLangExports[] = {
    (void *)SLAnnotGetType,
    (void *)SLAnnotGetRect,
    (void *)SLFreeDocument,
    (void *)SLCreateDocument,
    (void *)SLPdfLoadBuffer,
    (void *)SLPdfLoadFile,
    (void *)SLIsPdfDocument,
    (void *)SLIsPdfDocumentBuffer,
    (void *)SLDocGetPageCount,
    (void *)SLDocGetPages,
    (void *)SLDocGetPage,
    (void *)SLDocAppendPage,
    (void *)SLDocNewPageAt,
    (void *)SLDocNewPage,
    (void *)SLDocGetVersion,
    (void *)SLDocGetTitle,
    (void *)SLPageGetAnnotations,
    (void *)SLPageGetAnnotationCount,
    (void *)SLPageGetIndex,
    (void *)SLPageGetRect,
};
