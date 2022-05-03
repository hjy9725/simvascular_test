#ifndef VTKSVCOMMON_EXPORT_H
#define VTKSVCOMMON_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVCOMMON_STATIC_DEFINE
#  define VTKSVCOMMON_EXPORT
#  define VTKSVCOMMON_NO_EXPORT
#else
#  ifndef VTKSVCOMMON_EXPORT
#    ifdef vtkSVCommon_EXPORTS
       /* We are building this library */
#      define VTKSVCOMMON_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVCOMMON_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVCOMMON_NO_EXPORT
#    define VTKSVCOMMON_NO_EXPORT
#  endif
#endif

#endif
