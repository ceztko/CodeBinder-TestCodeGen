/* This file was generated. DO NOT EDIT! */
#include "NAPIDocument.h"
#include "Internal/JSInterop.h"
#include <Document.h>

namespace js
{
extern "C" napi_value NAPI_SLFreeDocument(
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

    auto doc = (SLDocument*)GetPtrFromNapiValue(env, args[0]);
    SLFreeDocument(doc);

    return nullptr;
}

extern "C" napi_value NAPI_SLCreateDocument(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    SLDocument* cret_ = SLCreateDocument();

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLPdfLoadBuffer(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 4;
    napi_value args[4];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 4);

    auto buffer = args[0];
    auto offset = GetInt32FromNapiValue(env, args[1]);
    auto size = GetInt32FromNapiValue(env, args[2]);
    auto password = CreateCBStringFromNapiValue(env, args[3]);
    SLDocument* cret_ = SLPdfLoadBuffer(AJS2N<const uint8_t>(env, buffer, false), offset, size, password);

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLPdfLoadFile(
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

    auto filename = CreateCBStringFromNapiValue(env, args[0]);
    auto password = CreateCBStringFromNapiValue(env, args[1]);
    SLDocument* cret_ = SLPdfLoadFile(filename, password);

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLIsPdfDocument(
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

    auto filename = CreateCBStringFromNapiValue(env, args[0]);
    auto version = args[1];
    cbbool cret_ = SLIsPdfDocument(filename, BJS2N<SLDocVersion, int32_t>(env, version));

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLIsPdfDocumentBuffer(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 3;
    napi_value args[3];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 3);

    auto buffer = args[0];
    auto size = GetInt32FromNapiValue(env, args[1]);
    auto version = args[2];
    cbbool cret_ = SLIsPdfDocumentBuffer(AJS2N<const uint8_t>(env, buffer, false), size, BJS2N<SLDocVersion, int32_t>(env, version));

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLDocGetPageCount(
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

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    int cret_ = SLDocGetPageCount(doc);

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLDocGetPages(
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

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto pages = args[1];
    SLDocGetPages(doc, AJS2N<void*>(env, pages, true));

    return nullptr;
}

extern "C" napi_value NAPI_SLDocGetPage(
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

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto index = GetInt32FromNapiValue(env, args[1]);
    SLPdfPage* cret_ = SLDocGetPage(doc, index);

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLDocAppendPage(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 3;
    napi_value args[3];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 3);

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto srcdoc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[1]);
    auto pageIndex = GetInt32FromNapiValue(env, args[2]);
    SLDocAppendPage(doc, srcdoc, pageIndex);

    return nullptr;
}

extern "C" napi_value NAPI_SLDocNewPageAt(
    napi_env env, napi_callback_info info)
{
    napi_status napistatus_;

    (void)env;
    (void)info;
    (void)napistatus_;

    size_t argc = 3;
    napi_value args[3];
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    assert(argc == 3);

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto atIndex = GetInt32FromNapiValue(env, args[1]);
    auto rect = args[2];
    SLPdfPage* cret_ = SLDocNewPageAt(doc, atIndex, AJS2N<const double>(env, rect, false));

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLDocNewPage(
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

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    auto rect = args[1];
    SLPdfPage* cret_ = SLDocNewPage(doc, AJS2N<const double>(env, rect, false));

    return CreateNapiValue(env, cret_);
}

extern "C" napi_value NAPI_SLDocGetVersion(
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

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    SLDocVersion cret_ = SLDocGetVersion(doc);

    return CreateNapiValue(env, (int32_t)cret_);
}

extern "C" napi_value NAPI_SLDocGetTitle(
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

    auto doc = (SLDocument*)GetHandleRefPtrFromNapiValue(env, args[0]);
    cbstring cret_ = SLDocGetTitle(doc);

    return CreateNapiValue(env, cret_);
}

}
