#ifndef VTKSVSEGMENTATION_EXPORT_H
#define VTKSVSEGMENTATION_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVSEGMENTATION_STATIC_DEFINE
#  define VTKSVSEGMENTATION_EXPORT
#  define VTKSVSEGMENTATION_NO_EXPORT
#else
#  ifndef VTKSVSEGMENTATION_EXPORT
#    ifdef vtkSVSegmentation_EXPORTS
       /* We are building this library */
#      define VTKSVSEGMENTATION_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVSEGMENTATION_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVSEGMENTATION_NO_EXPORT
#    define VTKSVSEGMENTATION_NO_EXPORT
#  endif
#endif

#endif
