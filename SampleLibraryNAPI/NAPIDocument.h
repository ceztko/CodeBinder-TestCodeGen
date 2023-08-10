/* This file was generated. DO NOT EDIT! */
#pragma once

#include "Internal/JSNAPI.h"

namespace js
{

extern "C" napi_value NAPI_SLFreeDocument(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLCreateDocument(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLPdfLoadBuffer(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLPdfLoadFile(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLIsPdfDocument(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLIsPdfDocumentBuffer(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocGetPageCount(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocGetPages(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocGetPage(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocAppendPage(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocNewPageAt(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocNewPage(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocGetVersion(
    napi_env env, napi_callback_info info);

extern "C" napi_value NAPI_SLDocGetTitle(
    napi_env env, napi_callback_info info);

}
