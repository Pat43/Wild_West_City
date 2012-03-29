/****************************************************************************
** Meta object code from reading C++ file 'WidgetOGL.h'
**
** Created: Tue 14. Dec 11:52:45 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../WidgetOGL.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetOGL.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWidgetOGL[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   11,   11,   11, 0x0a,
      52,   12,   11,   11, 0x0a,
      80,   74,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWidgetOGL[] = {
    "CWidgetOGL\0\0numJeu\0LancerMiniJeu(int)\0"
    "timeOutSlot()\0CommencerMiniJeu(int)\0"
    "temps\0FinirMiniJeu(int)\0"
};

const QMetaObject CWidgetOGL::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_CWidgetOGL,
      qt_meta_data_CWidgetOGL, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWidgetOGL::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWidgetOGL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWidgetOGL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWidgetOGL))
        return static_cast<void*>(const_cast< CWidgetOGL*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int CWidgetOGL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: LancerMiniJeu((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: timeOutSlot(); break;
        case 2: CommencerMiniJeu((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: FinirMiniJeu((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CWidgetOGL::LancerMiniJeu(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
