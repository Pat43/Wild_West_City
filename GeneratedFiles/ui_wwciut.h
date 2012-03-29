/********************************************************************************
** Form generated from reading UI file 'wwciut.ui'
**
** Created: Fri 26. Nov 15:40:57 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWCIUT_H
#define UI_WWCIUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WWCIUTClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WWCIUTClass)
    {
        if (WWCIUTClass->objectName().isEmpty())
            WWCIUTClass->setObjectName(QString::fromUtf8("WWCIUTClass"));
        WWCIUTClass->resize(600, 400);
        menuBar = new QMenuBar(WWCIUTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        WWCIUTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WWCIUTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WWCIUTClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WWCIUTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        WWCIUTClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WWCIUTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WWCIUTClass->setStatusBar(statusBar);

        retranslateUi(WWCIUTClass);

        QMetaObject::connectSlotsByName(WWCIUTClass);
    } // setupUi

    void retranslateUi(QMainWindow *WWCIUTClass)
    {
        WWCIUTClass->setWindowTitle(QApplication::translate("WWCIUTClass", "WWCIUT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WWCIUTClass: public Ui_WWCIUTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWCIUT_H
