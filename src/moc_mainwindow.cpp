/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "createTraceWindow"
QT_MOC_LITERAL(2, 29, 12), // "QMainWindow*"
QT_MOC_LITERAL(3, 42, 0), // ""
QT_MOC_LITERAL(4, 43, 5), // "title"
QT_MOC_LITERAL(5, 49, 16), // "createAdcsWindow"
QT_MOC_LITERAL(6, 66, 13), // "addAdcsWidget"
QT_MOC_LITERAL(7, 80, 6), // "parent"
QT_MOC_LITERAL(8, 87, 14), // "addRawTxWidget"
QT_MOC_LITERAL(9, 102, 12), // "addLogWidget"
QT_MOC_LITERAL(10, 115, 15), // "addStatusWidget"
QT_MOC_LITERAL(11, 131, 15), // "showSetupDialog"
QT_MOC_LITERAL(12, 147, 15), // "showAboutDialog"
QT_MOC_LITERAL(13, 163, 16), // "startMeasurement"
QT_MOC_LITERAL(14, 180, 15), // "stopMeasurement"
QT_MOC_LITERAL(15, 196, 34) // "on_actionCan_Status_View_trig..."

    },
    "MainWindow\0createTraceWindow\0QMainWindow*\0"
    "\0title\0createAdcsWindow\0addAdcsWidget\0"
    "parent\0addRawTxWidget\0addLogWidget\0"
    "addStatusWidget\0showSetupDialog\0"
    "showAboutDialog\0startMeasurement\0"
    "stopMeasurement\0on_actionCan_Status_View_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    3, 0x0a /* Public */,
       1,    0,  102,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  103,    3, 0x0a /* Public */,
       5,    0,  106,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  107,    3, 0x0a /* Public */,
       6,    0,  110,    3, 0x2a /* Public | MethodCloned */,
       8,    1,  111,    3, 0x0a /* Public */,
       8,    0,  114,    3, 0x2a /* Public | MethodCloned */,
       9,    1,  115,    3, 0x0a /* Public */,
       9,    0,  118,    3, 0x2a /* Public | MethodCloned */,
      10,    1,  119,    3, 0x0a /* Public */,
      10,    0,  122,    3, 0x2a /* Public | MethodCloned */,
      11,    0,  123,    3, 0x0a /* Public */,
      12,    0,  124,    3, 0x0a /* Public */,
      13,    0,  125,    3, 0x0a /* Public */,
      14,    0,  126,    3, 0x0a /* Public */,
      15,    0,  127,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QMainWindow* _r = _t->createTraceWindow((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMainWindow**>(_a[0]) = std::move(_r); }  break;
        case 1: { QMainWindow* _r = _t->createTraceWindow();
            if (_a[0]) *reinterpret_cast< QMainWindow**>(_a[0]) = std::move(_r); }  break;
        case 2: { QMainWindow* _r = _t->createAdcsWindow((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMainWindow**>(_a[0]) = std::move(_r); }  break;
        case 3: { QMainWindow* _r = _t->createAdcsWindow();
            if (_a[0]) *reinterpret_cast< QMainWindow**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->addAdcsWidget((*reinterpret_cast< QMainWindow*(*)>(_a[1]))); break;
        case 5: _t->addAdcsWidget(); break;
        case 6: _t->addRawTxWidget((*reinterpret_cast< QMainWindow*(*)>(_a[1]))); break;
        case 7: _t->addRawTxWidget(); break;
        case 8: _t->addLogWidget((*reinterpret_cast< QMainWindow*(*)>(_a[1]))); break;
        case 9: _t->addLogWidget(); break;
        case 10: _t->addStatusWidget((*reinterpret_cast< QMainWindow*(*)>(_a[1]))); break;
        case 11: _t->addStatusWidget(); break;
        case 12: { bool _r = _t->showSetupDialog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->showAboutDialog(); break;
        case 14: _t->startMeasurement(); break;
        case 15: _t->stopMeasurement(); break;
        case 16: _t->on_actionCan_Status_View_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMainWindow* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMainWindow* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMainWindow* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMainWindow* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
