/********************************************************************************
** Form generated from reading UI file 'blah.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLAH_H
#define UI_BLAH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Blah
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Blah)
    {
        if (Blah->objectName().isEmpty())
            Blah->setObjectName(QStringLiteral("Blah"));
        Blah->resize(400, 300);
        menuBar = new QMenuBar(Blah);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Blah->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Blah);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Blah->addToolBar(mainToolBar);
        centralWidget = new QWidget(Blah);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Blah->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Blah);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Blah->setStatusBar(statusBar);

        retranslateUi(Blah);

        QMetaObject::connectSlotsByName(Blah);
    } // setupUi

    void retranslateUi(QMainWindow *Blah)
    {
        Blah->setWindowTitle(QApplication::translate("Blah", "Blah", 0));
    } // retranslateUi

};

namespace Ui {
    class Blah: public Ui_Blah {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLAH_H
