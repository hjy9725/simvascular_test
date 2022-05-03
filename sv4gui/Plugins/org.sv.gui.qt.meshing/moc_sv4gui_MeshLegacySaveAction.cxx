/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_MeshLegacySaveAction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_MeshLegacySaveAction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_MeshLegacySaveAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiMeshLegacySaveAction_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiMeshLegacySaveAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiMeshLegacySaveAction_t qt_meta_stringdata_sv4guiMeshLegacySaveAction = {
    {
QT_MOC_LITERAL(0, 0, 26) // "sv4guiMeshLegacySaveAction"

    },
    "sv4guiMeshLegacySaveAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiMeshLegacySaveAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void sv4guiMeshLegacySaveAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject sv4guiMeshLegacySaveAction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sv4guiMeshLegacySaveAction.data,
      qt_meta_data_sv4guiMeshLegacySaveAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiMeshLegacySaveAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiMeshLegacySaveAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiMeshLegacySaveAction.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "svmitk::IContextMenuAction"))
        return static_cast< svmitk::IContextMenuAction*>(this);
    if (!strcmp(_clname, "org.sv.datamanager.IContextMenuAction"))
        return static_cast< svmitk::IContextMenuAction*>(this);
    return QObject::qt_metacast(_clname);
}

int sv4guiMeshLegacySaveAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
