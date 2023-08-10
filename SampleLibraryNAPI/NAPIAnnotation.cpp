/* This file was generated. DO NOT EDIT! */
#include "NAPIAnnotation.h"
#include "Internal/JSInterop.h"
#include <Annotation.h>

namespace js
{
extern "C" napi_value NAPI_SLAnnotGetType(
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

    auto annot = (SLAnnotation*)GetPtrFromNapiValue(env, args[0]);
    SLAnnotationType cret_ = SLAnnotGetType(annot);

    return CreateNapiValue(env, (int32_t)cret_);
}

extern "C" napi_value NAPI_SLAnnotGetRect(
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

    auto annot = (SLAnnotation*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto rect = args[1];
    SLAnnotGetRect(annot, AJS2N<double>(env, rect, true));

    return nullptr;
}

}
