/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_QmitkDataSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_QmitkDataSelectionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_QmitkDataSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmitkDataSelectionWidget_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkDataSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkDataSelectionWidget_t qt_meta_stringdata_QmitkDataSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QmitkDataSelectionWidget"
QT_MOC_LITERAL(1, 25, 16), // "SelectionChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "index"
QT_MOC_LITERAL(4, 49, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(5, 71, 9), // "selection"
QT_MOC_LITERAL(6, 81, 18) // "OnSelectionChanged"

    },
    "QmitkDataSelectionWidget\0SelectionChanged\0"
    "\0index\0const mitk::DataNode*\0selection\0"
    "OnSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkDataSelectionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void QmitkDataSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkDataSelectionWidget *_t = static_cast<QmitkDataSelectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const mitk::DataNode*(*)>(_a[2]))); break;
        case 1: _t->OnSelectionChanged((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QmitkDataSelectionWidget::*)(unsigned int , const mitk::DataNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmitkDataSelectionWidget::SelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmitkDataSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkDataSelectionWidget.data,
      qt_meta_data_QmitkDataSelectionWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmitkDataSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkDataSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkDataSelectionWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QmitkDataSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QmitkDataSelectionWidget::SelectionChanged(unsigned int _t1, const mitk::DataNode * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
