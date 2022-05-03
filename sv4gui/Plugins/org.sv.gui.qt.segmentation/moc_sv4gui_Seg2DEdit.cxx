/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_Seg2DEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_Seg2DEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_Seg2DEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiSeg2DEdit_t {
    QByteArrayData data[68];
    char stringdata0[1091];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiSeg2DEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiSeg2DEdit_t qt_meta_stringdata_sv4guiSeg2DEdit = {
    {
QT_MOC_LITERAL(0, 0, 15), // "sv4guiSeg2DEdit"
QT_MOC_LITERAL(1, 16, 15), // "CreateLSContour"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "CreateThresholdContour"
QT_MOC_LITERAL(4, 56, 12), // "CreateCircle"
QT_MOC_LITERAL(5, 69, 13), // "CreateEllipse"
QT_MOC_LITERAL(6, 83, 16), // "CreateSplinePoly"
QT_MOC_LITERAL(7, 100, 13), // "CreatePolygon"
QT_MOC_LITERAL(8, 114, 17), // "UpdateContourList"
QT_MOC_LITERAL(9, 132, 13), // "InsertContour"
QT_MOC_LITERAL(10, 146, 14), // "sv4guiContour*"
QT_MOC_LITERAL(11, 161, 7), // "contour"
QT_MOC_LITERAL(12, 169, 12), // "contourIndex"
QT_MOC_LITERAL(13, 182, 27), // "InsertContourByPathPosPoint"
QT_MOC_LITERAL(14, 210, 10), // "SetContour"
QT_MOC_LITERAL(15, 221, 10), // "newContour"
QT_MOC_LITERAL(16, 232, 13), // "RemoveContour"
QT_MOC_LITERAL(17, 246, 14), // "DeleteSelected"
QT_MOC_LITERAL(18, 261, 13), // "SelectContour"
QT_MOC_LITERAL(19, 275, 11), // "QModelIndex"
QT_MOC_LITERAL(20, 287, 3), // "idx"
QT_MOC_LITERAL(21, 291, 8), // "ClearAll"
QT_MOC_LITERAL(22, 300, 13), // "UpdatePreview"
QT_MOC_LITERAL(23, 314, 13), // "FinishPreview"
QT_MOC_LITERAL(24, 328, 14), // "SmoothSelected"
QT_MOC_LITERAL(25, 343, 14), // "CreateContours"
QT_MOC_LITERAL(26, 358, 18), // "SegmentationMethod"
QT_MOC_LITERAL(27, 377, 6), // "method"
QT_MOC_LITERAL(28, 384, 26), // "SetSecondaryWidgetsVisible"
QT_MOC_LITERAL(29, 411, 7), // "visible"
QT_MOC_LITERAL(30, 419, 12), // "GetBatchList"
QT_MOC_LITERAL(31, 432, 16), // "std::vector<int>"
QT_MOC_LITERAL(32, 449, 18), // "PostprocessContour"
QT_MOC_LITERAL(33, 468, 21), // "GetVolumeImageSpacing"
QT_MOC_LITERAL(34, 490, 16), // "LoftContourGroup"
QT_MOC_LITERAL(35, 507, 14), // "ShowLoftWidget"
QT_MOC_LITERAL(36, 522, 30), // "UpdateContourGroupLoftingParam"
QT_MOC_LITERAL(37, 553, 9), // "OKLofting"
QT_MOC_LITERAL(38, 563, 12), // "ApplyLofting"
QT_MOC_LITERAL(39, 576, 14), // "HideLoftWidget"
QT_MOC_LITERAL(40, 591, 17), // "ContourChangingOn"
QT_MOC_LITERAL(41, 609, 18), // "ContourChangingOff"
QT_MOC_LITERAL(42, 628, 15), // "SelectContour3D"
QT_MOC_LITERAL(43, 644, 8), // "ResetGUI"
QT_MOC_LITERAL(44, 653, 21), // "UpdatePathResliceSize"
QT_MOC_LITERAL(45, 675, 7), // "newSize"
QT_MOC_LITERAL(46, 683, 26), // "ManualContextMenuRequested"
QT_MOC_LITERAL(47, 710, 32), // "ManualCircleContextMenuRequested"
QT_MOC_LITERAL(48, 743, 3), // "pos"
QT_MOC_LITERAL(49, 747, 33), // "ManualEllipseContextMenuReque..."
QT_MOC_LITERAL(50, 781, 36), // "ManualSplinePolyContextMenuRe..."
QT_MOC_LITERAL(51, 818, 33), // "ManualPolygonContextMenuReque..."
QT_MOC_LITERAL(52, 852, 18), // "CreateManualCircle"
QT_MOC_LITERAL(53, 871, 7), // "checked"
QT_MOC_LITERAL(54, 879, 19), // "CreateManualEllipse"
QT_MOC_LITERAL(55, 899, 22), // "CreateManualSplinePoly"
QT_MOC_LITERAL(56, 922, 19), // "CreateManualPolygon"
QT_MOC_LITERAL(57, 942, 23), // "CreateManualPolygonType"
QT_MOC_LITERAL(58, 966, 6), // "spline"
QT_MOC_LITERAL(59, 973, 11), // "CopyContour"
QT_MOC_LITERAL(60, 985, 12), // "PasteContour"
QT_MOC_LITERAL(61, 998, 8), // "NewGroup"
QT_MOC_LITERAL(62, 1007, 8), // "ShowPath"
QT_MOC_LITERAL(63, 1016, 15), // "UpdatePathPoint"
QT_MOC_LITERAL(64, 1032, 14), // "selectAllPaths"
QT_MOC_LITERAL(65, 1047, 12), // "segmentPaths"
QT_MOC_LITERAL(66, 1060, 14), // "segTabSelected"
QT_MOC_LITERAL(67, 1075, 15) // "CreateMLContour"

    },
    "sv4guiSeg2DEdit\0CreateLSContour\0\0"
    "CreateThresholdContour\0CreateCircle\0"
    "CreateEllipse\0CreateSplinePoly\0"
    "CreatePolygon\0UpdateContourList\0"
    "InsertContour\0sv4guiContour*\0contour\0"
    "contourIndex\0InsertContourByPathPosPoint\0"
    "SetContour\0newContour\0RemoveContour\0"
    "DeleteSelected\0SelectContour\0QModelIndex\0"
    "idx\0ClearAll\0UpdatePreview\0FinishPreview\0"
    "SmoothSelected\0CreateContours\0"
    "SegmentationMethod\0method\0"
    "SetSecondaryWidgetsVisible\0visible\0"
    "GetBatchList\0std::vector<int>\0"
    "PostprocessContour\0GetVolumeImageSpacing\0"
    "LoftContourGroup\0ShowLoftWidget\0"
    "UpdateContourGroupLoftingParam\0OKLofting\0"
    "ApplyLofting\0HideLoftWidget\0"
    "ContourChangingOn\0ContourChangingOff\0"
    "SelectContour3D\0ResetGUI\0UpdatePathResliceSize\0"
    "newSize\0ManualContextMenuRequested\0"
    "ManualCircleContextMenuRequested\0pos\0"
    "ManualEllipseContextMenuRequested\0"
    "ManualSplinePolyContextMenuRequested\0"
    "ManualPolygonContextMenuRequested\0"
    "CreateManualCircle\0checked\0"
    "CreateManualEllipse\0CreateManualSplinePoly\0"
    "CreateManualPolygon\0CreateManualPolygonType\0"
    "spline\0CopyContour\0PasteContour\0"
    "NewGroup\0ShowPath\0UpdatePathPoint\0"
    "selectAllPaths\0segmentPaths\0segTabSelected\0"
    "CreateMLContour"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiSeg2DEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  304,    2, 0x0a /* Public */,
       3,    0,  305,    2, 0x0a /* Public */,
       4,    0,  306,    2, 0x0a /* Public */,
       5,    0,  307,    2, 0x0a /* Public */,
       6,    0,  308,    2, 0x0a /* Public */,
       7,    0,  309,    2, 0x0a /* Public */,
       8,    0,  310,    2, 0x0a /* Public */,
       9,    2,  311,    2, 0x0a /* Public */,
      13,    1,  316,    2, 0x0a /* Public */,
      14,    2,  319,    2, 0x0a /* Public */,
      16,    1,  324,    2, 0x0a /* Public */,
      17,    0,  327,    2, 0x0a /* Public */,
      18,    0,  328,    2, 0x0a /* Public */,
      18,    1,  329,    2, 0x0a /* Public */,
      21,    0,  332,    2, 0x0a /* Public */,
      22,    0,  333,    2, 0x0a /* Public */,
      23,    0,  334,    2, 0x0a /* Public */,
      24,    0,  335,    2, 0x0a /* Public */,
      25,    1,  336,    2, 0x0a /* Public */,
      28,    1,  339,    2, 0x0a /* Public */,
      30,    0,  342,    2, 0x0a /* Public */,
      32,    1,  343,    2, 0x0a /* Public */,
      33,    0,  346,    2, 0x0a /* Public */,
      34,    0,  347,    2, 0x0a /* Public */,
      35,    0,  348,    2, 0x0a /* Public */,
      36,    0,  349,    2, 0x0a /* Public */,
      37,    0,  350,    2, 0x0a /* Public */,
      38,    0,  351,    2, 0x0a /* Public */,
      39,    0,  352,    2, 0x0a /* Public */,
      40,    0,  353,    2, 0x0a /* Public */,
      41,    0,  354,    2, 0x0a /* Public */,
      42,    0,  355,    2, 0x0a /* Public */,
      43,    0,  356,    2, 0x0a /* Public */,
      44,    1,  357,    2, 0x0a /* Public */,
      46,    0,  360,    2, 0x0a /* Public */,
      47,    1,  361,    2, 0x0a /* Public */,
      49,    1,  364,    2, 0x0a /* Public */,
      50,    1,  367,    2, 0x0a /* Public */,
      51,    1,  370,    2, 0x0a /* Public */,
      52,    1,  373,    2, 0x0a /* Public */,
      52,    0,  376,    2, 0x2a /* Public | MethodCloned */,
      54,    1,  377,    2, 0x0a /* Public */,
      54,    0,  380,    2, 0x2a /* Public | MethodCloned */,
      55,    1,  381,    2, 0x0a /* Public */,
      55,    0,  384,    2, 0x2a /* Public | MethodCloned */,
      56,    1,  385,    2, 0x0a /* Public */,
      56,    0,  388,    2, 0x2a /* Public | MethodCloned */,
      57,    1,  389,    2, 0x0a /* Public */,
      59,    0,  392,    2, 0x0a /* Public */,
      60,    0,  393,    2, 0x0a /* Public */,
      61,    0,  394,    2, 0x0a /* Public */,
      62,    1,  395,    2, 0x0a /* Public */,
      62,    0,  398,    2, 0x2a /* Public | MethodCloned */,
      63,    1,  399,    2, 0x0a /* Public */,
      64,    0,  402,    2, 0x0a /* Public */,
      65,    0,  403,    2, 0x0a /* Public */,
      66,    0,  404,    2, 0x0a /* Public */,
      67,    0,  405,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,   12,   15,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    0x80000000 | 31,
    0x80000000 | 10, 0x80000000 | 10,   11,
    QMetaType::Double,
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
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   48,
    QMetaType::Void, QMetaType::QPoint,   48,
    QMetaType::Void, QMetaType::QPoint,   48,
    QMetaType::Void, QMetaType::QPoint,   48,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sv4guiSeg2DEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiSeg2DEdit *_t = static_cast<sv4guiSeg2DEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreateLSContour(); break;
        case 1: _t->CreateThresholdContour(); break;
        case 2: _t->CreateCircle(); break;
        case 3: _t->CreateEllipse(); break;
        case 4: _t->CreateSplinePoly(); break;
        case 5: _t->CreatePolygon(); break;
        case 6: _t->UpdateContourList(); break;
        case 7: _t->InsertContour((*reinterpret_cast< sv4guiContour*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->InsertContourByPathPosPoint((*reinterpret_cast< sv4guiContour*(*)>(_a[1]))); break;
        case 9: _t->SetContour((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< sv4guiContour*(*)>(_a[2]))); break;
        case 10: _t->RemoveContour((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->DeleteSelected(); break;
        case 12: _t->SelectContour(); break;
        case 13: _t->SelectContour((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->ClearAll(); break;
        case 15: _t->UpdatePreview(); break;
        case 16: _t->FinishPreview(); break;
        case 17: _t->SmoothSelected(); break;
        case 18: _t->CreateContours((*reinterpret_cast< SegmentationMethod(*)>(_a[1]))); break;
        case 19: _t->SetSecondaryWidgetsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: { std::vector<int> _r = _t->GetBatchList();
            if (_a[0]) *reinterpret_cast< std::vector<int>*>(_a[0]) = std::move(_r); }  break;
        case 21: { sv4guiContour* _r = _t->PostprocessContour((*reinterpret_cast< sv4guiContour*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< sv4guiContour**>(_a[0]) = std::move(_r); }  break;
        case 22: { double _r = _t->GetVolumeImageSpacing();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->LoftContourGroup(); break;
        case 24: _t->ShowLoftWidget(); break;
        case 25: _t->UpdateContourGroupLoftingParam(); break;
        case 26: _t->OKLofting(); break;
        case 27: _t->ApplyLofting(); break;
        case 28: _t->HideLoftWidget(); break;
        case 29: _t->ContourChangingOn(); break;
        case 30: _t->ContourChangingOff(); break;
        case 31: _t->SelectContour3D(); break;
        case 32: _t->ResetGUI(); break;
        case 33: _t->UpdatePathResliceSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 34: _t->ManualContextMenuRequested(); break;
        case 35: _t->ManualCircleContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 36: _t->ManualEllipseContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 37: _t->ManualSplinePolyContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 38: _t->ManualPolygonContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 39: _t->CreateManualCircle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->CreateManualCircle(); break;
        case 41: _t->CreateManualEllipse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->CreateManualEllipse(); break;
        case 43: _t->CreateManualSplinePoly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->CreateManualSplinePoly(); break;
        case 45: _t->CreateManualPolygon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->CreateManualPolygon(); break;
        case 47: _t->CreateManualPolygonType((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->CopyContour(); break;
        case 49: _t->PasteContour(); break;
        case 50: _t->NewGroup(); break;
        case 51: _t->ShowPath((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->ShowPath(); break;
        case 53: _t->UpdatePathPoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->selectAllPaths(); break;
        case 55: _t->segmentPaths(); break;
        case 56: _t->segTabSelected(); break;
        case 57: _t->CreateMLContour(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiSeg2DEdit::staticMetaObject = {
    { &sv4guiQmitkFunctionality::staticMetaObject, qt_meta_stringdata_sv4guiSeg2DEdit.data,
      qt_meta_data_sv4guiSeg2DEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiSeg2DEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiSeg2DEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiSeg2DEdit.stringdata0))
        return static_cast<void*>(this);
    return sv4guiQmitkFunctionality::qt_metacast(_clname);
}

int sv4guiSeg2DEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = sv4guiQmitkFunctionality::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
