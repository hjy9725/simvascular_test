#ifndef SV_MMG_EXPORT_H
#define SV_MMG_EXPORT_H

#include "SimVascular.h"

#ifdef SV_MMG_STATIC_DEFINE
#  define SV_EXPORT_MMG
#  define SV_EXPORT_MMG_NO_EXPORT
#else
#  ifndef SV_EXPORT_MMG 
#    ifdef SV_EXPORT_MMG_COMPILE
       /* We are building this library */
#      define SV_EXPORT_MMG SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_MMG SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_MMG_NO_EXPORT
#    define SV_EXPORT_MMG_NO_EXPORT
#  endif
#endif

#endif
