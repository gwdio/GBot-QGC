/****************************************************************************
** Meta object code from reading C++ file 'ADSBVehicleManagerSettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/ADSBVehicleManagerSettings.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ADSBVehicleManagerSettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS = QtMocHelpers::stringData(
    "ADSBVehicleManagerSettings",
    "adsbServerConnectEnabled",
    "Fact*",
    "adsbServerHostAddress",
    "adsbServerPort"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[27];
    char stringdata1[25];
    char stringdata2[6];
    char stringdata3[22];
    char stringdata4[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS_t qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "ADSBVehicleManagerSettings"
        QT_MOC_LITERAL(27, 24),  // "adsbServerConnectEnabled"
        QT_MOC_LITERAL(52, 5),  // "Fact*"
        QT_MOC_LITERAL(58, 21),  // "adsbServerHostAddress"
        QT_MOC_LITERAL(80, 14)   // "adsbServerPort"
    },
    "ADSBVehicleManagerSettings",
    "adsbServerConnectEnabled",
    "Fact*",
    "adsbServerHostAddress",
    "adsbServerPort"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSADSBVehicleManagerSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ADSBVehicleManagerSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSADSBVehicleManagerSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS_t,
        // property 'adsbServerConnectEnabled'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'adsbServerHostAddress'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'adsbServerPort'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ADSBVehicleManagerSettings, std::true_type>
    >,
    nullptr
} };

void ADSBVehicleManagerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ADSBVehicleManagerSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->adsbServerConnectEnabled(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->adsbServerHostAddress(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->adsbServerPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *ADSBVehicleManagerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADSBVehicleManagerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSADSBVehicleManagerSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int ADSBVehicleManagerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
