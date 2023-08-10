#pragma once

#if defined(SAMPLELIBRARY_SHARED) || !defined(SAMPLELIBRARY_STATIC)

#ifdef SAMPLELIBRARY_EXPORT
    #ifdef _MSC_VER
        #define SAMPLELIBRARY_SHARED_API __declspec(dllexport)
    #else // Non MVSC
        #define SAMPLELIBRARY_SHARED_API __attribute__ ((visibility ("default")))
    #endif
#else
    #define SAMPLELIBRARY_IMPORT
    #ifdef _MSC_VER
        #define SAMPLELIBRARY_SHARED_API __declspec(dllimport)
    #else
        #define SAMPLELIBRARY_SHARED_API
    #endif
#endif

#else
    #define SAMPLELIBRARY_SHARED_API
    #ifndef SAMPLELIBRARY_EXPORT
        #define SAMPLELIBRARY_IMPORT
    #endif
#endif
