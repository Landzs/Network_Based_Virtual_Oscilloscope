/****************************************************************************
** Meta object code from reading C++ file 'vo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VO_t {
    QByteArrayData data[10];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VO_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VO_t qt_meta_stringdata_VO = {
    {
QT_MOC_LITERAL(0, 0, 2), // "VO"
QT_MOC_LITERAL(1, 3, 22), // "on_Connect_Btn_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "slotConnected"
QT_MOC_LITERAL(4, 41, 16), // "slotDisconnected"
QT_MOC_LITERAL(5, 58, 12), // "dataReceived"
QT_MOC_LITERAL(6, 71, 30), // "on_Display_Slider_valueChanged"
QT_MOC_LITERAL(7, 102, 5), // "value"
QT_MOC_LITERAL(8, 108, 19), // "on_Open_Btn_clicked"
QT_MOC_LITERAL(9, 128, 20) // "on_Close_Btn_clicked"

    },
    "VO\0on_Connect_Btn_clicked\0\0slotConnected\0"
    "slotDisconnected\0dataReceived\0"
    "on_Display_Slider_valueChanged\0value\0"
    "on_Open_Btn_clicked\0on_Close_Btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VO[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VO *_t = static_cast<VO *>(_o);
        switch (_id) {
        case 0: _t->on_Connect_Btn_clicked(); break;
        case 1: _t->slotConnected(); break;
        case 2: _t->slotDisconnected(); break;
        case 3: _t->dataReceived(); break;
        case 4: _t->on_Display_Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Open_Btn_clicked(); break;
        case 6: _t->on_Close_Btn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject VO::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VO.data,
      qt_meta_data_VO,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VO::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VO.stringdata))
        return static_cast<void*>(const_cast< VO*>(this));
    return QWidget::qt_metacast(_clname);
}

int VO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
