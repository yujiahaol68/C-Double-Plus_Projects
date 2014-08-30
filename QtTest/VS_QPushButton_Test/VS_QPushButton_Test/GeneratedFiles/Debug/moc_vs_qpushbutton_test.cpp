/****************************************************************************
** Meta object code from reading C++ file 'vs_qpushbutton_test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../vs_qpushbutton_test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vs_qpushbutton_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VS_QPushButton_Test_t {
    QByteArrayData data[3];
    char stringdata[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VS_QPushButton_Test_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VS_QPushButton_Test_t qt_meta_stringdata_VS_QPushButton_Test = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 16),
QT_MOC_LITERAL(2, 37, 0)
    },
    "VS_QPushButton_Test\0PushBtn01Clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VS_QPushButton_Test[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void VS_QPushButton_Test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VS_QPushButton_Test *_t = static_cast<VS_QPushButton_Test *>(_o);
        switch (_id) {
        case 0: _t->PushBtn01Clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VS_QPushButton_Test::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VS_QPushButton_Test.data,
      qt_meta_data_VS_QPushButton_Test,  qt_static_metacall, 0, 0}
};


const QMetaObject *VS_QPushButton_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VS_QPushButton_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VS_QPushButton_Test.stringdata))
        return static_cast<void*>(const_cast< VS_QPushButton_Test*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VS_QPushButton_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
