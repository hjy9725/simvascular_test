#ifndef SV_TETGEN_MESH_EXPORT_H
#define SV_TETGEN_MESH_EXPORT_H

#include "SimVascular.h"

#ifdef SV_TETGEN_MESH_STATIC_DEFINE
#  define SV_EXPORT_TETGEN_MESH
#  define SV_EXPORT_TETGEN_MESH_NO_EXPORT
#else
#  ifndef SV_EXPORT_TETGEN_MESH 
#    ifdef SV_EXPORT_TETGEN_MESH_COMPILE
       /* We are building this library */
#      define SV_EXPORT_TETGEN_MESH SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_TETGEN_MESH SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_TETGEN_MESH_NO_EXPORT
#    define SV_EXPORT_TETGEN_MESH_NO_EXPORT
#  endif
#endif

#endif
