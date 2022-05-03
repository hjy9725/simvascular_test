#ifndef SV4GUIMODULEPATH_EXPORT_H
#define SV4GUIMODULEPATH_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULEPATH_STATIC_DEFINE
#  define SV4GUIMODULEPATH_EXPORT
#  define SV4GUIMODULEPATH_NO_EXPORT
#else
#  ifndef SV4GUIMODULEPATH_EXPORT
#    ifdef sv4guiModulePath_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULEPATH_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULEPATH_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULEPATH_NO_EXPORT
#    define SV4GUIMODULEPATH_NO_EXPORT
#  endif
#endif

#endif
