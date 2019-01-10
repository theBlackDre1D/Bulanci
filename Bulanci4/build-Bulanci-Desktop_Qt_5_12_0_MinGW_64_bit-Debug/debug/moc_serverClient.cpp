/****************************************************************************
** Meta object code from reading C++ file 'serverClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Bulanci/serverClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerClient_t {
    QByteArrayData data[13];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerClient_t qt_meta_stringdata_ServerClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ServerClient"
QT_MOC_LITERAL(1, 13, 5), // "error"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 23), // "QTcpSocket::SocketError"
QT_MOC_LITERAL(4, 44, 6), // "moveUp"
QT_MOC_LITERAL(5, 51, 13), // "ServerClient*"
QT_MOC_LITERAL(6, 65, 8), // "moveDown"
QT_MOC_LITERAL(7, 74, 8), // "moveLeft"
QT_MOC_LITERAL(8, 83, 9), // "moveRight"
QT_MOC_LITERAL(9, 93, 5), // "shoot"
QT_MOC_LITERAL(10, 99, 11), // "sendMessage"
QT_MOC_LITERAL(11, 111, 7), // "message"
QT_MOC_LITERAL(12, 119, 9) // "readyRead"

    },
    "ServerClient\0error\0\0QTcpSocket::SocketError\0"
    "moveUp\0ServerClient*\0moveDown\0moveLeft\0"
    "moveRight\0shoot\0sendMessage\0message\0"
    "readyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerClient[] = {

 // content:
       8,       // revision
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
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       7,    1,   63,    2, 0x06 /* Public */,
       8,    1,   66,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   72,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,

       0        // eod
};

void ServerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerClient *_t = static_cast<ServerClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->moveUp((*reinterpret_cast< ServerClient*(*)>(_a[1]))); break;
        case 2: _t->moveDown((*reinterpret_cast< ServerClient*(*)>(_a[1]))); break;
        case 3: _t->moveLeft((*reinterpret_cast< ServerClient*(*)>(_a[1]))); break;
        case 4: _t->moveRight((*reinterpret_cast< ServerClient*(*)>(_a[1]))); break;
        case 5: _t->shoot((*reinterpret_cast< ServerClient*(*)>(_a[1]))); break;
        case 6: _t->sendMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->readyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerClient* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerClient* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerClient* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerClient* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerClient* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerClient::*)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerClient::error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerClient::*)(ServerClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerClient::moveUp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerClient::*)(ServerClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerClient::moveDown)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerClient::*)(ServerClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerClient::moveLeft)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ServerClient::*)(ServerClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerClient::moveRight)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ServerClient::*)(ServerClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerClient::shoot)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerClient::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_ServerClient.data,
    qt_meta_data_ServerClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerClient.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ServerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ServerClient::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerClient::moveUp(ServerClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServerClient::moveDown(ServerClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServerClient::moveLeft(ServerClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ServerClient::moveRight(ServerClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ServerClient::shoot(ServerClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
