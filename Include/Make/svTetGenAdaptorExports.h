#ifndef SV_TETGEN_ADAPTOR_EXPORT_H
#define SV_TETGEN_ADAPTOR_EXPORT_H

#include "SimVascular.h"

#ifdef SV_TETGEN_ADAPTOR_STATIC_DEFINE
#  define SV_EXPORT_TETGEN_ADAPTOR
#  define SV_EXPORT_TETGEN_ADAPTOR_NO_EXPORT
#else
#  ifndef SV_EXPORT_TETGEN_ADAPTOR 
#    ifdef SV_EXPORT_TETGEN_ADAPTOR_COMPILE
       /* We are building this library */
#      define SV_EXPORT_TETGEN_ADAPTOR SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_TETGEN_ADAPTOR SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_TETGEN_ADAPTOR_NO_EXPORT
#    define SV_EXPORT_TETGEN_ADAPTOR_NO_EXPORT
#  endif
#endif

#endif
