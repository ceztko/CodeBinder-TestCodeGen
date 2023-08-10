/* This file was generated. DO NOT EDIT! */
#include "Internal/JNICommon.h"
#include "JNIAnnotation.h"
#include <Annotation.h>

extern "C" JNIEXPORT jint JNICALL Java_SampleLibrary_Annotation_SLAnnotGetType(
    JNIEnv *jenv, jclass jcls, jptr annot)
{
    (void)jenv;
    (void)jcls;
    return (jint)SLAnnotGetType((SLAnnotation*)annot);
}

extern "C" JNIEXPORT void JNICALL Java_SampleLibrary_Annotation_SLAnnotGetRect(
    JNIEnv *jenv, jclass jcls, jHandleRef annot, jdoubleArray rect)
{
    (void)jenv;
    (void)jcls;
    SLAnnotGetRect(annot->GetHandle<SLAnnotation>(jenv), AJ2N(jenv, rect, true));
}

