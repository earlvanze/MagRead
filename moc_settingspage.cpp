/****************************************************************************
** Meta object code from reading C++ file 'settingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsPage_t {
    QByteArrayData data[18];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsPage_t qt_meta_stringdata_SettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsPage"
QT_MOC_LITERAL(1, 13, 15), // "autoReorientSig"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "formatCredit_checked"
QT_MOC_LITERAL(4, 51, 5), // "state"
QT_MOC_LITERAL(5, 57, 19), // "formatAAMVA_checked"
QT_MOC_LITERAL(6, 77, 20), // "autoReorient_checked"
QT_MOC_LITERAL(7, 98, 18), // "audioDeviceChanged"
QT_MOC_LITERAL(8, 117, 11), // "audioDevice"
QT_MOC_LITERAL(9, 129, 14), // "timeOutChanged"
QT_MOC_LITERAL(10, 144, 5), // "value"
QT_MOC_LITERAL(11, 150, 19), // "decodeMethodChanged"
QT_MOC_LITERAL(12, 170, 7), // "checked"
QT_MOC_LITERAL(13, 178, 11), // "normChanged"
QT_MOC_LITERAL(14, 190, 14), // "silenceChanged"
QT_MOC_LITERAL(15, 205, 11), // "normChecked"
QT_MOC_LITERAL(16, 217, 8), // "resetAll"
QT_MOC_LITERAL(17, 226, 9) // "updateGui"

    },
    "SettingsPage\0autoReorientSig\0\0"
    "formatCredit_checked\0state\0"
    "formatAAMVA_checked\0autoReorient_checked\0"
    "audioDeviceChanged\0audioDevice\0"
    "timeOutChanged\0value\0decodeMethodChanged\0"
    "checked\0normChanged\0silenceChanged\0"
    "normChecked\0resetAll\0updateGui"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   77,    2, 0x08 /* Private */,
       5,    1,   80,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       7,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,
      16,    1,  104,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

void SettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsPage *_t = static_cast<SettingsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autoReorientSig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->formatCredit_checked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->formatAAMVA_checked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->autoReorient_checked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->audioDeviceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->timeOutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->decodeMethodChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->normChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->silenceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->normChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->resetAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->resetAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingsPage::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsPage::autoReorientSig)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsPage::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_SettingsPage.data,
      qt_meta_data_SettingsPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsPage.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int SettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SettingsPage::autoReorientSig(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
