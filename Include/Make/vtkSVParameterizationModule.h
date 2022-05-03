#ifndef VTKSVPARAMETERIZATION_EXPORT_H
#define VTKSVPARAMETERIZATION_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVPARAMETERIZATION_STATIC_DEFINE
#  define VTKSVPARAMETERIZATION_EXPORT
#  define VTKSVPARAMETERIZATION_NO_EXPORT
#else
#  ifndef VTKSVPARAMETERIZATION_EXPORT
#    ifdef vtkSVParameterization_EXPORTS
       /* We are building this library */
#      define VTKSVPARAMETERIZATION_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVPARAMETERIZATION_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVPARAMETERIZATION_NO_EXPORT
#    define VTKSVPARAMETERIZATION_NO_EXPORT
#  endif
#endif

#endif
