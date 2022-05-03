#ifndef SV_SEGMENTATION_EXPORT_H
#define SV_SEGMENTATION_EXPORT_H

#include "SimVascular.h"

#ifdef SV_SEGMENTATION_STATIC_DEFINE
#  define SV_EXPORT_SEGMENTATION
#  define SV_EXPORT_SEGMENTATION_NO_EXPORT
#else
#  ifndef SV_EXPORT_SEGMENTATION 
#    ifdef SV_EXPORT_SEGMENTATION_COMPILE
       /* We are building this library */
#      define SV_EXPORT_SEGMENTATION SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_SEGMENTATION SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_SEGMENTATION_NO_EXPORT
#    define SV_EXPORT_SEGMENTATION_NO_EXPORT
#  endif
#endif

#endif
