/********************************************************************************
** Form generated from reading UI file 'customerwelcomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWELCOMEPAGE_H
#define UI_CUSTOMERWELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWelcomePage
{
public:
    QPushButton *BuyItems;
    QPushButton *ViewItems;
    QLabel *label_3;
    QPushButton *Logout;

    void setupUi(QWidget *CustomerWelcomePage)
    {
        if (CustomerWelcomePage->objectName().isEmpty())
            CustomerWelcomePage->setObjectName(QStringLiteral("CustomerWelcomePage"));
        CustomerWelcomePage->resize(855, 788);
        BuyItems = new QPushButton(CustomerWelcomePage);
        BuyItems->setObjectName(QStringLiteral("BuyItems"));
        BuyItems->setGeometry(QRect(470, 360, 171, 61));
        ViewItems = new QPushButton(CustomerWelcomePage);
        ViewItems->setObjectName(QStringLiteral("ViewItems"));
        ViewItems->setGeometry(QRect(180, 360, 171, 61));
        label_3 = new QLabel(CustomerWelcomePage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 150, 321, 81));
        Logout = new QPushButton(CustomerWelcomePage);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(660, 560, 101, 61));

        retranslateUi(CustomerWelcomePage);
        QObject::connect(ViewItems, SIGNAL(clicked()), CustomerWelcomePage, SLOT(CustomerviewItemsPage()));
        QObject::connect(BuyItems, SIGNAL(clicked()), CustomerWelcomePage, SLOT(customercartPage()));
        QObject::connect(Logout, SIGNAL(clicked()), CustomerWelcomePage, SLOT(LogoutPage()));

        QMetaObject::connectSlotsByName(CustomerWelcomePage);
    } // setupUi

    void retranslateUi(QWidget *CustomerWelcomePage)
    {
        CustomerWelcomePage->setWindowTitle(QApplication::translate("CustomerWelcomePage", "CustomerWelcomePage", 0));
        BuyItems->setText(QApplication::translate("CustomerWelcomePage", "Buy Items", 0));
        ViewItems->setText(QApplication::translate("CustomerWelcomePage", "View Items", 0));
        label_3->setText(QApplication::translate("CustomerWelcomePage", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#00aaff;\">Select your desired option </span></p></body></html>", 0));
        Logout->setText(QApplication::translate("CustomerWelcomePage", "Logout", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerWelcomePage: public Ui_CustomerWelcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWELCOMEPAGE_H
