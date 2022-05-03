#ifndef SV_PATH_EXPORT_H
#define SV_PATH_EXPORT_H

#include "SimVascular.h"

#ifdef SV_PATH_STATIC_DEFINE
#  define SV_EXPORT_PATH
#  define SV_EXPORT_PATH_NO_EXPORT
#else
#  ifndef SV_EXPORT_PATH 
#    ifdef SV_EXPORT_PATH_COMPILE
       /* We are building this library */
#      define SV_EXPORT_PATH SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_PATH SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_PATH_NO_EXPORT
#    define SV_EXPORT_PATH_NO_EXPORT
#  endif
#endif

#endif
