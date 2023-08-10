/* This file was generated. DO NOT EDIT! */
#pragma once

#include "Internal/JNITypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT void JNICALL Java_SampleLibrary_Page_SLPageGetAnnotations(
    JNIEnv *jenv, jclass jcls, jHandleRef page, jptrArray annots);

JNIEXPORT jint JNICALL Java_SampleLibrary_Page_SLPageGetAnnotationCount(
    JNIEnv *jenv, jclass jcls, jHandleRef page);

JNIEXPORT jint JNICALL Java_SampleLibrary_Page_SLPageGetIndex(
    JNIEnv *jenv, jclass jcls, jHandleRef page);

JNIEXPORT void JNICALL Java_SampleLibrary_Page_SLPageGetRect(
    JNIEnv *jenv, jclass jcls, jHandleRef page, jdoubleArray rect);

#ifdef __cplusplus
}
#endif
