/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_QmitkImageMaskingWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_QmitkImageMaskingWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_QmitkImageMaskingWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmitkImageMaskingWidget_t {
    QByteArrayData data[9];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkImageMaskingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkImageMaskingWidget_t qt_meta_stringdata_QmitkImageMaskingWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QmitkImageMaskingWidget"
QT_MOC_LITERAL(1, 24, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "index"
QT_MOC_LITERAL(4, 50, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(5, 72, 9), // "selection"
QT_MOC_LITERAL(6, 82, 21), // "OnImageMaskingToggled"
QT_MOC_LITERAL(7, 104, 23), // "OnSurfaceMaskingToggled"
QT_MOC_LITERAL(8, 128, 18) // "OnMaskImagePressed"

    },
    "QmitkImageMaskingWidget\0OnSelectionChanged\0"
    "\0index\0const mitk::DataNode*\0selection\0"
    "OnImageMaskingToggled\0OnSurfaceMaskingToggled\0"
    "OnMaskImagePressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkImageMaskingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,
       7,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void QmitkImageMaskingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkImageMaskingWidget *_t = static_cast<QmitkImageMaskingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const mitk::DataNode*(*)>(_a[2]))); break;
        case 1: _t->OnImageMaskingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnSurfaceMaskingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnMaskImagePressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmitkImageMaskingWidget::staticMetaObject = {
    { &QmitkSegmentationUtilityWidget::staticMetaObject, qt_meta_stringdata_QmitkImageMaskingWidget.data,
      qt_meta_data_QmitkImageMaskingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmitkImageMaskingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkImageMaskingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkImageMaskingWidget.stringdata0))
        return static_cast<void*>(this);
    return QmitkSegmentationUtilityWidget::qt_metacast(_clname);
}

int QmitkImageMaskingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkSegmentationUtilityWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
