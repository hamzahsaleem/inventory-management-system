/********************************************************************************
** Form generated from reading UI file 'customercheckout.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCHECKOUT_H
#define UI_CUSTOMERCHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerCheckout
{
public:
    QPushButton *pushButton;
    QPushButton *CusmtomerLogout;

    void setupUi(QWidget *CustomerCheckout)
    {
        if (CustomerCheckout->objectName().isEmpty())
            CustomerCheckout->setObjectName(QStringLiteral("CustomerCheckout"));
        CustomerCheckout->resize(849, 783);
        pushButton = new QPushButton(CustomerCheckout);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(540, 260, 151, 71));
        CusmtomerLogout = new QPushButton(CustomerCheckout);
        CusmtomerLogout->setObjectName(QStringLiteral("CusmtomerLogout"));
        CusmtomerLogout->setGeometry(QRect(260, 260, 151, 71));

        retranslateUi(CustomerCheckout);
        QObject::connect(CusmtomerLogout, SIGNAL(clicked()), CustomerCheckout, SLOT(LogOutPage()));
        QObject::connect(pushButton, SIGNAL(clicked()), CustomerCheckout, SLOT(Customerwelcomepage()));

        QMetaObject::connectSlotsByName(CustomerCheckout);
    } // setupUi

    void retranslateUi(QWidget *CustomerCheckout)
    {
        CustomerCheckout->setWindowTitle(QApplication::translate("CustomerCheckout", "CustomerCheckout", 0));
        pushButton->setText(QApplication::translate("CustomerCheckout", "Buy More Items", 0));
        CusmtomerLogout->setText(QApplication::translate("CustomerCheckout", "Logout", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerCheckout: public Ui_CustomerCheckout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCHECKOUT_H
