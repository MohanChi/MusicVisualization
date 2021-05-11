/****************************************************************************
** Meta object code from reading C++ file 'NewNameWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/View/Create/NewNameWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewNameWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewNameWindow_t {
    QByteArrayData data[6];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewNameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewNameWindow_t qt_meta_stringdata_NewNameWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NewNameWindow"
QT_MOC_LITERAL(1, 14, 13), // "signal_Cancel"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 28), // "signal_OpenCreateVideoWindow"
QT_MOC_LITERAL(4, 58, 19), // "slot_OnBtnOKClicked"
QT_MOC_LITERAL(5, 78, 23) // "slot_OnBtnCancelClicked"

    },
    "NewNameWindow\0signal_Cancel\0\0"
    "signal_OpenCreateVideoWindow\0"
    "slot_OnBtnOKClicked\0slot_OnBtnCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewNameWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewNameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewNameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_Cancel(); break;
        case 1: _t->signal_OpenCreateVideoWindow(); break;
        case 2: _t->slot_OnBtnOKClicked(); break;
        case 3: _t->slot_OnBtnCancelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewNameWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewNameWindow::signal_Cancel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NewNameWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewNameWindow::signal_OpenCreateVideoWindow)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NewNameWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_NewNameWindow.data,
    qt_meta_data_NewNameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewNameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewNameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewNameWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NewNameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NewNameWindow::signal_Cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NewNameWindow::signal_OpenCreateVideoWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
