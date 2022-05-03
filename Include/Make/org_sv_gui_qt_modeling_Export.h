// .NAME __org_sv_gui_qt_modeling_Export - manage Windows system differences
// .SECTION Description
// The __org_sv_gui_qt_modeling_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_sv_gui_qt_modeling_Export_h
#define __org_sv_gui_qt_modeling_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_sv_gui_qt_modeling_EXPORTS)
#    define SV_QT_MODELING Q_DECL_EXPORT
#  else
#    define SV_QT_MODELING Q_DECL_IMPORT
#  endif
#endif

#if !defined(SV_QT_MODELING)
//#  if defined(CTK_SHARED)
#    define SV_QT_MODELING Q_DECL_EXPORT
//#  else
//#    define SV_QT_MODELING
//#  endif
#endif

#endif
