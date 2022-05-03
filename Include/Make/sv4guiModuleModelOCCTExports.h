#ifndef SV4GUIMODULEMODELOCCT_EXPORT_H
#define SV4GUIMODULEMODELOCCT_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULEMODELOCCT_STATIC_DEFINE
#  define SV4GUIMODULEMODELOCCT_EXPORT
#  define SV4GUIMODULEMODELOCCT_NO_EXPORT
#else
#  ifndef SV4GUIMODULEMODELOCCT_EXPORT
#    ifdef sv4guiModuleModelOCCT_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULEMODELOCCT_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULEMODELOCCT_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULEMODELOCCT_NO_EXPORT
#    define SV4GUIMODULEMODELOCCT_NO_EXPORT
#  endif
#endif

#endif
