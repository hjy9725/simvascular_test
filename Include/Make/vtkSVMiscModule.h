#ifndef VTKSVMISC_EXPORT_H
#define VTKSVMISC_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVMISC_STATIC_DEFINE
#  define VTKSVMISC_EXPORT
#  define VTKSVMISC_NO_EXPORT
#else
#  ifndef VTKSVMISC_EXPORT
#    ifdef vtkSVMisc_EXPORTS
       /* We are building this library */
#      define VTKSVMISC_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVMISC_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVMISC_NO_EXPORT
#    define VTKSVMISC_NO_EXPORT
#  endif
#endif

#endif
