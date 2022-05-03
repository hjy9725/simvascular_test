#ifndef SV_GLOBALS_EXPORT_H
#define SV_GLOBALS_EXPORT_H

#include "SimVascular.h"

#ifdef SV_GLOBALS_STATIC_DEFINE
#  define SV_EXPORT_GLOBALS
#  define SV_EXPORT_GLOBALS_NO_EXPORT
#else
#  ifndef SV_EXPORT_GLOBALS 
#    ifdef SV_EXPORT_GLOBALS_COMPILE
       /* We are building this library */
#      define SV_EXPORT_GLOBALS SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_GLOBALS SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_GLOBALS_NO_EXPORT
#    define SV_EXPORT_GLOBALS_NO_EXPORT
#  endif
#endif

#endif
