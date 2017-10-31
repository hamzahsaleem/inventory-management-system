/********************************************************************************
** Form generated from reading UI file 'customercart.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCART_H
#define UI_CUSTOMERCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerCart
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *CustomerCartSubmit;
    QComboBox *CustomerCartItem;
    QLabel *label_4;
    QPushButton *CustomerCartAdd;
    QComboBox *CustomerCartCategory;
    QTextEdit *CustomerCartQuantity;
    QPushButton *ShowItems;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QComboBox *customerPackageQuantity;

    void setupUi(QWidget *CustomerCart)
    {
        if (CustomerCart->objectName().isEmpty())
            CustomerCart->setObjectName(QStringLiteral("CustomerCart"));
        CustomerCart->resize(851, 785);
        label_2 = new QLabel(CustomerCart);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 91, 31));
        label_3 = new QLabel(CustomerCart);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 90, 91, 31));
        label = new QLabel(CustomerCart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 20, 201, 51));
        CustomerCartSubmit = new QPushButton(CustomerCart);
        CustomerCartSubmit->setObjectName(QStringLiteral("CustomerCartSubmit"));
        CustomerCartSubmit->setGeometry(QRect(650, 560, 101, 31));
        CustomerCartItem = new QComboBox(CustomerCart);
        CustomerCartItem->setObjectName(QStringLiteral("CustomerCartItem"));
        CustomerCartItem->setGeometry(QRect(330, 120, 101, 31));
        label_4 = new QLabel(CustomerCart);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(600, 90, 91, 31));
        CustomerCartAdd = new QPushButton(CustomerCart);
        CustomerCartAdd->setObjectName(QStringLiteral("CustomerCartAdd"));
        CustomerCartAdd->setGeometry(QRect(700, 110, 101, 41));
        CustomerCartCategory = new QComboBox(CustomerCart);
        CustomerCartCategory->setObjectName(QStringLiteral("CustomerCartCategory"));
        CustomerCartCategory->setGeometry(QRect(70, 121, 101, 31));
        CustomerCartQuantity = new QTextEdit(CustomerCart);
        CustomerCartQuantity->setObjectName(QStringLiteral("CustomerCartQuantity"));
        CustomerCartQuantity->setGeometry(QRect(600, 120, 81, 31));
        ShowItems = new QPushButton(CustomerCart);
        ShowItems->setObjectName(QStringLiteral("ShowItems"));
        ShowItems->setGeometry(QRect(210, 120, 81, 31));
        tableWidget = new QTableWidget(CustomerCart);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(190, 180, 461, 351));
        label_5 = new QLabel(CustomerCart);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(450, 90, 151, 31));
        QFont font;
        font.setPointSize(5);
        label_5->setFont(font);
        customerPackageQuantity = new QComboBox(CustomerCart);
        customerPackageQuantity->setObjectName(QStringLiteral("customerPackageQuantity"));
        customerPackageQuantity->setGeometry(QRect(460, 120, 91, 31));

        retranslateUi(CustomerCart);
        QObject::connect(CustomerCartSubmit, SIGNAL(clicked()), CustomerCart, SLOT(BillingPage()));
        QObject::connect(CustomerCartAdd, SIGNAL(clicked()), CustomerCart, SLOT(addCartSubmit()));
        QObject::connect(ShowItems, SIGNAL(clicked()), CustomerCart, SLOT(showItems()));
        QObject::connect(CustomerCartItem, SIGNAL(currentTextChanged(QString)), CustomerCart, SLOT(showPackageQuantity()));

        QMetaObject::connectSlotsByName(CustomerCart);
    } // setupUi

    void retranslateUi(QWidget *CustomerCart)
    {
        CustomerCart->setWindowTitle(QApplication::translate("CustomerCart", "CustomerCart", 0));
        label_2->setText(QApplication::translate("CustomerCart", "<html><head/><body><p><span style=\" font-size:14pt;\">Category</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("CustomerCart", "<html><head/><body><p><span style=\" font-size:14pt;\">Item</span></p></body></html>", 0));
        label->setText(QApplication::translate("CustomerCart", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Customer Cart</span></p></body></html>", 0));
        CustomerCartSubmit->setText(QApplication::translate("CustomerCart", "Submit", 0));
        label_4->setText(QApplication::translate("CustomerCart", "<html><head/><body><p><span style=\" font-size:14pt;\">Quantity</span></p></body></html>", 0));
        CustomerCartAdd->setText(QApplication::translate("CustomerCart", "ADD", 0));
        ShowItems->setText(QApplication::translate("CustomerCart", "Show Items", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CustomerCart", "Item", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CustomerCart", "Package Quantity", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CustomerCart", "Price", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CustomerCart", "Quantity", 0));
        label_5->setText(QApplication::translate("CustomerCart", "<html><head/><body><p><span style=\" font-size:14pt;\">Package Quantity</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerCart: public Ui_CustomerCart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCART_H
