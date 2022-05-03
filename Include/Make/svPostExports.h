#ifndef SV_POST_EXPORT_H
#define SV_POST_EXPORT_H

#include "SimVascular.h"

#ifdef SV_POST_STATIC_DEFINE
#  define SV_EXPORT_POST
#  define SV_EXPORT_POST_NO_EXPORT
#else
#  ifndef SV_EXPORT_POST 
#    ifdef SV_EXPORT_POST_COMPILE
       /* We are building this library */
#      define SV_EXPORT_POST SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_POST SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_POST_NO_EXPORT
#    define SV_EXPORT_POST_NO_EXPORT
#  endif
#endif

#endif
