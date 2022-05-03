#ifndef SV_UTILS_EXPORT_H
#define SV_UTILS_EXPORT_H

#include "SimVascular.h"

#ifdef SV_UTILS_STATIC_DEFINE
#  define SV_EXPORT_UTILS
#  define SV_EXPORT_UTILS_NO_EXPORT
#else
#  ifndef SV_EXPORT_UTILS 
#    ifdef SV_EXPORT_UTILS_COMPILE
       /* We are building this library */
#      define SV_EXPORT_UTILS SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_UTILS SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_UTILS_NO_EXPORT
#    define SV_EXPORT_UTILS_NO_EXPORT
#  endif
#endif

#endif
