/****************************************************************************
** Meta object code from reading C++ file 'stuop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../College/Preview/THUnder-class-master/THUnderClient/controller/stuop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stuop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Stuop_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Stuop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Stuop_t qt_meta_stringdata_Stuop = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Stuop"
QT_MOC_LITERAL(1, 6, 7), // "ansprob"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 8), // "is_muted"
QT_MOC_LITERAL(4, 24, 8), // "pullprob"
QT_MOC_LITERAL(5, 33, 9), // "new_frame"
QT_MOC_LITERAL(6, 43, 13), // "get_attention"
QT_MOC_LITERAL(7, 57, 5), // "bool*"
QT_MOC_LITERAL(8, 63, 10), // "class_over"
QT_MOC_LITERAL(9, 74, 18), // "get_audiodata_sent"
QT_MOC_LITERAL(10, 93, 14) // "send_attention"

    },
    "Stuop\0ansprob\0\0is_muted\0pullprob\0"
    "new_frame\0get_attention\0bool*\0class_over\0"
    "get_audiodata_sent\0send_attention"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stuop[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    0,   60,    2, 0x06 /* Public */,
       5,    1,   61,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,
       8,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Stuop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Stuop *_t = static_cast<Stuop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ansprob((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->is_muted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->pullprob(); break;
        case 3: _t->new_frame((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->get_attention((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 5: _t->class_over(); break;
        case 6: _t->get_audiodata_sent(); break;
        case 7: _t->send_attention(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Stuop::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stuop::ansprob)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Stuop::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stuop::is_muted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Stuop::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stuop::pullprob)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Stuop::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stuop::new_frame)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Stuop::*_t)(bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stuop::get_attention)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Stuop::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stuop::class_over)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Stuop::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Stuop.data,
      qt_meta_data_Stuop,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Stuop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stuop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Stuop.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Stuop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Stuop::ansprob(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Stuop::is_muted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Stuop::pullprob()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Stuop::new_frame(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Stuop::get_attention(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Stuop::class_over()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
