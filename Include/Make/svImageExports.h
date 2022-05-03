#ifndef SV_IMAGE_EXPORT_H
#define SV_IMAGE_EXPORT_H

#include "SimVascular.h"

#ifdef SV_IMAGE_STATIC_DEFINE
#  define SV_EXPORT_IMAGE
#  define SV_EXPORT_IMAGE_NO_EXPORT
#else
#  ifndef SV_EXPORT_IMAGE 
#    ifdef SV_EXPORT_IMAGE_COMPILE
       /* We are building this library */
#      define SV_EXPORT_IMAGE SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_IMAGE SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_IMAGE_NO_EXPORT
#    define SV_EXPORT_IMAGE_NO_EXPORT
#  endif
#endif

#endif
