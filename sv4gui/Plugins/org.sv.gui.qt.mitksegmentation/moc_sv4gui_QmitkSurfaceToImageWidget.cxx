/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_QmitkSurfaceToImageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_QmitkSurfaceToImageWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_QmitkSurfaceToImageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmitkSurfaceToImageWidget_t {
    QByteArrayData data[7];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkSurfaceToImageWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkSurfaceToImageWidget_t qt_meta_stringdata_QmitkSurfaceToImageWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmitkSurfaceToImageWidget"
QT_MOC_LITERAL(1, 26, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "index"
QT_MOC_LITERAL(4, 52, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(5, 74, 9), // "selection"
QT_MOC_LITERAL(6, 84, 22) // "OnSurface2ImagePressed"

    },
    "QmitkSurfaceToImageWidget\0OnSelectionChanged\0"
    "\0index\0const mitk::DataNode*\0selection\0"
    "OnSurface2ImagePressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkSurfaceToImageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       6,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

       0        // eod
};

void QmitkSurfaceToImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkSurfaceToImageWidget *_t = static_cast<QmitkSurfaceToImageWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const mitk::DataNode*(*)>(_a[2]))); break;
        case 1: _t->OnSurface2ImagePressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmitkSurfaceToImageWidget::staticMetaObject = {
    { &QmitkSegmentationUtilityWidget::staticMetaObject, qt_meta_stringdata_QmitkSurfaceToImageWidget.data,
      qt_meta_data_QmitkSurfaceToImageWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmitkSurfaceToImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkSurfaceToImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkSurfaceToImageWidget.stringdata0))
        return static_cast<void*>(this);
    return QmitkSegmentationUtilityWidget::qt_metacast(_clname);
}

int QmitkSurfaceToImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkSegmentationUtilityWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
