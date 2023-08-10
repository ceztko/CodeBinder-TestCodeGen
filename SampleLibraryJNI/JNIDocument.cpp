/* This file was generated. DO NOT EDIT! */
#include "Internal/JNICommon.h"
#include "JNIDocument.h"
#include <Document.h>

extern "C" JNIEXPORT void JNICALL Java_SampleLibrary_Document_SLFreeDocument(
    JNIEnv *jenv, jclass jcls, jptr doc)
{
    (void)jenv;
    (void)jcls;
    SLFreeDocument((SLDocument*)doc);
}

extern "C" JNIEXPORT jptr JNICALL Java_SampleLibrary_Document_SLCreateDocument(
    JNIEnv *jenv, jclass jcls)
{
    (void)jenv;
    (void)jcls;
    return (jptr)SLCreateDocument();
}

extern "C" JNIEXPORT jptr JNICALL Java_SampleLibrary_Document_SLPdfLoadBuffer(
    JNIEnv *jenv, jclass jcls, jbyteArray buffer, jint offset, jint size, jstring password)
{
    (void)jenv;
    (void)jcls;
    return (jptr)SLPdfLoadBuffer(AJ2N(jenv, buffer, false), offset, size, SJ2N(jenv, password));
}

extern "C" JNIEXPORT jptr JNICALL Java_SampleLibrary_Document_SLPdfLoadFile(
    JNIEnv *jenv, jclass jcls, jstring filename, jstring password)
{
    (void)jenv;
    (void)jcls;
    return (jptr)SLPdfLoadFile(SJ2N(jenv, filename), SJ2N(jenv, password));
}

extern "C" JNIEXPORT jboolean JNICALL Java_SampleLibrary_Document_SLIsPdfDocument(
    JNIEnv *jenv, jclass jcls, jstring filename, jIntegerBox version)
{
    (void)jenv;
    (void)jcls;
    return (jboolean)SLIsPdfDocument(SJ2N(jenv, filename), BJ2N<SLDocVersion>(jenv, version));
}

extern "C" JNIEXPORT jboolean JNICALL Java_SampleLibrary_Document_SLIsPdfDocumentBuffer(
    JNIEnv *jenv, jclass jcls, jbyteArray buffer, jint size, jIntegerBox version)
{
    (void)jenv;
    (void)jcls;
    return (jboolean)SLIsPdfDocumentBuffer(AJ2N(jenv, buffer, false), size, BJ2N<SLDocVersion>(jenv, version));
}

extern "C" JNIEXPORT jint JNICALL Java_SampleLibrary_PageCollection_SLDocGetPageCount(
    JNIEnv *jenv, jclass jcls, jHandleRef doc)
{
    (void)jenv;
    (void)jcls;
    return SLDocGetPageCount(doc->GetHandle<SLDocument>(jenv));
}

extern "C" JNIEXPORT void JNICALL Java_SampleLibrary_PageCollection_SLDocGetPages(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jptrArray pages)
{
    (void)jenv;
    (void)jcls;
    SLDocGetPages(doc->GetHandle<SLDocument>(jenv), AJ2N(jenv, pages, true));
}

extern "C" JNIEXPORT jptr JNICALL Java_SampleLibrary_PageCollection_SLDocGetPage(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jint index)
{
    (void)jenv;
    (void)jcls;
    return (jptr)SLDocGetPage(doc->GetHandle<SLDocument>(jenv), index);
}

extern "C" JNIEXPORT void JNICALL Java_SampleLibrary_PageCollection_SLDocAppendPage(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jHandleRef srcdoc, jint pageIndex)
{
    (void)jenv;
    (void)jcls;
    SLDocAppendPage(doc->GetHandle<SLDocument>(jenv), srcdoc->GetHandle<SLDocument>(jenv), pageIndex);
}

extern "C" JNIEXPORT jptr JNICALL Java_SampleLibrary_PageCollection_SLDocNewPageAt(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jint atIndex, jdoubleArray rect)
{
    (void)jenv;
    (void)jcls;
    return (jptr)SLDocNewPageAt(doc->GetHandle<SLDocument>(jenv), atIndex, AJ2N(jenv, rect, false));
}

extern "C" JNIEXPORT jptr JNICALL Java_SampleLibrary_PageCollection_SLDocNewPage(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jdoubleArray rect)
{
    (void)jenv;
    (void)jcls;
    return (jptr)SLDocNewPage(doc->GetHandle<SLDocument>(jenv), AJ2N(jenv, rect, false));
}

extern "C" JNIEXPORT jint JNICALL Java_SampleLibrary_Metadata_SLDocGetVersion(
    JNIEnv *jenv, jclass jcls, jHandleRef doc)
{
    (void)jenv;
    (void)jcls;
    return (jint)SLDocGetVersion(doc->GetHandle<SLDocument>(jenv));
}

extern "C" JNIEXPORT jstring JNICALL Java_SampleLibrary_Metadata_SLDocGetTitle(
    JNIEnv *jenv, jclass jcls, jHandleRef doc)
{
    (void)jenv;
    (void)jcls;
    return SN2J(jenv, SLDocGetTitle(doc->GetHandle<SLDocument>(jenv)));
}

