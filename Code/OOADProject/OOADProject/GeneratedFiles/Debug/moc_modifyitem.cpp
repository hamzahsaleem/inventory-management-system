/****************************************************************************
** Meta object code from reading C++ file 'modifyitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../modifyitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyItem_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModifyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModifyItem_t qt_meta_stringdata_ModifyItem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ModifyItem"
QT_MOC_LITERAL(1, 11, 10), // "Backbutton"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "AddItem"
QT_MOC_LITERAL(4, 31, 8), // "AddStock"
QT_MOC_LITERAL(5, 40, 10), // "DeleteItem"
QT_MOC_LITERAL(6, 51, 11), // "ChangePrice"
QT_MOC_LITERAL(7, 63, 13), // "OfferDiscount"
QT_MOC_LITERAL(8, 77, 7), // "setData"
QT_MOC_LITERAL(9, 85, 6) // "Admin*"

    },
    "ModifyItem\0Backbutton\0\0AddItem\0AddStock\0"
    "DeleteItem\0ChangePrice\0OfferDiscount\0"
    "setData\0Admin*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void ModifyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyItem *_t = static_cast<ModifyItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Backbutton(); break;
        case 1: _t->AddItem(); break;
        case 2: _t->AddStock(); break;
        case 3: _t->DeleteItem(); break;
        case 4: _t->ChangePrice(); break;
        case 5: _t->OfferDiscount(); break;
        case 6: _t->setData((*reinterpret_cast< Admin*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ModifyItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModifyItem.data,
      qt_meta_data_ModifyItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModifyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyItem.stringdata0))
        return static_cast<void*>(const_cast< ModifyItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int ModifyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
