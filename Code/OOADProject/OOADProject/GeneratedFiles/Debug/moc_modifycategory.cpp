/****************************************************************************
** Meta object code from reading C++ file 'modifycategory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../modifycategory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifycategory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyCategory_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModifyCategory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModifyCategory_t qt_meta_stringdata_ModifyCategory = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ModifyCategory"
QT_MOC_LITERAL(1, 15, 10), // "Backbutton"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "AddCategory"
QT_MOC_LITERAL(4, 39, 14), // "DeleteCategory"
QT_MOC_LITERAL(5, 54, 21), // "OfferCategoryDiscount"
QT_MOC_LITERAL(6, 76, 7), // "setData"
QT_MOC_LITERAL(7, 84, 6) // "Admin*"

    },
    "ModifyCategory\0Backbutton\0\0AddCategory\0"
    "DeleteCategory\0OfferCategoryDiscount\0"
    "setData\0Admin*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyCategory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void ModifyCategory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyCategory *_t = static_cast<ModifyCategory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Backbutton(); break;
        case 1: _t->AddCategory(); break;
        case 2: _t->DeleteCategory(); break;
        case 3: _t->OfferCategoryDiscount(); break;
        case 4: _t->setData((*reinterpret_cast< Admin*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ModifyCategory::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModifyCategory.data,
      qt_meta_data_ModifyCategory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModifyCategory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyCategory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyCategory.stringdata0))
        return static_cast<void*>(const_cast< ModifyCategory*>(this));
    return QWidget::qt_metacast(_clname);
}

int ModifyCategory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
