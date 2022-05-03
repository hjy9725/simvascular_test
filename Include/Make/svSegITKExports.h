#ifndef SV_SEGITK_EXPORT_H
#define SV_SEGITK_EXPORT_H

#include "SimVascular.h"

#ifdef SV_SEGITK_STATIC_DEFINE
#  define SV_EXPORT_SEGITK
#  define SV_EXPORT_SEGITK_NO_EXPORT
#else
#  ifndef SV_EXPORT_SEGITK 
#    ifdef SV_EXPORT_SEGITK_COMPILE
       /* We are building this library */
#      define SV_EXPORT_SEGITK SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_SEGITK SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_SEGITK_NO_EXPORT
#    define SV_EXPORT_SEGITK_NO_EXPORT
#  endif
#endif

#endif
