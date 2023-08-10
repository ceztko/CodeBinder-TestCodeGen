#pragma once

#if defined(OCSAMPLELIBRARY_SHARED) || !defined(OCSAMPLELIBRARY_STATIC)

#ifdef OCSAMPLELIBRARY_EXPORT
    #define OCSAMPLELIBRARY_API __attribute__ ((visibility ("default")))
#else
    #define OCSAMPLELIBRARY_IMPORT
    #define OCSAMPLELIBRARY_API
#endif

#else
    #define OCSAMPLELIBRARY_API
    #ifndef OCSAMPLELIBRARY_EXPORT
        #define OCSAMPLELIBRARY_IMPORT
    #endif
#endif
