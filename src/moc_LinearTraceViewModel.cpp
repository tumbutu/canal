/****************************************************************************
** Meta object code from reading C++ file 'LinearTraceViewModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window/TraceWindow/LinearTraceViewModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinearTraceViewModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinearTraceViewModel_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinearTraceViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinearTraceViewModel_t qt_meta_stringdata_LinearTraceViewModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LinearTraceViewModel"
QT_MOC_LITERAL(1, 21, 12), // "beforeAppend"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "num_messages"
QT_MOC_LITERAL(4, 48, 11), // "afterAppend"
QT_MOC_LITERAL(5, 60, 11), // "beforeClear"
QT_MOC_LITERAL(6, 72, 10) // "afterClear"

    },
    "LinearTraceViewModel\0beforeAppend\0\0"
    "num_messages\0afterAppend\0beforeClear\0"
    "afterClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinearTraceViewModel[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LinearTraceViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinearTraceViewModel *_t = static_cast<LinearTraceViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beforeAppend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->afterAppend(); break;
        case 2: _t->beforeClear(); break;
        case 3: _t->afterClear(); break;
        default: ;
        }
    }
}

const QMetaObject LinearTraceViewModel::staticMetaObject = {
    { &BaseTraceViewModel::staticMetaObject, qt_meta_stringdata_LinearTraceViewModel.data,
      qt_meta_data_LinearTraceViewModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LinearTraceViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinearTraceViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinearTraceViewModel.stringdata0))
        return static_cast<void*>(this);
    return BaseTraceViewModel::qt_metacast(_clname);
}

int LinearTraceViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTraceViewModel::qt_metacall(_c, _id, _a);
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
