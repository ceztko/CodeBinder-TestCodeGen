#pragma once

#if defined(OCSAMPLELIBRARY_SHARED) || !defined(OCSAMPLELIBRARY_STATIC)
    #define OCSAMPLELIBRARY_API __attribute__ ((visibility ("default")))
#else
    #define OCSAMPLELIBRARY_API
#endif
