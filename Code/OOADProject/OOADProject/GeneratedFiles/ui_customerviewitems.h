/********************************************************************************
** Form generated from reading UI file 'customerviewitems.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERVIEWITEMS_H
#define UI_CUSTOMERVIEWITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerViewItems
{
public:
    QTextEdit *ViewByName_name;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QComboBox *ViewByCategory_list;
    QLabel *label;
    QPushButton *ViewByNameNext;
    QPushButton *ViewByCategoryNext;
    QLabel *label_7;
    QPushButton *BackButton;

    void setupUi(QWidget *CustomerViewItems)
    {
        if (CustomerViewItems->objectName().isEmpty())
            CustomerViewItems->setObjectName(QStringLiteral("CustomerViewItems"));
        CustomerViewItems->resize(855, 789);
        ViewByName_name = new QTextEdit(CustomerViewItems);
        ViewByName_name->setObjectName(QStringLiteral("ViewByName_name"));
        ViewByName_name->setGeometry(QRect(380, 140, 121, 31));
        label_3 = new QLabel(CustomerViewItems);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 370, 211, 41));
        label_4 = new QLabel(CustomerViewItems);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 140, 71, 31));
        label_6 = new QLabel(CustomerViewItems);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 420, 71, 31));
        ViewByCategory_list = new QComboBox(CustomerViewItems);
        ViewByCategory_list->setObjectName(QStringLiteral("ViewByCategory_list"));
        ViewByCategory_list->setGeometry(QRect(380, 420, 121, 31));
        label = new QLabel(CustomerViewItems);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 100, 141, 31));
        ViewByNameNext = new QPushButton(CustomerViewItems);
        ViewByNameNext->setObjectName(QStringLiteral("ViewByNameNext"));
        ViewByNameNext->setGeometry(QRect(430, 200, 75, 23));
        ViewByCategoryNext = new QPushButton(CustomerViewItems);
        ViewByCategoryNext->setObjectName(QStringLiteral("ViewByCategoryNext"));
        ViewByCategoryNext->setGeometry(QRect(430, 480, 75, 23));
        label_7 = new QLabel(CustomerViewItems);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, -30, 511, 131));
        BackButton = new QPushButton(CustomerViewItems);
        BackButton->setObjectName(QStringLiteral("BackButton"));
        BackButton->setGeometry(QRect(620, 530, 91, 41));

        retranslateUi(CustomerViewItems);
        QObject::connect(BackButton, SIGNAL(clicked()), CustomerViewItems, SLOT(BackButton()));
        QObject::connect(ViewByNameNext, SIGNAL(clicked()), CustomerViewItems, SLOT(ViewByName()));
        QObject::connect(ViewByCategoryNext, SIGNAL(clicked()), CustomerViewItems, SLOT(ViewByCategory()));

        QMetaObject::connectSlotsByName(CustomerViewItems);
    } // setupUi

    void retranslateUi(QWidget *CustomerViewItems)
    {
        CustomerViewItems->setWindowTitle(QApplication::translate("CustomerViewItems", "CustomerViewItems", 0));
        label_3->setText(QApplication::translate("CustomerViewItems", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">View By Category</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("CustomerViewItems", "<html><head/><body><p><span style=\" font-size:11pt;\">Name</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("CustomerViewItems", "<html><head/><body><p><span style=\" font-size:11pt;\">Category</span></p></body></html>", 0));
        label->setText(QApplication::translate("CustomerViewItems", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">View By Name</span></p></body></html>", 0));
        ViewByNameNext->setText(QApplication::translate("CustomerViewItems", "Next", 0));
        ViewByCategoryNext->setText(QApplication::translate("CustomerViewItems", "Next", 0));
        label_7->setText(QApplication::translate("CustomerViewItems", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#00aaff;\">Hello Customer, You can view all the items here.</span></p></body></html>", 0));
        BackButton->setText(QApplication::translate("CustomerViewItems", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerViewItems: public Ui_CustomerViewItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEWITEMS_H
