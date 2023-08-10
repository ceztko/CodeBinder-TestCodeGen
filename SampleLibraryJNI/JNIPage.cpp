/* This file was generated. DO NOT EDIT! */
#include "Internal/JNICommon.h"
#include "JNIPage.h"
#include <Page.h>

extern "C" JNIEXPORT void JNICALL Java_SampleLibrary_Page_SLPageGetAnnotations(
    JNIEnv *jenv, jclass jcls, jHandleRef page, jptrArray annots)
{
    (void)jenv;
    (void)jcls;
    SLPageGetAnnotations(page->GetHandle<SLPdfPage>(jenv), AJ2N(jenv, annots, true));
}

extern "C" JNIEXPORT jint JNICALL Java_SampleLibrary_Page_SLPageGetAnnotationCount(
    JNIEnv *jenv, jclass jcls, jHandleRef page)
{
    (void)jenv;
    (void)jcls;
    return SLPageGetAnnotationCount(page->GetHandle<SLPdfPage>(jenv));
}

extern "C" JNIEXPORT jint JNICALL Java_SampleLibrary_Page_SLPageGetIndex(
    JNIEnv *jenv, jclass jcls, jHandleRef page)
{
    (void)jenv;
    (void)jcls;
    return SLPageGetIndex(page->GetHandle<SLPdfPage>(jenv));
}

extern "C" JNIEXPORT void JNICALL Java_SampleLibrary_Page_SLPageGetRect(
    JNIEnv *jenv, jclass jcls, jHandleRef page, jdoubleArray rect)
{
    (void)jenv;
    (void)jcls;
    SLPageGetRect(page->GetHandle<SLPdfPage>(jenv), AJ2N(jenv, rect, true));
}

