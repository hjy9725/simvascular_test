/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_ModelEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_ModelEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_ModelEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiModelEdit_t {
    QByteArrayData data[55];
    char stringdata0[918];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiModelEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiModelEdit_t qt_meta_stringdata_sv4guiModelEdit = {
    {
QT_MOC_LITERAL(0, 0, 15), // "sv4guiModelEdit"
QT_MOC_LITERAL(1, 16, 11), // "CreateModel"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "ClearAll"
QT_MOC_LITERAL(4, 38, 12), // "AddObservers"
QT_MOC_LITERAL(5, 51, 15), // "RemoveObservers"
QT_MOC_LITERAL(6, 67, 22), // "ShowSegSelectionWidget"
QT_MOC_LITERAL(7, 90, 22), // "ShowCapSelectionWidget"
QT_MOC_LITERAL(8, 113, 9), // "UpdateGUI"
QT_MOC_LITERAL(9, 123, 10), // "BlendModel"
QT_MOC_LITERAL(10, 134, 18), // "ExtractCenterlines"
QT_MOC_LITERAL(11, 153, 23), // "UpdateFaceListSelection"
QT_MOC_LITERAL(12, 177, 16), // "UpdateBlendTable"
QT_MOC_LITERAL(13, 194, 5), // "index"
QT_MOC_LITERAL(14, 200, 34), // "TableViewBlendContextMenuRequ..."
QT_MOC_LITERAL(15, 235, 9), // "SetRadius"
QT_MOC_LITERAL(16, 245, 7), // "checked"
QT_MOC_LITERAL(17, 253, 11), // "ClearRadius"
QT_MOC_LITERAL(18, 265, 16), // "UseSelectedBlend"
QT_MOC_LITERAL(19, 282, 19), // "NotUseSelectedBlend"
QT_MOC_LITERAL(20, 302, 15), // "SetupBlendTable"
QT_MOC_LITERAL(21, 318, 24), // "UpdatePolyDataBlendParam"
QT_MOC_LITERAL(22, 343, 26), // "TableBlendSelectionChanged"
QT_MOC_LITERAL(23, 370, 14), // "QItemSelection"
QT_MOC_LITERAL(24, 385, 8), // "selected"
QT_MOC_LITERAL(25, 394, 10), // "deselected"
QT_MOC_LITERAL(26, 405, 18), // "SetupFaceListTable"
QT_MOC_LITERAL(27, 424, 14), // "UpdateFaceData"
QT_MOC_LITERAL(28, 439, 14), // "QStandardItem*"
QT_MOC_LITERAL(29, 454, 4), // "item"
QT_MOC_LITERAL(30, 459, 29), // "TableFaceListSelectionChanged"
QT_MOC_LITERAL(31, 489, 16), // "ToggleVisibility"
QT_MOC_LITERAL(32, 506, 11), // "QModelIndex"
QT_MOC_LITERAL(33, 518, 11), // "ChangeColor"
QT_MOC_LITERAL(34, 530, 37), // "TableViewFaceListContextMenuR..."
QT_MOC_LITERAL(35, 568, 12), // "ShowSelected"
QT_MOC_LITERAL(36, 581, 12), // "HideSelected"
QT_MOC_LITERAL(37, 594, 21), // "ChangeOpacitySelected"
QT_MOC_LITERAL(38, 616, 19), // "ChangeColorSelected"
QT_MOC_LITERAL(39, 636, 18), // "ChangeTypeSelected"
QT_MOC_LITERAL(40, 655, 12), // "ModelOperate"
QT_MOC_LITERAL(41, 668, 13), // "operationType"
QT_MOC_LITERAL(42, 682, 20), // "ShowSphereInteractor"
QT_MOC_LITERAL(43, 703, 19), // "ShowPlaneInteractor"
QT_MOC_LITERAL(44, 723, 17), // "ShowBoxInteractor"
QT_MOC_LITERAL(45, 741, 21), // "UpdatePathListForTrim"
QT_MOC_LITERAL(46, 763, 20), // "SetupSliderPathPlane"
QT_MOC_LITERAL(47, 784, 3), // "idx"
QT_MOC_LITERAL(48, 788, 17), // "UpdatePlaneWidget"
QT_MOC_LITERAL(49, 806, 18), // "SetupSliderPathBox"
QT_MOC_LITERAL(50, 825, 15), // "UpdateBoxWidget"
QT_MOC_LITERAL(51, 841, 15), // "ChangeFacetSize"
QT_MOC_LITERAL(52, 857, 22), // "ConvertToPolyDataModel"
QT_MOC_LITERAL(53, 880, 20), // "SetEstimatedEdgeSize"
QT_MOC_LITERAL(54, 901, 16) // "EstimateEdgeSize"

    },
    "sv4guiModelEdit\0CreateModel\0\0ClearAll\0"
    "AddObservers\0RemoveObservers\0"
    "ShowSegSelectionWidget\0ShowCapSelectionWidget\0"
    "UpdateGUI\0BlendModel\0ExtractCenterlines\0"
    "UpdateFaceListSelection\0UpdateBlendTable\0"
    "index\0TableViewBlendContextMenuRequested\0"
    "SetRadius\0checked\0ClearRadius\0"
    "UseSelectedBlend\0NotUseSelectedBlend\0"
    "SetupBlendTable\0UpdatePolyDataBlendParam\0"
    "TableBlendSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0SetupFaceListTable\0"
    "UpdateFaceData\0QStandardItem*\0item\0"
    "TableFaceListSelectionChanged\0"
    "ToggleVisibility\0QModelIndex\0ChangeColor\0"
    "TableViewFaceListContextMenuRequested\0"
    "ShowSelected\0HideSelected\0"
    "ChangeOpacitySelected\0ChangeColorSelected\0"
    "ChangeTypeSelected\0ModelOperate\0"
    "operationType\0ShowSphereInteractor\0"
    "ShowPlaneInteractor\0ShowBoxInteractor\0"
    "UpdatePathListForTrim\0SetupSliderPathPlane\0"
    "idx\0UpdatePlaneWidget\0SetupSliderPathBox\0"
    "UpdateBoxWidget\0ChangeFacetSize\0"
    "ConvertToPolyDataModel\0SetEstimatedEdgeSize\0"
    "EstimateEdgeSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiModelEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  274,    2, 0x0a /* Public */,
       3,    0,  275,    2, 0x0a /* Public */,
       4,    0,  276,    2, 0x0a /* Public */,
       5,    0,  277,    2, 0x0a /* Public */,
       6,    0,  278,    2, 0x0a /* Public */,
       7,    0,  279,    2, 0x0a /* Public */,
       8,    0,  280,    2, 0x0a /* Public */,
       9,    0,  281,    2, 0x0a /* Public */,
      10,    0,  282,    2, 0x0a /* Public */,
      11,    0,  283,    2, 0x0a /* Public */,
      12,    1,  284,    2, 0x0a /* Public */,
      14,    1,  287,    2, 0x0a /* Public */,
      15,    1,  290,    2, 0x0a /* Public */,
      15,    0,  293,    2, 0x2a /* Public | MethodCloned */,
      17,    1,  294,    2, 0x0a /* Public */,
      17,    0,  297,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  298,    2, 0x0a /* Public */,
      18,    0,  301,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  302,    2, 0x0a /* Public */,
      19,    0,  305,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  306,    2, 0x0a /* Public */,
      21,    0,  307,    2, 0x0a /* Public */,
      22,    2,  308,    2, 0x0a /* Public */,
      26,    0,  313,    2, 0x0a /* Public */,
      27,    1,  314,    2, 0x0a /* Public */,
      30,    2,  317,    2, 0x0a /* Public */,
      31,    1,  322,    2, 0x0a /* Public */,
      33,    1,  325,    2, 0x0a /* Public */,
      34,    1,  328,    2, 0x0a /* Public */,
      35,    1,  331,    2, 0x0a /* Public */,
      35,    0,  334,    2, 0x2a /* Public | MethodCloned */,
      36,    1,  335,    2, 0x0a /* Public */,
      36,    0,  338,    2, 0x2a /* Public | MethodCloned */,
      37,    1,  339,    2, 0x0a /* Public */,
      37,    0,  342,    2, 0x2a /* Public | MethodCloned */,
      38,    1,  343,    2, 0x0a /* Public */,
      38,    0,  346,    2, 0x2a /* Public | MethodCloned */,
      39,    1,  347,    2, 0x0a /* Public */,
      39,    0,  350,    2, 0x2a /* Public | MethodCloned */,
      40,    1,  351,    2, 0x0a /* Public */,
      42,    1,  354,    2, 0x0a /* Public */,
      43,    1,  357,    2, 0x0a /* Public */,
      44,    1,  360,    2, 0x0a /* Public */,
      45,    0,  363,    2, 0x0a /* Public */,
      46,    1,  364,    2, 0x0a /* Public */,
      48,    1,  367,    2, 0x0a /* Public */,
      49,    1,  370,    2, 0x0a /* Public */,
      50,    1,  373,    2, 0x0a /* Public */,
      51,    0,  376,    2, 0x0a /* Public */,
      52,    0,  377,    2, 0x0a /* Public */,
      53,    0,  378,    2, 0x0a /* Public */,
      54,    0,  379,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,   24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,   24,   25,
    QMetaType::Void, 0x80000000 | 32,   13,
    QMetaType::Void, 0x80000000 | 32,   13,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,

       0        // eod
};

void sv4guiModelEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiModelEdit *_t = static_cast<sv4guiModelEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreateModel(); break;
        case 1: _t->ClearAll(); break;
        case 2: _t->AddObservers(); break;
        case 3: _t->RemoveObservers(); break;
        case 4: _t->ShowSegSelectionWidget(); break;
        case 5: _t->ShowCapSelectionWidget(); break;
        case 6: _t->UpdateGUI(); break;
        case 7: _t->BlendModel(); break;
        case 8: _t->ExtractCenterlines(); break;
        case 9: _t->UpdateFaceListSelection(); break;
        case 10: _t->UpdateBlendTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->TableViewBlendContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->SetRadius((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->SetRadius(); break;
        case 14: _t->ClearRadius((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->ClearRadius(); break;
        case 16: _t->UseSelectedBlend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->UseSelectedBlend(); break;
        case 18: _t->NotUseSelectedBlend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->NotUseSelectedBlend(); break;
        case 20: _t->SetupBlendTable(); break;
        case 21: _t->UpdatePolyDataBlendParam(); break;
        case 22: _t->TableBlendSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 23: _t->SetupFaceListTable(); break;
        case 24: _t->UpdateFaceData((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 25: _t->TableFaceListSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 26: _t->ToggleVisibility((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->ChangeColor((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 28: _t->TableViewFaceListContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 29: _t->ShowSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->ShowSelected(); break;
        case 31: _t->HideSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->HideSelected(); break;
        case 33: _t->ChangeOpacitySelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->ChangeOpacitySelected(); break;
        case 35: _t->ChangeColorSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->ChangeColorSelected(); break;
        case 37: _t->ChangeTypeSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->ChangeTypeSelected(); break;
        case 39: _t->ModelOperate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->ShowSphereInteractor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->ShowPlaneInteractor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->ShowBoxInteractor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->UpdatePathListForTrim(); break;
        case 44: _t->SetupSliderPathPlane((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->UpdatePlaneWidget((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 46: _t->SetupSliderPathBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->UpdateBoxWidget((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 48: _t->ChangeFacetSize(); break;
        case 49: _t->ConvertToPolyDataModel(); break;
        case 50: _t->SetEstimatedEdgeSize(); break;
        case 51: { double _r = _t->EstimateEdgeSize();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiModelEdit::staticMetaObject = {
    { &sv4guiQmitkFunctionality::staticMetaObject, qt_meta_stringdata_sv4guiModelEdit.data,
      qt_meta_data_sv4guiModelEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiModelEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiModelEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiModelEdit.stringdata0))
        return static_cast<void*>(this);
    return sv4guiQmitkFunctionality::qt_metacast(_clname);
}

int sv4guiModelEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = sv4guiQmitkFunctionality::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
