/****************************************************************************
** Meta object code from reading C++ file 'CorridorScanPlanCreator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CorridorScanPlanCreator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CorridorScanPlanCreator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS = QtMocHelpers::stringData(
    "CorridorScanPlanCreator",
    "createPlan",
    "",
    "QGeoCoordinate",
    "mapCenterCoord"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[24];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS_t qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "CorridorScanPlanCreator"
        QT_MOC_LITERAL(24, 10),  // "createPlan"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(51, 14)   // "mapCenterCoord"
    },
    "CorridorScanPlanCreator",
    "createPlan",
    "",
    "QGeoCoordinate",
    "mapCenterCoord"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCorridorScanPlanCreatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x02,    1 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject CorridorScanPlanCreator::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanCreator::staticMetaObject>(),
    qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCorridorScanPlanCreatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CorridorScanPlanCreator, std::true_type>,
        // method 'createPlan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>
    >,
    nullptr
} };

void CorridorScanPlanCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CorridorScanPlanCreator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createPlan((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    }
}

const QMetaObject *CorridorScanPlanCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorridorScanPlanCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCorridorScanPlanCreatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PlanCreator::qt_metacast(_clname);
}

int CorridorScanPlanCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanCreator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP