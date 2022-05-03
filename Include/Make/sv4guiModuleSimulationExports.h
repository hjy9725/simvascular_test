#ifndef SV4GUIMODULESIMULATION_EXPORT_H
#define SV4GUIMODULESIMULATION_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULESIMULATION_STATIC_DEFINE
#  define SV4GUIMODULESIMULATION_EXPORT
#  define SV4GUIMODULESIMULATION_NO_EXPORT
#else
#  ifndef SV4GUIMODULESIMULATION_EXPORT
#    ifdef sv4guiModuleSimulation_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULESIMULATION_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULESIMULATION_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULESIMULATION_NO_EXPORT
#    define SV4GUIMODULESIMULATION_NO_EXPORT
#  endif
#endif

#endif
