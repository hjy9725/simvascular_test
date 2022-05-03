/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_ModelExtractPathsAction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_ModelExtractPathsAction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_ModelExtractPathsAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiModelExtractPathsAction_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiModelExtractPathsAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiModelExtractPathsAction_t qt_meta_stringdata_sv4guiModelExtractPathsAction = {
    {
QT_MOC_LITERAL(0, 0, 29), // "sv4guiModelExtractPathsAction"
QT_MOC_LITERAL(1, 30, 12), // "UpdateStatus"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "sv4guiModelExtractPathsAction\0"
    "UpdateStatus\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiModelExtractPathsAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void sv4guiModelExtractPathsAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiModelExtractPathsAction *_t = static_cast<sv4guiModelExtractPathsAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateStatus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject sv4guiModelExtractPathsAction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sv4guiModelExtractPathsAction.data,
      qt_meta_data_sv4guiModelExtractPathsAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiModelExtractPathsAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiModelExtractPathsAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiModelExtractPathsAction.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "svmitk::IContextMenuAction"))
        return static_cast< svmitk::IContextMenuAction*>(this);
    if (!strcmp(_clname, "org.sv.datamanager.IContextMenuAction"))
        return static_cast< svmitk::IContextMenuAction*>(this);
    return QObject::qt_metacast(_clname);
}

int sv4guiModelExtractPathsAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
