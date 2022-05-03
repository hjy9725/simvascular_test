#ifndef SV_OPENCASCADE_EXPORT_H
#define SV_OPENCASCADE_EXPORT_H

#include "SimVascular.h"

#ifdef SV_OPENCASCADE_STATIC_DEFINE
#  define SV_EXPORT_OPENCASCADE
#  define SV_EXPORT_OPENCASCADE_NO_EXPORT
#else
#  ifndef SV_EXPORT_OPENCASCADE 
#    ifdef SV_EXPORT_OPENCASCADE_COMPILE
       /* We are building this library */
#      define SV_EXPORT_OPENCASCADE SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_OPENCASCADE SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_OPENCASCADE_NO_EXPORT
#    define SV_EXPORT_OPENCASCADE_NO_EXPORT
#  endif
#endif

#endif
