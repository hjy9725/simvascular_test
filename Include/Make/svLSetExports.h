#ifndef SV_LSET_EXPORT_H
#define SV_LSET_EXPORT_H

#include "SimVascular.h"

#ifdef SV_LSET_STATIC_DEFINE
#  define SV_EXPORT_LSET
#  define SV_EXPORT_LSET_NO_EXPORT
#else
#  ifndef SV_EXPORT_LSET 
#    ifdef SV_EXPORT_LSET_COMPILE
       /* We are building this library */
#      define SV_EXPORT_LSET SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_LSET SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_LSET_NO_EXPORT
#    define SV_EXPORT_LSET_NO_EXPORT
#  endif
#endif

#endif
