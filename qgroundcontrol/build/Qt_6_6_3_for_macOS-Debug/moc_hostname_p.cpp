/****************************************************************************
** Meta object code from reading C++ file 'hostname_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/qmdnsengine/src/src/hostname_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hostname_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS = QtMocHelpers::stringData(
    "QMdnsEngine::HostnamePrivate",
    "onMessageReceived",
    "",
    "Message",
    "message",
    "onRegistrationTimeout",
    "onRebroadcastTimeout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[29];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[22];
    char stringdata6[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS_t qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "QMdnsEngine::HostnamePrivate"
        QT_MOC_LITERAL(29, 17),  // "onMessageReceived"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 7),  // "Message"
        QT_MOC_LITERAL(56, 7),  // "message"
        QT_MOC_LITERAL(64, 21),  // "onRegistrationTimeout"
        QT_MOC_LITERAL(86, 20)   // "onRebroadcastTimeout"
    },
    "QMdnsEngine::HostnamePrivate",
    "onMessageReceived",
    "",
    "Message",
    "message",
    "onRegistrationTimeout",
    "onRebroadcastTimeout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       5,    0,   35,    2, 0x08,    3 /* Private */,
       6,    0,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMdnsEngine::HostnamePrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HostnamePrivate, std::true_type>,
        // method 'onMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Message &, std::false_type>,
        // method 'onRegistrationTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRebroadcastTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMdnsEngine::HostnamePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HostnamePrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMessageReceived((*reinterpret_cast< std::add_pointer_t<Message>>(_a[1]))); break;
        case 1: _t->onRegistrationTimeout(); break;
        case 2: _t->onRebroadcastTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject *QMdnsEngine::HostnamePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMdnsEngine::HostnamePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMdnsEngineSCOPEHostnamePrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMdnsEngine::HostnamePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP