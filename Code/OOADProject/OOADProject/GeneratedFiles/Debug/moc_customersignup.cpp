/****************************************************************************
** Meta object code from reading C++ file 'customersignup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../customersignup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customersignup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomerSignUp_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomerSignUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomerSignUp_t qt_meta_stringdata_CustomerSignUp = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CustomerSignUp"
QT_MOC_LITERAL(1, 15, 19), // "CustomerwelcomePage"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "setData"
QT_MOC_LITERAL(4, 44, 6), // "string"
QT_MOC_LITERAL(5, 51, 17), // "vector<Customer*>"
QT_MOC_LITERAL(6, 69, 17) // "vector<Category*>"

    },
    "CustomerSignUp\0CustomerwelcomePage\0\0"
    "setData\0string\0vector<Customer*>\0"
    "vector<Category*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomerSignUp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    4,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 6,    2,    2,    2,    2,

       0        // eod
};

void CustomerSignUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomerSignUp *_t = static_cast<CustomerSignUp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CustomerwelcomePage(); break;
        case 1: _t->setData((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< vector<Customer*>(*)>(_a[3])),(*reinterpret_cast< vector<Category*>(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject CustomerSignUp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CustomerSignUp.data,
      qt_meta_data_CustomerSignUp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomerSignUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomerSignUp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomerSignUp.stringdata0))
        return static_cast<void*>(const_cast< CustomerSignUp*>(this));
    return QWidget::qt_metacast(_clname);
}

int CustomerSignUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
