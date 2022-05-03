#ifndef SV_COMMON_EXPORT_H
#define SV_COMMON_EXPORT_H

#include "SimVascular.h"

#ifdef SV_COMMON_STATIC_DEFINE
#  define SV_EXPORT_COMMON
#  define SV_EXPORT_COMMON_NO_EXPORT
#else
#  ifndef SV_EXPORT_COMMON 
#    ifdef SV_EXPORT_COMMON_COMPILE
       /* We are building this library */
#      define SV_EXPORT_COMMON SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_COMMON SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_COMMON_NO_EXPORT
#    define SV_EXPORT_COMMON_NO_EXPORT
#  endif
#endif

#endif
