/********************************************************************************
** Form generated from reading UI file 'customersignup.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSIGNUP_H
#define UI_CUSTOMERSIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerSignUp
{
public:
    QTextEdit *SubmitInfoPhoneNo;
    QLabel *label;
    QLabel *label_3;
    QPushButton *CustomerSignUpSubmit;

    void setupUi(QWidget *CustomerSignUp)
    {
        if (CustomerSignUp->objectName().isEmpty())
            CustomerSignUp->setObjectName(QStringLiteral("CustomerSignUp"));
        CustomerSignUp->resize(854, 793);
        SubmitInfoPhoneNo = new QTextEdit(CustomerSignUp);
        SubmitInfoPhoneNo->setObjectName(QStringLiteral("SubmitInfoPhoneNo"));
        SubmitInfoPhoneNo->setGeometry(QRect(370, 330, 221, 41));
        label = new QLabel(CustomerSignUp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 340, 131, 31));
        label_3 = new QLabel(CustomerSignUp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 160, 491, 71));
        CustomerSignUpSubmit = new QPushButton(CustomerSignUp);
        CustomerSignUpSubmit->setObjectName(QStringLiteral("CustomerSignUpSubmit"));
        CustomerSignUpSubmit->setGeometry(QRect(500, 450, 91, 41));

        retranslateUi(CustomerSignUp);
        QObject::connect(CustomerSignUpSubmit, SIGNAL(clicked()), CustomerSignUp, SLOT(CustomerwelcomePage()));

        QMetaObject::connectSlotsByName(CustomerSignUp);
    } // setupUi

    void retranslateUi(QWidget *CustomerSignUp)
    {
        CustomerSignUp->setWindowTitle(QApplication::translate("CustomerSignUp", "CustomerSignUp", 0));
        label->setText(QApplication::translate("CustomerSignUp", "<html><head/><body><p><span style=\" font-size:14pt;\">Phone Number</span></p><p><br/></p></body></html>", 0));
        label_3->setText(QApplication::translate("CustomerSignUp", "<html><head/><body><p><span style=\" font-size:16pt;\">Hey Customer,Welcome to our inventory system<br/></span></p></body></html>", 0));
        CustomerSignUpSubmit->setText(QApplication::translate("CustomerSignUp", "Submit", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerSignUp: public Ui_CustomerSignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSIGNUP_H
