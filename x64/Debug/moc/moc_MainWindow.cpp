/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MainWindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ui__MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ui__MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ui__MainWindow_t qt_meta_stringdata_ui__MainWindow = {
    {
QT_MOC_LITERAL(0, 14), // "ui::MainWindow"
QT_MOC_LITERAL(15, 10), // "addMapItem"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 25), // "ui::EditWidget::BtnStatus"
QT_MOC_LITERAL(53, 13), // "deleteMapItem"
QT_MOC_LITERAL(67, 13), // "renameMapItem"
QT_MOC_LITERAL(81, 11), // "addWordItem"
QT_MOC_LITERAL(93, 14), // "deleteWordItem"
QT_MOC_LITERAL(108, 14), // "renameWordItem"
QT_MOC_LITERAL(123, 18), // "createAddMapDialog"
QT_MOC_LITERAL(142, 21), // "createDeleteMapDialog"
QT_MOC_LITERAL(164, 21), // "createRenameMapDialog"
QT_MOC_LITERAL(186, 19), // "createAddWordDialog"
QT_MOC_LITERAL(206, 22), // "createDeleteWordDialog"
QT_MOC_LITERAL(229, 22), // "createRenameWordDialog"
QT_MOC_LITERAL(252, 19) // "setCurrentIndexWord"

    },
    "ui::MainWindow\0addMapItem\0\0"
    "ui::EditWidget::BtnStatus\0deleteMapItem\0"
    "renameMapItem\0addWordItem\0deleteWordItem\0"
    "renameWordItem\0createAddMapDialog\0"
    "createDeleteMapDialog\0createRenameMapDialog\0"
    "createAddWordDialog\0createDeleteWordDialog\0"
    "createRenameWordDialog\0setCurrentIndexWord"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ui__MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   92,    2, 0x0a,    1 /* Public */,
       4,    2,   97,    2, 0x0a,    4 /* Public */,
       5,    2,  102,    2, 0x0a,    7 /* Public */,
       6,    2,  107,    2, 0x0a,   10 /* Public */,
       7,    2,  112,    2, 0x0a,   13 /* Public */,
       8,    2,  117,    2, 0x0a,   16 /* Public */,
       9,    0,  122,    2, 0x0a,   19 /* Public */,
      10,    0,  123,    2, 0x0a,   20 /* Public */,
      11,    0,  124,    2, 0x0a,   21 /* Public */,
      12,    0,  125,    2, 0x0a,   22 /* Public */,
      13,    0,  126,    2, 0x0a,   23 /* Public */,
      14,    0,  127,    2, 0x0a,   24 /* Public */,
      15,    1,  128,    2, 0x0a,   25 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addMapItem((*reinterpret_cast< std::add_pointer_t<ui::EditWidget::BtnStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->deleteMapItem((*reinterpret_cast< std::add_pointer_t<ui::EditWidget::BtnStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->renameMapItem((*reinterpret_cast< std::add_pointer_t<ui::EditWidget::BtnStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->addWordItem((*reinterpret_cast< std::add_pointer_t<ui::EditWidget::BtnStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->deleteWordItem((*reinterpret_cast< std::add_pointer_t<ui::EditWidget::BtnStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->renameWordItem((*reinterpret_cast< std::add_pointer_t<ui::EditWidget::BtnStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->createAddMapDialog(); break;
        case 7: _t->createDeleteMapDialog(); break;
        case 8: _t->createRenameMapDialog(); break;
        case 9: _t->createAddWordDialog(); break;
        case 10: _t->createDeleteWordDialog(); break;
        case 11: _t->createRenameWordDialog(); break;
        case 12: _t->setCurrentIndexWord((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ui::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ui__MainWindow.offsetsAndSize,
    qt_meta_data_ui__MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ui__MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ui::EditWidget::BtnStatus, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ui::EditWidget::BtnStatus, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ui::EditWidget::BtnStatus, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ui::EditWidget::BtnStatus, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ui::EditWidget::BtnStatus, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ui::EditWidget::BtnStatus, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *ui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ui__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
