#ifndef VTKSVBOOLEAN_EXPORT_H
#define VTKSVBOOLEAN_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVBOOLEAN_STATIC_DEFINE
#  define VTKSVBOOLEAN_EXPORT
#  define VTKSVBOOLEAN_NO_EXPORT
#else
#  ifndef VTKSVBOOLEAN_EXPORT
#    ifdef vtkSVBoolean_EXPORTS
       /* We are building this library */
#      define VTKSVBOOLEAN_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVBOOLEAN_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVBOOLEAN_NO_EXPORT
#    define VTKSVBOOLEAN_NO_EXPORT
#  endif
#endif

#endif
