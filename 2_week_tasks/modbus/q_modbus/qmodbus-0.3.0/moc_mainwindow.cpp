/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "clearBusMonTable"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "updateRequestPreview"
QT_MOC_LITERAL(4, 50, 18), // "updateRegisterView"
QT_MOC_LITERAL(5, 69, 13), // "enableHexView"
QT_MOC_LITERAL(6, 83, 17), // "sendModbusRequest"
QT_MOC_LITERAL(7, 101, 17), // "onSendButtonPress"
QT_MOC_LITERAL(8, 119, 16), // "pollForDataOnBus"
QT_MOC_LITERAL(9, 136, 18), // "openBatchProcessor"
QT_MOC_LITERAL(10, 155, 12), // "aboutQModBus"
QT_MOC_LITERAL(11, 168, 15), // "onRtuPortActive"
QT_MOC_LITERAL(12, 184, 6), // "active"
QT_MOC_LITERAL(13, 191, 17), // "onAsciiPortActive"
QT_MOC_LITERAL(14, 209, 15), // "onTcpPortActive"
QT_MOC_LITERAL(15, 225, 11), // "resetStatus"
QT_MOC_LITERAL(16, 237, 14), // "setStatusError"
QT_MOC_LITERAL(17, 252, 3) // "msg"

    },
    "MainWindow\0clearBusMonTable\0\0"
    "updateRequestPreview\0updateRegisterView\0"
    "enableHexView\0sendModbusRequest\0"
    "onSendButtonPress\0pollForDataOnBus\0"
    "openBatchProcessor\0aboutQModBus\0"
    "onRtuPortActive\0active\0onAsciiPortActive\0"
    "onTcpPortActive\0resetStatus\0setStatusError\0"
    "msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearBusMonTable(); break;
        case 1: _t->updateRequestPreview(); break;
        case 2: _t->updateRegisterView(); break;
        case 3: _t->enableHexView(); break;
        case 4: _t->sendModbusRequest(); break;
        case 5: _t->onSendButtonPress(); break;
        case 6: _t->pollForDataOnBus(); break;
        case 7: _t->openBatchProcessor(); break;
        case 8: _t->aboutQModBus(); break;
        case 9: _t->onRtuPortActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onAsciiPortActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onTcpPortActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->resetStatus(); break;
        case 13: _t->setStatusError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
