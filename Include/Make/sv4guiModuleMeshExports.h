#ifndef SV4GUIMODULEMESH_EXPORT_H
#define SV4GUIMODULEMESH_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULEMESH_STATIC_DEFINE
#  define SV4GUIMODULEMESH_EXPORT
#  define SV4GUIMODULEMESH_NO_EXPORT
#else
#  ifndef SV4GUIMODULEMESH_EXPORT
#    ifdef sv4guiModuleMesh_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULEMESH_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULEMESH_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULEMESH_NO_EXPORT
#    define SV4GUIMODULEMESH_NO_EXPORT
#  endif
#endif

#endif
