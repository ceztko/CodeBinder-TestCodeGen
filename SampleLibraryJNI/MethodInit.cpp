/* This file was generated. DO NOT EDIT! */
#include "JNIAnnotation.h"
#include "JNIDocument.h"
#include "JNIPage.h"

// Reference this symbol to ensure all functions are defined
// See https://github.com/dotnet/samples/tree/3870722f5c5e80fd6a70946e6e96a5c990620e42/core/nativeaot/NativeLibrary#user-content-building-static-libraries
extern "C" void* CB_JNIExports[] = {
    (void *)Java_SampleLibrary_Annotation_SLAnnotGetType,
    (void *)Java_SampleLibrary_Annotation_SLAnnotGetRect,
    (void *)Java_SampleLibrary_Document_SLFreeDocument,
    (void *)Java_SampleLibrary_Document_SLCreateDocument,
    (void *)Java_SampleLibrary_Document_SLPdfLoadBuffer,
    (void *)Java_SampleLibrary_Document_SLPdfLoadFile,
    (void *)Java_SampleLibrary_Document_SLIsPdfDocument,
    (void *)Java_SampleLibrary_Document_SLIsPdfDocumentBuffer,
    (void *)Java_SampleLibrary_PageCollection_SLDocGetPageCount,
    (void *)Java_SampleLibrary_PageCollection_SLDocGetPages,
    (void *)Java_SampleLibrary_PageCollection_SLDocGetPage,
    (void *)Java_SampleLibrary_PageCollection_SLDocAppendPage,
    (void *)Java_SampleLibrary_PageCollection_SLDocNewPageAt,
    (void *)Java_SampleLibrary_PageCollection_SLDocNewPage,
    (void *)Java_SampleLibrary_Metadata_SLDocGetVersion,
    (void *)Java_SampleLibrary_Metadata_SLDocGetTitle,
    (void *)Java_SampleLibrary_Page_SLPageGetAnnotations,
    (void *)Java_SampleLibrary_Page_SLPageGetAnnotationCount,
    (void *)Java_SampleLibrary_Page_SLPageGetIndex,
    (void *)Java_SampleLibrary_Page_SLPageGetRect,
};
