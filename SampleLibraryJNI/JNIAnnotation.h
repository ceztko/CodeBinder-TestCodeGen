/* This file was generated. DO NOT EDIT! */
#pragma once

#include "Internal/JNITypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT jint JNICALL Java_SampleLibrary_Annotation_SLAnnotGetType(
    JNIEnv *jenv, jclass jcls, jptr annot);

JNIEXPORT void JNICALL Java_SampleLibrary_Annotation_SLAnnotGetRect(
    JNIEnv *jenv, jclass jcls, jHandleRef annot, jdoubleArray rect);

#ifdef __cplusplus
}
#endif
