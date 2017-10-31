/********************************************************************************
** Form generated from reading UI file 'billing.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLING_H
#define UI_BILLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Billing
{
public:
    QTextEdit *BillingInfoGrandTotal;
    QLabel *label;
    QPushButton *BillDone;
    QLabel *label_6;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Billing)
    {
        if (Billing->objectName().isEmpty())
            Billing->setObjectName(QStringLiteral("Billing"));
        Billing->resize(848, 788);
        BillingInfoGrandTotal = new QTextEdit(Billing);
        BillingInfoGrandTotal->setObjectName(QStringLiteral("BillingInfoGrandTotal"));
        BillingInfoGrandTotal->setGeometry(QRect(630, 460, 151, 41));
        label = new QLabel(Billing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 40, 241, 51));
        BillDone = new QPushButton(Billing);
        BillDone->setObjectName(QStringLiteral("BillDone"));
        BillDone->setGeometry(QRect(700, 540, 81, 31));
        label_6 = new QLabel(Billing);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(500, 460, 121, 21));
        tableWidget = new QTableWidget(Billing);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(150, 120, 501, 301));

        retranslateUi(Billing);
        QObject::connect(BillDone, SIGNAL(clicked()), Billing, SLOT(CheckoutPage()));

        QMetaObject::connectSlotsByName(Billing);
    } // setupUi

    void retranslateUi(QWidget *Billing)
    {
        Billing->setWindowTitle(QApplication::translate("Billing", "Billing", 0));
        label->setText(QApplication::translate("Billing", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Billing Information</span></p></body></html>", 0));
        BillDone->setText(QApplication::translate("Billing", "Done", 0));
        label_6->setText(QApplication::translate("Billing", "<html><head/><body><p><span style=\" font-size:16pt;\">Grand Total</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Billing", "Item", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Billing", "PackageQuantity", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Billing", "Price", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Billing", "Quantity", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Billing", "Total", 0));
    } // retranslateUi

};

namespace Ui {
    class Billing: public Ui_Billing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLING_H
