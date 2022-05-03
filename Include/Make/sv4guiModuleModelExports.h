#ifndef SV4GUIMODULEMODEL_EXPORT_H
#define SV4GUIMODULEMODEL_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULEMODEL_STATIC_DEFINE
#  define SV4GUIMODULEMODEL_EXPORT
#  define SV4GUIMODULEMODEL_NO_EXPORT
#else
#  ifndef SV4GUIMODULEMODEL_EXPORT
#    ifdef sv4guiModuleModel_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULEMODEL_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULEMODEL_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULEMODEL_NO_EXPORT
#    define SV4GUIMODULEMODEL_NO_EXPORT
#  endif
#endif

#endif
