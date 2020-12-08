/****************************************************************************
** Meta object code from reading C++ file 'stumainpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../College/Preview/THUnder-class-master/THUnderClient2/view/stumainpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stumainpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StuMainPage_t {
    QByteArrayData data[12];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StuMainPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StuMainPage_t qt_meta_stringdata_StuMainPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "StuMainPage"
QT_MOC_LITERAL(1, 12, 37), // "on_cb_audiodevice_currentInde..."
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "index"
QT_MOC_LITERAL(4, 57, 17), // "new_ansprobwindow"
QT_MOC_LITERAL(5, 75, 3), // "msg"
QT_MOC_LITERAL(6, 79, 13), // "get_attention"
QT_MOC_LITERAL(7, 93, 5), // "bool*"
QT_MOC_LITERAL(8, 99, 13), // "is_muted_text"
QT_MOC_LITERAL(9, 113, 11), // "prob_pulled"
QT_MOC_LITERAL(10, 125, 10), // "show_frame"
QT_MOC_LITERAL(11, 136, 10) // "class_over"

    },
    "StuMainPage\0on_cb_audiodevice_currentIndexChanged\0"
    "\0index\0new_ansprobwindow\0msg\0get_attention\0"
    "bool*\0is_muted_text\0prob_pulled\0"
    "show_frame\0class_over"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StuMainPage[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,

       0        // eod
};

void StuMainPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StuMainPage *_t = static_cast<StuMainPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cb_audiodevice_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->new_ansprobwindow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->get_attention((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 3: _t->is_muted_text((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->prob_pulled(); break;
        case 5: _t->show_frame((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->class_over(); break;
        default: ;
        }
    }
}

const QMetaObject StuMainPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StuMainPage.data,
      qt_meta_data_StuMainPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StuMainPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StuMainPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StuMainPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StuMainPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
