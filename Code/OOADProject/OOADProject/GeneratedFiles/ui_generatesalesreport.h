/********************************************************************************
** Form generated from reading UI file 'generatesalesreport.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATESALESREPORT_H
#define UI_GENERATESALESREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenerateSalesReport
{
public:
    QPushButton *SalesReportNext;
    QLabel *label_3;
    QLabel *label;
    QDateEdit *SalesReportFrom;
    QLabel *label_2;
    QDateEdit *SalesReportTo;
    QPushButton *Backbuttom;
    QTableWidget *tableWidget;

    void setupUi(QWidget *GenerateSalesReport)
    {
        if (GenerateSalesReport->objectName().isEmpty())
            GenerateSalesReport->setObjectName(QStringLiteral("GenerateSalesReport"));
        GenerateSalesReport->resize(851, 791);
        SalesReportNext = new QPushButton(GenerateSalesReport);
        SalesReportNext->setObjectName(QStringLiteral("SalesReportNext"));
        SalesReportNext->setGeometry(QRect(150, 150, 91, 23));
        label_3 = new QLabel(GenerateSalesReport);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 100, 51, 21));
        label = new QLabel(GenerateSalesReport);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 0, 141, 41));
        SalesReportFrom = new QDateEdit(GenerateSalesReport);
        SalesReportFrom->setObjectName(QStringLiteral("SalesReportFrom"));
        SalesReportFrom->setGeometry(QRect(130, 50, 110, 22));
        label_2 = new QLabel(GenerateSalesReport);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 51, 16));
        SalesReportTo = new QDateEdit(GenerateSalesReport);
        SalesReportTo->setObjectName(QStringLiteral("SalesReportTo"));
        SalesReportTo->setGeometry(QRect(130, 100, 110, 22));
        Backbuttom = new QPushButton(GenerateSalesReport);
        Backbuttom->setObjectName(QStringLiteral("Backbuttom"));
        Backbuttom->setGeometry(QRect(740, 650, 75, 23));
        tableWidget = new QTableWidget(GenerateSalesReport);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font;
        font.setPointSize(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(13);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font2;
        font2.setPointSize(14);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(260, 200, 461, 431));

        retranslateUi(GenerateSalesReport);
        QObject::connect(Backbuttom, SIGNAL(clicked()), GenerateSalesReport, SLOT(Backbutton()));
        QObject::connect(SalesReportNext, SIGNAL(clicked()), GenerateSalesReport, SLOT(Submit()));

        QMetaObject::connectSlotsByName(GenerateSalesReport);
    } // setupUi

    void retranslateUi(QWidget *GenerateSalesReport)
    {
        GenerateSalesReport->setWindowTitle(QApplication::translate("GenerateSalesReport", "GenerateSalesReport", 0));
        SalesReportNext->setText(QApplication::translate("GenerateSalesReport", "Submit", 0));
        label_3->setText(QApplication::translate("GenerateSalesReport", "<html><head/><body><p><span style=\" font-size:11pt;\">To:</span></p></body></html>", 0));
        label->setText(QApplication::translate("GenerateSalesReport", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Sales Report</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("GenerateSalesReport", "<html><head/><body><p><span style=\" font-size:11pt;\">From:</span></p></body></html>", 0));
        Backbuttom->setText(QApplication::translate("GenerateSalesReport", "Back", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GenerateSalesReport", "Item", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GenerateSalesReport", "Quantity", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GenerateSalesReport", "Total Sales", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GenerateSalesReport", "SalePrice", 0));
    } // retranslateUi

};

namespace Ui {
    class GenerateSalesReport: public Ui_GenerateSalesReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATESALESREPORT_H
