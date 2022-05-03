#ifndef SV_POLYDATASOLID_EXPORT_H
#define SV_POLYDATASOLID_EXPORT_H

#include "SimVascular.h"

#ifdef SV_POLYDATASOLID_STATIC_DEFINE
#  define SV_EXPORT_POLYDATASOLID
#  define SV_EXPORT_POLYDATASOLID_NO_EXPORT
#else
#  ifndef SV_EXPORT_POLYDATASOLID 
#    ifdef SV_EXPORT_POLYDATASOLID_COMPILE
       /* We are building this library */
#      define SV_EXPORT_POLYDATASOLID SV_DLL_EXPORT
#    else
       /* We are using this library */
#      define SV_EXPORT_POLYDATASOLID SV_DLL_IMPORT
#    endif
#  endif

#  ifndef SV_EXPORT_POLYDATASOLID_NO_EXPORT
#    define SV_EXPORT_POLYDATASOLID_NO_EXPORT
#  endif
#endif

#endif
