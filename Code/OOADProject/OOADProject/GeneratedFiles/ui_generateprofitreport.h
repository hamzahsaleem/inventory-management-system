/********************************************************************************
** Form generated from reading UI file 'generateprofitreport.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEPROFITREPORT_H
#define UI_GENERATEPROFITREPORT_H

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

class Ui_GenerateProfitReport
{
public:
    QLabel *label_2;
    QPushButton *Backbuttom;
    QTableWidget *profitTable;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *GenerateProfitReport)
    {
        if (GenerateProfitReport->objectName().isEmpty())
            GenerateProfitReport->setObjectName(QStringLiteral("GenerateProfitReport"));
        GenerateProfitReport->resize(851, 794);
        label_2 = new QLabel(GenerateProfitReport);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 20, 261, 81));
        Backbuttom = new QPushButton(GenerateProfitReport);
        Backbuttom->setObjectName(QStringLiteral("Backbuttom"));
        Backbuttom->setGeometry(QRect(740, 540, 75, 23));
        profitTable = new QTableWidget(GenerateProfitReport);
        if (profitTable->columnCount() < 3)
            profitTable->setColumnCount(3);
        QFont font;
        font.setPointSize(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        profitTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        profitTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font1;
        font1.setPointSize(13);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        profitTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        profitTable->setObjectName(QStringLiteral("profitTable"));
        profitTable->setGeometry(QRect(230, 150, 401, 421));
        label = new QLabel(GenerateProfitReport);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(246, 120, 71, 21));
        label_3 = new QLabel(GenerateProfitReport);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 120, 47, 13));
        label_4 = new QLabel(GenerateProfitReport);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 120, 101, 16));

        retranslateUi(GenerateProfitReport);
        QObject::connect(Backbuttom, SIGNAL(clicked()), GenerateProfitReport, SLOT(Backbutton()));

        QMetaObject::connectSlotsByName(GenerateProfitReport);
    } // setupUi

    void retranslateUi(QWidget *GenerateProfitReport)
    {
        GenerateProfitReport->setWindowTitle(QApplication::translate("GenerateProfitReport", "GenerateProfitReport", 0));
        label_2->setText(QApplication::translate("GenerateProfitReport", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Profit Report</span></p></body></html>", 0));
        Backbuttom->setText(QApplication::translate("GenerateProfitReport", "Back", 0));
        QTableWidgetItem *___qtablewidgetitem = profitTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GenerateProfitReport", "Item", 0));
        QTableWidgetItem *___qtablewidgetitem1 = profitTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GenerateProfitReport", "Quantity", 0));
        QTableWidgetItem *___qtablewidgetitem2 = profitTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GenerateProfitReport", "Total Profit", 0));
        label->setText(QApplication::translate("GenerateProfitReport", "Item", 0));
        label_3->setText(QApplication::translate("GenerateProfitReport", "Quantity", 0));
        label_4->setText(QApplication::translate("GenerateProfitReport", "Profit generated", 0));
    } // retranslateUi

};

namespace Ui {
    class GenerateProfitReport: public Ui_GenerateProfitReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEPROFITREPORT_H
