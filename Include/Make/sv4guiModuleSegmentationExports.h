#ifndef SV4GUIMODULESEGMENTATION_EXPORT_H
#define SV4GUIMODULESEGMENTATION_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULESEGMENTATION_STATIC_DEFINE
#  define SV4GUIMODULESEGMENTATION_EXPORT
#  define SV4GUIMODULESEGMENTATION_NO_EXPORT
#else
#  ifndef SV4GUIMODULESEGMENTATION_EXPORT
#    ifdef sv4guiModuleSegmentation_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULESEGMENTATION_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULESEGMENTATION_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULESEGMENTATION_NO_EXPORT
#    define SV4GUIMODULESEGMENTATION_NO_EXPORT
#  endif
#endif

#endif