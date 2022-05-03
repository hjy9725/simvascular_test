#ifndef SV4GUIMODULESVFSI_EXPORT_H
#define SV4GUIMODULESVFSI_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULESVFSI_STATIC_DEFINE
#  define SV4GUIMODULESVFSI_EXPORT
#  define SV4GUIMODULESVFSI_NO_EXPORT
#else
#  ifndef SV4GUIMODULESVFSI_EXPORT
#    ifdef sv4guiModulesvFSI_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULESVFSI_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULESVFSI_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULESVFSI_NO_EXPORT
#    define SV4GUIMODULESVFSI_NO_EXPORT
#  endif
#endif

#endif
