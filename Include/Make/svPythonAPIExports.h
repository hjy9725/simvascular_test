#ifndef SV_PYTHON_API_EXPORT_H
#define SV_PYTHON_API_EXPORT_H

#include "SimVascular.h"

#ifdef SV_PYTHON_API_STATIC_DEFINE
#  define SV_EXPORT_PYTHON_API
#  define SV_EXPORT_PYTHON_API_NO_EXPORT
#else
#  ifndef SV_EXPORT_PYTHON_API 
#    ifdef SV_EXPORT_PYTHON_API_COMPILE
       /* We are building this library */
#      define SV_EXPORT_PYTHON_API SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_PYTHON_API SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_PYTHON_API_NO_EXPORT
#    define SV_EXPORT_PYTHON_API_NO_EXPORT
#  endif
#endif

#endif
