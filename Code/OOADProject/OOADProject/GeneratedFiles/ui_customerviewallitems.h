/********************************************************************************
** Form generated from reading UI file 'customerviewallitems.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERVIEWALLITEMS_H
#define UI_CUSTOMERVIEWALLITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerViewAllItems
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CustomerViewAllItems)
    {
        if (CustomerViewAllItems->objectName().isEmpty())
            CustomerViewAllItems->setObjectName(QStringLiteral("CustomerViewAllItems"));
        CustomerViewAllItems->resize(855, 788);
        pushButton = new QPushButton(CustomerViewAllItems);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 480, 101, 61));
        label = new QLabel(CustomerViewAllItems);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 22, 141, 41));
        tableWidget = new QTableWidget(CustomerViewAllItems);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 100, 331, 381));

        retranslateUi(CustomerViewAllItems);
        QObject::connect(pushButton, SIGNAL(clicked()), CustomerViewAllItems, SLOT(backpage()));

        QMetaObject::connectSlotsByName(CustomerViewAllItems);
    } // setupUi

    void retranslateUi(QWidget *CustomerViewAllItems)
    {
        CustomerViewAllItems->setWindowTitle(QApplication::translate("CustomerViewAllItems", "CustomerViewAllItems", 0));
        pushButton->setText(QApplication::translate("CustomerViewAllItems", "Back", 0));
        label->setText(QApplication::translate("CustomerViewAllItems", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Items</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CustomerViewAllItems", "ItemName", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CustomerViewAllItems", "PackageQuantity", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CustomerViewAllItems", "Price", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerViewAllItems: public Ui_CustomerViewAllItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEWALLITEMS_H
