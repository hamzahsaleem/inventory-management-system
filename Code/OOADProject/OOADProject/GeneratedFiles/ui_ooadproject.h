/********************************************************************************
** Form generated from reading UI file 'ooadproject.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OOADPROJECT_H
#define UI_OOADPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OOADProjectClass
{
public:
    QWidget *centralWidget;
    QLabel *label_5;
    QTextEdit *CustomerName;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *CustomerLogIn;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *AdminlogIn;
    QTextEdit *CustomerCnic;
    QTextEdit *AdminName;
    QLabel *label_7;
    QLineEdit *AdminPassword;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OOADProjectClass)
    {
        if (OOADProjectClass->objectName().isEmpty())
            OOADProjectClass->setObjectName(QStringLiteral("OOADProjectClass"));
        OOADProjectClass->resize(857, 796);
        centralWidget = new QWidget(OOADProjectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 500, 131, 51));
        CustomerName = new QTextEdit(centralWidget);
        CustomerName->setObjectName(QStringLiteral("CustomerName"));
        CustomerName->setGeometry(QRect(360, 510, 211, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 180, 131, 51));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 260, 111, 31));
        CustomerLogIn = new QPushButton(centralWidget);
        CustomerLogIn->setObjectName(QStringLiteral("CustomerLogIn"));
        CustomerLogIn->setGeometry(QRect(540, 650, 101, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 570, 131, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 90, 251, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 410, 251, 41));
        AdminlogIn = new QPushButton(centralWidget);
        AdminlogIn->setObjectName(QStringLiteral("AdminlogIn"));
        AdminlogIn->setGeometry(QRect(550, 330, 91, 23));
        CustomerCnic = new QTextEdit(centralWidget);
        CustomerCnic->setObjectName(QStringLiteral("CustomerCnic"));
        CustomerCnic->setGeometry(QRect(360, 580, 211, 31));
        AdminName = new QTextEdit(centralWidget);
        AdminName->setObjectName(QStringLiteral("AdminName"));
        AdminName->setGeometry(QRect(370, 190, 211, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 20, 311, 51));
        AdminPassword = new QLineEdit(centralWidget);
        AdminPassword->setObjectName(QStringLiteral("AdminPassword"));
        AdminPassword->setGeometry(QRect(370, 260, 211, 31));
        AdminPassword->setEchoMode(QLineEdit::Password);
        OOADProjectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OOADProjectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 857, 21));
        OOADProjectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OOADProjectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OOADProjectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OOADProjectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OOADProjectClass->setStatusBar(statusBar);

        retranslateUi(OOADProjectClass);
        QObject::connect(AdminlogIn, SIGNAL(clicked()), OOADProjectClass, SLOT(AdminlogIn()));
        QObject::connect(CustomerLogIn, SIGNAL(clicked()), OOADProjectClass, SLOT(CustomerLogIn()));

        QMetaObject::connectSlotsByName(OOADProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *OOADProjectClass)
    {
        OOADProjectClass->setWindowTitle(QApplication::translate("OOADProjectClass", "OOADProject", 0));
        label_5->setText(QApplication::translate("OOADProjectClass", "<html><head/><body><p><span style=\" font-size:14pt;\">Name</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("OOADProjectClass", "<html><head/><body><p><span style=\" font-size:14pt;\">Username</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("OOADProjectClass", "<html><head/><body><p><span style=\" font-size:16pt;\">Password</span></p></body></html>", 0));
        CustomerLogIn->setText(QApplication::translate("OOADProjectClass", "LOG IN", 0));
        label_6->setText(QApplication::translate("OOADProjectClass", "<html><head/><body><p><span style=\" font-size:14pt;\">CNIC</span></p></body></html>", 0));
        label->setText(QApplication::translate("OOADProjectClass", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Administrator log In:</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("OOADProjectClass", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Customer log In:</span></p></body></html>", 0));
        AdminlogIn->setText(QApplication::translate("OOADProjectClass", "LOG IN", 0));
        CustomerCnic->setPlaceholderText(QApplication::translate("OOADProjectClass", "*****-*****-**-*", 0));
        label_7->setText(QApplication::translate("OOADProjectClass", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aaff;\">Welcome to login page</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class OOADProjectClass: public Ui_OOADProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OOADPROJECT_H
