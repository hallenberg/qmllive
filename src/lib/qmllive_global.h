#ifndef QMLLIVELIB_GLOBAL_H
#define QMLLIVELIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QMLLIVE_LIBRARY)
#  define QMLLIVESHARED_EXPORT Q_DECL_EXPORT
#else
#  define QMLLIVESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QMLLIVELIB_GLOBAL_H
