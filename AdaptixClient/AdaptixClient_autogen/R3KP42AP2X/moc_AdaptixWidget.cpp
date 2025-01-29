/****************************************************************************
** Meta object code from reading C++ file 'AdaptixWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Headers/UI/Widgets/AdaptixWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdaptixWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
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
struct qt_meta_tag_ZN13AdaptixWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13AdaptixWidgetE = QtMocHelpers::stringData(
    "AdaptixWidget",
    "SyncedSignal",
    "",
    "ChannelClose",
    "DataHandler",
    "data",
    "OnSynced",
    "SetSessionsTableUI",
    "SetTasksUI",
    "LoadLogsUI",
    "LoadListenersUI",
    "LoadDownloadsUI",
    "LoadTasksOutput",
    "OnReconnect",
    "LoadConsoleUI",
    "AgentId",
    "LoadFileBrowserUI",
    "LoadProcessBrowserUI"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13AdaptixWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   99,    2, 0x0a,    2 /* Public */,
       4,    1,  100,    2, 0x0a,    3 /* Public */,
       6,    0,  103,    2, 0x0a,    5 /* Public */,
       7,    0,  104,    2, 0x0a,    6 /* Public */,
       8,    0,  105,    2, 0x0a,    7 /* Public */,
       9,    0,  106,    2, 0x0a,    8 /* Public */,
      10,    0,  107,    2, 0x0a,    9 /* Public */,
      11,    0,  108,    2, 0x0a,   10 /* Public */,
      12,    0,  109,    2, 0x0a,   11 /* Public */,
      13,    0,  110,    2, 0x0a,   12 /* Public */,
      14,    1,  111,    2, 0x0a,   13 /* Public */,
      16,    1,  114,    2, 0x0a,   15 /* Public */,
      17,    1,  117,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdaptixWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN13AdaptixWidgetE.offsetsAndSizes,
    qt_meta_data_ZN13AdaptixWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13AdaptixWidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdaptixWidget, std::true_type>,
        // method 'SyncedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ChannelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DataHandler'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'OnSynced'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetSessionsTableUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetTasksUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadLogsUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadListenersUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadDownloadsUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadTasksOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnReconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadConsoleUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'LoadFileBrowserUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'LoadProcessBrowserUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void AdaptixWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AdaptixWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->SyncedSignal(); break;
        case 1: _t->ChannelClose(); break;
        case 2: _t->DataHandler((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->OnSynced(); break;
        case 4: _t->SetSessionsTableUI(); break;
        case 5: _t->SetTasksUI(); break;
        case 6: _t->LoadLogsUI(); break;
        case 7: _t->LoadListenersUI(); break;
        case 8: _t->LoadDownloadsUI(); break;
        case 9: _t->LoadTasksOutput(); break;
        case 10: _t->OnReconnect(); break;
        case 11: _t->LoadConsoleUI((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->LoadFileBrowserUI((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->LoadProcessBrowserUI((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (AdaptixWidget::*)();
            if (_q_method_type _q_method = &AdaptixWidget::SyncedSignal; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *AdaptixWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdaptixWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13AdaptixWidgetE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdaptixWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AdaptixWidget::SyncedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
