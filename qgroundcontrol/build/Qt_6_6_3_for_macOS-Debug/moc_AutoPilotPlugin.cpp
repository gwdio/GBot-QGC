/****************************************************************************
** Meta object code from reading C++ file 'AutoPilotPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/AutoPilotPlugin.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoPilotPlugin.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS = QtMocHelpers::stringData(
    "AutoPilotPlugin",
    "setupCompleteChanged",
    "",
    "setupComplete",
    "vehicleComponentsChanged",
    "_recalcSetupComplete",
    "prerequisiteSetup",
    "VehicleComponent*",
    "component",
    "vehicleComponents"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[25];
    char stringdata5[21];
    char stringdata6[18];
    char stringdata7[18];
    char stringdata8[10];
    char stringdata9[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS_t qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "AutoPilotPlugin"
        QT_MOC_LITERAL(16, 20),  // "setupCompleteChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 13),  // "setupComplete"
        QT_MOC_LITERAL(52, 24),  // "vehicleComponentsChanged"
        QT_MOC_LITERAL(77, 20),  // "_recalcSetupComplete"
        QT_MOC_LITERAL(98, 17),  // "prerequisiteSetup"
        QT_MOC_LITERAL(116, 17),  // "VehicleComponent*"
        QT_MOC_LITERAL(134, 9),  // "component"
        QT_MOC_LITERAL(144, 17)   // "vehicleComponents"
    },
    "AutoPilotPlugin",
    "setupCompleteChanged",
    "",
    "setupComplete",
    "vehicleComponentsChanged",
    "_recalcSetupComplete",
    "prerequisiteSetup",
    "VehicleComponent*",
    "component",
    "vehicleComponents"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoPilotPluginENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    3 /* Public */,
       4,    0,   41,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   42,    2, 0x08,    6 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   43,    2, 0x102,    7 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, QMetaType::QVariantList, 0x00015001, uint(1), 0,
       3, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoPilotPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoPilotPluginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS_t,
        // property 'vehicleComponents'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'setupComplete'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoPilotPlugin, std::true_type>,
        // method 'setupCompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'vehicleComponentsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcSetupComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prerequisiteSetup'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<VehicleComponent *, std::false_type>
    >,
    nullptr
} };

void AutoPilotPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoPilotPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setupCompleteChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->vehicleComponentsChanged(); break;
        case 2: _t->_recalcSetupComplete(); break;
        case 3: { QString _r = _t->prerequisiteSetup((*reinterpret_cast< std::add_pointer_t<VehicleComponent*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutoPilotPlugin::*)(bool );
            if (_t _q_method = &AutoPilotPlugin::setupCompleteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutoPilotPlugin::*)();
            if (_t _q_method = &AutoPilotPlugin::vehicleComponentsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AutoPilotPlugin *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->vehicleComponents(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->setupComplete(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *AutoPilotPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoPilotPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoPilotPluginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoPilotPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AutoPilotPlugin::setupCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoPilotPlugin::vehicleComponentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP