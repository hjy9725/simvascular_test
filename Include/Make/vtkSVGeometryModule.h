#ifndef VTKSVGEOMETRY_EXPORT_H
#define VTKSVGEOMETRY_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVGEOMETRY_STATIC_DEFINE
#  define VTKSVGEOMETRY_EXPORT
#  define VTKSVGEOMETRY_NO_EXPORT
#else
#  ifndef VTKSVGEOMETRY_EXPORT
#    ifdef vtkSVGeometry_EXPORTS
       /* We are building this library */
#      define VTKSVGEOMETRY_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVGEOMETRY_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVGEOMETRY_NO_EXPORT
#    define VTKSVGEOMETRY_NO_EXPORT
#  endif
#endif

#endif
