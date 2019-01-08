/****************************************************************************
** Meta object code from reading C++ file 'connectionmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Bulanci/connectionmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectionManager_t {
    QByteArrayData data[14];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectionManager_t qt_meta_stringdata_ConnectionManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ConnectionManager"
QT_MOC_LITERAL(1, 18, 16), // "newHostConnected"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "qintptr"
QT_MOC_LITERAL(4, 44, 2), // "ID"
QT_MOC_LITERAL(5, 47, 23), // "const SingleConnection*"
QT_MOC_LITERAL(6, 71, 6), // "client"
QT_MOC_LITERAL(7, 78, 11), // "hostRemoved"
QT_MOC_LITERAL(8, 90, 13), // "onStartServer"
QT_MOC_LITERAL(9, 104, 12), // "onStopServer"
QT_MOC_LITERAL(10, 117, 12), // "onRemoveHost"
QT_MOC_LITERAL(11, 130, 14), // "hostDescriptor"
QT_MOC_LITERAL(12, 145, 18), // "incomingConnection"
QT_MOC_LITERAL(13, 164, 16) // "socketDescriptor"

    },
    "ConnectionManager\0newHostConnected\0\0"
    "qintptr\0ID\0const SingleConnection*\0"
    "client\0hostRemoved\0onStartServer\0"
    "onStopServer\0onRemoveHost\0hostDescriptor\0"
    "incomingConnection\0socketDescriptor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       7,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x0a /* Public */,
      10,    1,   54,    2, 0x0a /* Public */,
      12,    1,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3,   13,

       0        // eod
};

void ConnectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionManager *_t = static_cast<ConnectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newHostConnected((*reinterpret_cast< const qintptr(*)>(_a[1])),(*reinterpret_cast< const SingleConnection*(*)>(_a[2]))); break;
        case 1: _t->hostRemoved((*reinterpret_cast< const qintptr(*)>(_a[1]))); break;
        case 2: _t->onStartServer(); break;
        case 3: _t->onStopServer(); break;
        case 4: _t->onRemoveHost((*reinterpret_cast< const qintptr(*)>(_a[1]))); break;
        case 5: _t->incomingConnection((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConnectionManager::*)(const qintptr , const SingleConnection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::newHostConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(const qintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::hostRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConnectionManager::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_ConnectionManager.data,
    qt_meta_data_ConnectionManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConnectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionManager.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int ConnectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ConnectionManager::newHostConnected(const qintptr _t1, const SingleConnection * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectionManager::hostRemoved(const qintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
