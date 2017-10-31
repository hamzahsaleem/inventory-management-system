/****************************************************************************
** Meta object code from reading C++ file 'adminportal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../adminportal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminportal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminPortal_t {
    QByteArrayData data[13];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminPortal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminPortal_t qt_meta_stringdata_AdminPortal = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminPortal"
QT_MOC_LITERAL(1, 12, 14), // "ModifyitemPage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "modifystaffPage"
QT_MOC_LITERAL(4, 44, 17), // "PromotememberPage"
QT_MOC_LITERAL(5, 62, 18), // "ModifycategoryPage"
QT_MOC_LITERAL(6, 81, 18), // "gensalesreportPage"
QT_MOC_LITERAL(7, 100, 19), // "genProfitReportPage"
QT_MOC_LITERAL(8, 120, 13), // "ViewstockPage"
QT_MOC_LITERAL(9, 134, 10), // "LogoutPage"
QT_MOC_LITERAL(10, 145, 7), // "setData"
QT_MOC_LITERAL(11, 153, 6), // "Admin*"
QT_MOC_LITERAL(12, 160, 17) // "vector<Customer*>"

    },
    "AdminPortal\0ModifyitemPage\0\0modifystaffPage\0"
    "PromotememberPage\0ModifycategoryPage\0"
    "gensalesreportPage\0genProfitReportPage\0"
    "ViewstockPage\0LogoutPage\0setData\0"
    "Admin*\0vector<Customer*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminPortal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    2,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 12,    2,    2,

       0        // eod
};

void AdminPortal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminPortal *_t = static_cast<AdminPortal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ModifyitemPage(); break;
        case 1: _t->modifystaffPage(); break;
        case 2: _t->PromotememberPage(); break;
        case 3: _t->ModifycategoryPage(); break;
        case 4: _t->gensalesreportPage(); break;
        case 5: _t->genProfitReportPage(); break;
        case 6: _t->ViewstockPage(); break;
        case 7: _t->LogoutPage(); break;
        case 8: _t->setData((*reinterpret_cast< Admin*(*)>(_a[1])),(*reinterpret_cast< vector<Customer*>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AdminPortal::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminPortal.data,
      qt_meta_data_AdminPortal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdminPortal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminPortal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdminPortal.stringdata0))
        return static_cast<void*>(const_cast< AdminPortal*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdminPortal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
