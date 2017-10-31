/********************************************************************************
** Form generated from reading UI file 'viewstock.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSTOCK_H
#define UI_VIEWSTOCK_H

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

class Ui_ViewStock
{
public:
    QLabel *label_7;
    QPushButton *Backbutton;
    QTableWidget *StockTable;

    void setupUi(QWidget *ViewStock)
    {
        if (ViewStock->objectName().isEmpty())
            ViewStock->setObjectName(QStringLiteral("ViewStock"));
        ViewStock->resize(882, 784);
        label_7 = new QLabel(ViewStock);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, -20, 511, 131));
        Backbutton = new QPushButton(ViewStock);
        Backbutton->setObjectName(QStringLiteral("Backbutton"));
        Backbutton->setGeometry(QRect(750, 620, 91, 41));
        StockTable = new QTableWidget(ViewStock);
        if (StockTable->columnCount() < 3)
            StockTable->setColumnCount(3);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        StockTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        StockTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        StockTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        StockTable->setObjectName(QStringLiteral("StockTable"));
        StockTable->setGeometry(QRect(180, 90, 341, 481));

        retranslateUi(ViewStock);
        QObject::connect(Backbutton, SIGNAL(clicked()), ViewStock, SLOT(Backbutton()));

        QMetaObject::connectSlotsByName(ViewStock);
    } // setupUi

    void retranslateUi(QWidget *ViewStock)
    {
        ViewStock->setWindowTitle(QApplication::translate("ViewStock", "ViewStock", 0));
        label_7->setText(QApplication::translate("ViewStock", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#00aaff;\">Hello Admin, You can view the stock here.</span></p></body></html>", 0));
        Backbutton->setText(QApplication::translate("ViewStock", "Back", 0));
        QTableWidgetItem *___qtablewidgetitem = StockTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ViewStock", "Item#", 0));
        QTableWidgetItem *___qtablewidgetitem1 = StockTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ViewStock", "Item", 0));
        QTableWidgetItem *___qtablewidgetitem2 = StockTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ViewStock", "Stock", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewStock: public Ui_ViewStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSTOCK_H
