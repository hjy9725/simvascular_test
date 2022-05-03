#ifndef SV_SOLID_EXPORT_H
#define SV_SOLID_EXPORT_H

#include "SimVascular.h"

#ifdef SV_SOLID_STATIC_DEFINE
#  define SV_EXPORT_SOLID
#  define SV_EXPORT_SOLID_NO_EXPORT
#else
#  ifndef SV_EXPORT_SOLID 
#    ifdef SV_EXPORT_SOLID_COMPILE
       /* We are building this library */
#      define SV_EXPORT_SOLID SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_SOLID SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_SOLID_NO_EXPORT
#    define SV_EXPORT_SOLID_NO_EXPORT
#  endif
#endif

#endif
