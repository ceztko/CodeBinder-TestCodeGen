/* This file was generated. DO NOT EDIT! */
#pragma once

#include "Internal/JNITypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT void JNICALL Java_SampleLibrary_Document_SLFreeDocument(
    JNIEnv *jenv, jclass jcls, jptr doc);

JNIEXPORT jptr JNICALL Java_SampleLibrary_Document_SLCreateDocument(
    JNIEnv *jenv, jclass jcls);

JNIEXPORT jptr JNICALL Java_SampleLibrary_Document_SLPdfLoadBuffer(
    JNIEnv *jenv, jclass jcls, jbyteArray buffer, jint offset, jint size, jstring password);

JNIEXPORT jptr JNICALL Java_SampleLibrary_Document_SLPdfLoadFile(
    JNIEnv *jenv, jclass jcls, jstring filename, jstring password);

JNIEXPORT jboolean JNICALL Java_SampleLibrary_Document_SLIsPdfDocument(
    JNIEnv *jenv, jclass jcls, jstring filename, jIntegerBox version);

JNIEXPORT jboolean JNICALL Java_SampleLibrary_Document_SLIsPdfDocumentBuffer(
    JNIEnv *jenv, jclass jcls, jbyteArray buffer, jint size, jIntegerBox version);

JNIEXPORT jint JNICALL Java_SampleLibrary_PageCollection_SLDocGetPageCount(
    JNIEnv *jenv, jclass jcls, jHandleRef doc);

JNIEXPORT void JNICALL Java_SampleLibrary_PageCollection_SLDocGetPages(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jptrArray pages);

JNIEXPORT jptr JNICALL Java_SampleLibrary_PageCollection_SLDocGetPage(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jint index);

JNIEXPORT void JNICALL Java_SampleLibrary_PageCollection_SLDocAppendPage(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jHandleRef srcdoc, jint pageIndex);

JNIEXPORT jptr JNICALL Java_SampleLibrary_PageCollection_SLDocNewPageAt(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jint atIndex, jdoubleArray rect);

JNIEXPORT jptr JNICALL Java_SampleLibrary_PageCollection_SLDocNewPage(
    JNIEnv *jenv, jclass jcls, jHandleRef doc, jdoubleArray rect);

JNIEXPORT jint JNICALL Java_SampleLibrary_Metadata_SLDocGetVersion(
    JNIEnv *jenv, jclass jcls, jHandleRef doc);

JNIEXPORT jstring JNICALL Java_SampleLibrary_Metadata_SLDocGetTitle(
    JNIEnv *jenv, jclass jcls, jHandleRef doc);

#ifdef __cplusplus
}
#endif
