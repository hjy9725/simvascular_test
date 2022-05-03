#ifndef SV_SYSGEOM_EXPORT_H
#define SV_SYSGEOM_EXPORT_H

#include "SimVascular.h"

#ifdef SV_SYSGEOM_STATIC_DEFINE
#  define SV_EXPORT_SYSGEOM
#  define SV_EXPORT_SYSGEOM_NO_EXPORT
#else
#  ifndef SV_EXPORT_SYSGEOM 
#    ifdef SV_EXPORT_SYSGEOM_COMPILE
       /* We are building this library */
#      define SV_EXPORT_SYSGEOM SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_SYSGEOM SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_SYSGEOM_NO_EXPORT
#    define SV_EXPORT_SYSGEOM_NO_EXPORT
#  endif
#endif

#endif
