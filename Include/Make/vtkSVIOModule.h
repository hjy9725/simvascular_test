#ifndef VTKSVIO_EXPORT_H
#define VTKSVIO_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVIO_STATIC_DEFINE
#  define VTKSVIO_EXPORT
#  define VTKSVIO_NO_EXPORT
#else
#  ifndef VTKSVIO_EXPORT
#    ifdef vtkSVIO_EXPORTS
       /* We are building this library */
#      define VTKSVIO_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVIO_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVIO_NO_EXPORT
#    define VTKSVIO_NO_EXPORT
#  endif
#endif

#endif
