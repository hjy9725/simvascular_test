#ifndef SV4GUIMODULECOMMON_EXPORT_H
#define SV4GUIMODULECOMMON_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULECOMMON_STATIC_DEFINE
#  define SV4GUIMODULECOMMON_EXPORT
#  define SV4GUIMODULECOMMON_NO_EXPORT
#else
#  ifndef SV4GUIMODULECOMMON_EXPORT
#    ifdef sv4guiModuleCommon_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULECOMMON_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULECOMMON_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULECOMMON_NO_EXPORT
#    define SV4GUIMODULECOMMON_NO_EXPORT
#  endif
#endif

#endif
