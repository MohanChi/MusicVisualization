/****************************************************************************
** Meta object code from reading C++ file 'CreateVideoWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/View/CreateVideos/CreateVideoWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CreateVideoWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreateVideoWindow_t {
    QByteArrayData data[14];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateVideoWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateVideoWindow_t qt_meta_stringdata_CreateVideoWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CreateVideoWindow"
QT_MOC_LITERAL(1, 18, 21), // "slot_OnBtnBackClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "slot_OnBtnGenerateClicked"
QT_MOC_LITERAL(4, 67, 21), // "slot_OnBtnUploadMusic"
QT_MOC_LITERAL(5, 89, 21), // "slot_SliderPulseReact"
QT_MOC_LITERAL(6, 111, 5), // "value"
QT_MOC_LITERAL(7, 117, 22), // "slot_SliderMotionReact"
QT_MOC_LITERAL(8, 140, 27), // "slot_SliderContrastStrength"
QT_MOC_LITERAL(9, 168, 18), // "slot_DSBPulseReact"
QT_MOC_LITERAL(10, 187, 19), // "slot_DSBMotionReact"
QT_MOC_LITERAL(11, 207, 24), // "slot_DSBContrastStrength"
QT_MOC_LITERAL(12, 232, 18), // "slot_StyleComboBox"
QT_MOC_LITERAL(13, 251, 4) // "text"

    },
    "CreateVideoWindow\0slot_OnBtnBackClicked\0"
    "\0slot_OnBtnGenerateClicked\0"
    "slot_OnBtnUploadMusic\0slot_SliderPulseReact\0"
    "value\0slot_SliderMotionReact\0"
    "slot_SliderContrastStrength\0"
    "slot_DSBPulseReact\0slot_DSBMotionReact\0"
    "slot_DSBContrastStrength\0slot_StyleComboBox\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateVideoWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      11,    1,   82,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void CreateVideoWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateVideoWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_OnBtnBackClicked(); break;
        case 1: _t->slot_OnBtnGenerateClicked(); break;
        case 2: _t->slot_OnBtnUploadMusic(); break;
        case 3: _t->slot_SliderPulseReact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slot_SliderMotionReact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slot_SliderContrastStrength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_DSBPulseReact((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->slot_DSBMotionReact((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->slot_DSBContrastStrength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->slot_StyleComboBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateVideoWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CreateVideoWindow.data,
    qt_meta_data_CreateVideoWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateVideoWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateVideoWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateVideoWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CreateVideoWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
