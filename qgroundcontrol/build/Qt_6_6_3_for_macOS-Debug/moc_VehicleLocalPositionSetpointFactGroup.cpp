/****************************************************************************
** Meta object code from reading C++ file 'VehicleLocalPositionSetpointFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/FactGroups/VehicleLocalPositionSetpointFactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleLocalPositionSetpointFactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS = QtMocHelpers::stringData(
    "VehicleLocalPositionSetpointFactGroup",
    "x",
    "Fact*",
    "y",
    "z",
    "vx",
    "vy",
    "vz"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[38];
    char stringdata1[2];
    char stringdata2[6];
    char stringdata3[2];
    char stringdata4[2];
    char stringdata5[3];
    char stringdata6[3];
    char stringdata7[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS_t qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 37),  // "VehicleLocalPositionSetpointF..."
        QT_MOC_LITERAL(38, 1),  // "x"
        QT_MOC_LITERAL(40, 5),  // "Fact*"
        QT_MOC_LITERAL(46, 1),  // "y"
        QT_MOC_LITERAL(48, 1),  // "z"
        QT_MOC_LITERAL(50, 2),  // "vx"
        QT_MOC_LITERAL(53, 2),  // "vy"
        QT_MOC_LITERAL(56, 2)   // "vz"
    },
    "VehicleLocalPositionSetpointFactGroup",
    "x",
    "Fact*",
    "y",
    "z",
    "vx",
    "vy",
    "vz"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleLocalPositionSetpointFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS_t,
        // property 'x'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'z'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'vx'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'vy'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'vz'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleLocalPositionSetpointFactGroup, std::true_type>
    >,
    nullptr
} };

void VehicleLocalPositionSetpointFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleLocalPositionSetpointFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->vx(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->vy(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->vz(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *VehicleLocalPositionSetpointFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleLocalPositionSetpointFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleLocalPositionSetpointFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleLocalPositionSetpointFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
