/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_SolverProcessHandlerROM.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_SolverProcessHandlerROM.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_SolverProcessHandlerROM.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiSolverProcessHandlerROM_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiSolverProcessHandlerROM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiSolverProcessHandlerROM_t qt_meta_stringdata_sv4guiSolverProcessHandlerROM = {
    {
QT_MOC_LITERAL(0, 0, 29), // "sv4guiSolverProcessHandlerROM"
QT_MOC_LITERAL(1, 30, 20), // "AfterProcessFinished"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 8), // "exitCode"
QT_MOC_LITERAL(4, 61, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(5, 82, 10), // "exitStatus"
QT_MOC_LITERAL(6, 93, 12), // "UpdateStatus"
QT_MOC_LITERAL(7, 106, 12), // "ProcessError"
QT_MOC_LITERAL(8, 119, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(9, 142, 5) // "error"

    },
    "sv4guiSolverProcessHandlerROM\0"
    "AfterProcessFinished\0\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "UpdateStatus\0ProcessError\0"
    "QProcess::ProcessError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiSolverProcessHandlerROM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       6,    0,   34,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void sv4guiSolverProcessHandlerROM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiSolverProcessHandlerROM *_t = static_cast<sv4guiSolverProcessHandlerROM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AfterProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 1: _t->UpdateStatus(); break;
        case 2: _t->ProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiSolverProcessHandlerROM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sv4guiSolverProcessHandlerROM.data,
      qt_meta_data_sv4guiSolverProcessHandlerROM,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiSolverProcessHandlerROM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiSolverProcessHandlerROM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiSolverProcessHandlerROM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int sv4guiSolverProcessHandlerROM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
