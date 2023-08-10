/* This file was generated. DO NOT EDIT! */
#include "NAPIPage.h"
#include "Internal/JSInterop.h"
#include <Page.h>

namespace js
{
extern "C" napi_value NAPI_SLPageGetAnnotations(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 2;
    napi_value args[2];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 2);

    auto page = (SLPdfPage*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto annots = args[1];
    SLPageGetAnnotations(page, AJS2N<void*>(env, annots, true));

    return nullptr;
}

extern "C" napi_value NAPI_SLPageGetAnnotationCount(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 1;
    napi_value args[1];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 1);

    auto page = (SLPdfPage*)GetHandleRefPtrFromNapiValue(env, args[0]);
    int cret_ = SLPageGetAnnotationCount(page);

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLPageGetIndex(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 1;
    napi_value args[1];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 1);

    auto page = (SLPdfPage*)GetHandleRefPtrFromNapiValue(env, args[0]);
    int cret_ = SLPageGetIndex(page);

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLPageGetRect(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 2;
    napi_value args[2];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 2);

    auto page = (SLPdfPage*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto rect = args[1];
    SLPageGetRect(page, AJS2N<double>(env, rect, true));

    return nullptr;
}

}
