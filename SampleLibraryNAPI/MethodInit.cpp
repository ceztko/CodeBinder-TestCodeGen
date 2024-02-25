/* This file was generated. DO NOT EDIT! */
#include <cassert>
#include <vector>
#include "Internal/JSInterop.h"
#include "Internal/NAPIBinderUtils.h"

#include "NAPIAnnotation.h"
#include "NAPIDocument.h"
#include "NAPIPage.h"

#define DECLARE_NAPI_METHOD(name, func) { #name, 0, func, 0, 0, 0, napi_default, 0 }

#ifdef _MSC_VER
    #define EXPORT_ATTRIB __declspec(dllexport)
#else // Non MVSC
    #define EXPORT_ATTRIB __attribute__ ((visibility ("default")))
#endif

namespace js
{
    napi_ref s_AddonThisRef;
    napi_env s_Env;

    extern "C" void Destructor(napi_env env, void* finalize_data, void* finalize_hint)
    {
        (void)finalize_data;
        (void)finalize_hint;
        (void)napi_delete_reference(env, s_AddonThisRef);
        s_AddonThisRef = nullptr;
    }

    extern "C" napi_value CreateAddon(napi_env env, napi_callback_info info)
    {
        napi_status status;

        if (s_AddonThisRef != nullptr)
        {
            napi_throw_error(env, nullptr, "The addon was already initalized");
            return nullptr;
        }

        size_t argc = 1;
        napi_value args[1];
        status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
        assert(status == napi_ok);

        status = napi_create_reference(env, args[0], 1, &s_AddonThisRef);
        assert(status == napi_ok);

        napi_value obj;
        status = napi_create_object(env, &obj);
        assert(status == napi_ok);

        status = napi_add_finalizer(env, obj, nullptr, Destructor, nullptr, nullptr);
        assert(status == napi_ok);

        napi_property_descriptor addDescriptor[] =
        {
            DECLARE_NAPI_METHOD(SLAnnotGetType, NAPI_SLAnnotGetType),
            DECLARE_NAPI_METHOD(SLAnnotGetRect, NAPI_SLAnnotGetRect),
            DECLARE_NAPI_METHOD(SLFreeDocument, NAPI_SLFreeDocument),
            DECLARE_NAPI_METHOD(SLCreateDocument, NAPI_SLCreateDocument),
            DECLARE_NAPI_METHOD(SLPdfLoadBuffer, NAPI_SLPdfLoadBuffer),
            DECLARE_NAPI_METHOD(SLPdfLoadFile, NAPI_SLPdfLoadFile),
            DECLARE_NAPI_METHOD(SLIsPdfDocument, NAPI_SLIsPdfDocument),
            DECLARE_NAPI_METHOD(SLIsPdfDocumentBuffer, NAPI_SLIsPdfDocumentBuffer),
            DECLARE_NAPI_METHOD(SLDocGetPageCount, NAPI_SLDocGetPageCount),
            DECLARE_NAPI_METHOD(SLDocGetPages, NAPI_SLDocGetPages),
            DECLARE_NAPI_METHOD(SLDocGetPage, NAPI_SLDocGetPage),
            DECLARE_NAPI_METHOD(SLDocAppendPage, NAPI_SLDocAppendPage),
            DECLARE_NAPI_METHOD(SLDocNewPageAt, NAPI_SLDocNewPageAt),
            DECLARE_NAPI_METHOD(SLDocNewPage, NAPI_SLDocNewPage),
            DECLARE_NAPI_METHOD(SLDocGetVersion, NAPI_SLDocGetVersion),
            DECLARE_NAPI_METHOD(SLDocGetTitle, NAPI_SLDocGetTitle),
            DECLARE_NAPI_METHOD(SLPageGetAnnotations, NAPI_SLPageGetAnnotations),
            DECLARE_NAPI_METHOD(SLPageGetAnnotationCount, NAPI_SLPageGetAnnotationCount),
            DECLARE_NAPI_METHOD(SLPageGetIndex, NAPI_SLPageGetIndex),
            DECLARE_NAPI_METHOD(SLPageGetRect, NAPI_SLPageGetRect),
            DECLARE_NAPI_METHOD(CreateNativeHandle, NAPI_CreateNativeHandle),
            DECLARE_NAPI_METHOD(CreateWeakNativeHandle, NAPI_CreateWeakNativeHandle),
            DECLARE_NAPI_METHOD(FreeNativeHandle, NAPI_FreeNativeHandle),
            DECLARE_NAPI_METHOD(NativeHandleGetTarget, NAPI_NativeHandleGetTarget),
        };

        status = napi_define_properties(env, obj, std::size(addDescriptor), addDescriptor);
        assert(status == napi_ok);
        s_Env = env;
        return obj;
    }

    extern "C" napi_value Init(napi_env env, napi_value exports)
    {
        napi_value new_exports;
        napi_status status = napi_create_function(
            env, "", NAPI_AUTO_LENGTH, CreateAddon, nullptr, &new_exports);
        assert(status == napi_ok);
        return new_exports;
    }

    extern "C" EXPORT_ATTRIB napi_value napi_register_module_v1(napi_env env, napi_value exports)
    {
        return Init(env, exports);
    }

    // Reference this symbol to ensure all functions are defined"
    // See https://github.com/dotnet/samples/tree/3870722f5c5e80fd6a70946e6e96a5c990620e42/core/nativeaot/NativeLibrary#user-content-building-static-libraries
    extern "C"
    {
        void* CB_NAPIExports[] = {
            (void*)napi_register_module_v1
        };
    }
}
