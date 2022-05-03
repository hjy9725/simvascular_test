#ifndef SV4GUIMODULEQTWIDGETS_EXPORT_H
#define SV4GUIMODULEQTWIDGETS_EXPORT_H

#include "SimVascular.h"

#ifdef SV4GUIMODULEQTWIDGETS_STATIC_DEFINE
#  define SV4GUIMODULEQTWIDGETS_EXPORT
#  define SV4GUIMODULEQTWIDGETS_NO_EXPORT
#else
#  ifndef SV4GUIMODULEQTWIDGETS_EXPORT
#    ifdef sv4guiModuleQtWidgets_EXPORTS
       /* We are building this library */
#      define SV4GUIMODULEQTWIDGETS_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV4GUIMODULEQTWIDGETS_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV4GUIMODULEQTWIDGETS_NO_EXPORT
#    define SV4GUIMODULEQTWIDGETS_NO_EXPORT
#  endif
#endif

#endif
