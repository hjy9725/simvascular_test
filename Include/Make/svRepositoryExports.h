#ifndef SV_REPOSITORY_EXPORT_H
#define SV_REPOSITORY_EXPORT_H

#include "SimVascular.h"

#ifdef SV_REPOSITORY_STATIC_DEFINE
#  define SV_EXPORT_REPOSITORY
#  define SV_EXPORT_REPOSITORY_NO_EXPORT
#else
#  ifndef SV_EXPORT_REPOSITORY 
#    ifdef SV_EXPORT_REPOSITORY_COMPILE
       /* We are building this library */
#      define SV_EXPORT_REPOSITORY SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_REPOSITORY SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_REPOSITORY_NO_EXPORT
#    define SV_EXPORT_REPOSITORY_NO_EXPORT
#  endif
#endif

#endif
