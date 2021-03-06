#ifndef SV4GUIMODULEMACHINELEARNING_EXPORT_H
#define SV4GUIMODULEMACHINELEARNING_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULEMACHINELEARNING_STATIC_DEFINE
#  define SV4GUIMODULEMACHINELEARNING_EXPORT
#  define SV4GUIMODULEMACHINELEARNING_NO_EXPORT
#else
#  ifndef SV4GUIMODULEMACHINELEARNING_EXPORT
#    ifdef sv4guiModuleMachineLearning_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULEMACHINELEARNING_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULEMACHINELEARNING_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULEMACHINELEARNING_NO_EXPORT
#    define SV4GUIMODULEMACHINELEARNING_NO_EXPORT
#  endif
#endif

#endif
