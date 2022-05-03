#ifndef VTKSVNURBS_EXPORT_H
#define VTKSVNURBS_EXPORT_H

#include "SimVascular.h"

#ifdef VTKSVNURBS_STATIC_DEFINE
#  define VTKSVNURBS_EXPORT
#  define VTKSVNURBS_NO_EXPORT
#else
#  ifndef VTKSVNURBS_EXPORT
#    ifdef vtkSVNURBS_EXPORTS
       /* We are building this library */
#      define VTKSVNURBS_EXPORT SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define VTKSVNURBS_EXPORT SV_DLL_IMPORT
#    endif
#  endif

#  ifndef VTKSVNURBS_NO_EXPORT
#    define VTKSVNURBS_NO_EXPORT
#  endif
#endif

#endif
