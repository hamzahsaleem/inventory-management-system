/********************************************************************************
** Form generated from reading UI file 'modifycategory.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCATEGORY_H
#define UI_MODIFYCATEGORY_H

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

class Ui_ModifyCategory
{
public:
    QPushButton *SubmittDeleteCAtegor;
    QComboBox *OfferDiscountName;
    QLabel *label_7;
    QTextEdit *AddNewCategoryName;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *submittOfferDiscount;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QComboBox *DeleteCategoryName;
    QTextEdit *OfferDiscountBox;
    QLabel *label_5;
    QPushButton *submitAddNewCategory;
    QPushButton *Backbuttom;
    QLabel *label_8;
    QTextEdit *StatusBar;

    void setupUi(QWidget *ModifyCategory)
    {
        if (ModifyCategory->objectName().isEmpty())
            ModifyCategory->setObjectName(QStringLiteral("ModifyCategory"));
        ModifyCategory->resize(852, 786);
        SubmittDeleteCAtegor = new QPushButton(ModifyCategory);
        SubmittDeleteCAtegor->setObjectName(QStringLiteral("SubmittDeleteCAtegor"));
        SubmittDeleteCAtegor->setGeometry(QRect(390, 420, 81, 31));
        OfferDiscountName = new QComboBox(ModifyCategory);
        OfferDiscountName->setObjectName(QStringLiteral("OfferDiscountName"));
        OfferDiscountName->setGeometry(QRect(680, 320, 101, 22));
        label_7 = new QLabel(ModifyCategory);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(600, 360, 61, 21));
        AddNewCategoryName = new QTextEdit(ModifyCategory);
        AddNewCategoryName->setObjectName(QStringLiteral("AddNewCategoryName"));
        AddNewCategoryName->setGeometry(QRect(100, 320, 111, 31));
        label_3 = new QLabel(ModifyCategory);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 270, 171, 31));
        label_4 = new QLabel(ModifyCategory);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 320, 47, 21));
        submittOfferDiscount = new QPushButton(ModifyCategory);
        submittOfferDiscount->setObjectName(QStringLiteral("submittOfferDiscount"));
        submittOfferDiscount->setGeometry(QRect(710, 420, 81, 31));
        label_2 = new QLabel(ModifyCategory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 320, 47, 21));
        label = new QLabel(ModifyCategory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 270, 181, 31));
        label_6 = new QLabel(ModifyCategory);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(600, 320, 47, 21));
        DeleteCategoryName = new QComboBox(ModifyCategory);
        DeleteCategoryName->setObjectName(QStringLiteral("DeleteCategoryName"));
        DeleteCategoryName->setGeometry(QRect(370, 320, 101, 22));
        OfferDiscountBox = new QTextEdit(ModifyCategory);
        OfferDiscountBox->setObjectName(QStringLiteral("OfferDiscountBox"));
        OfferDiscountBox->setGeometry(QRect(680, 360, 111, 31));
        label_5 = new QLabel(ModifyCategory);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(610, 270, 151, 21));
        submitAddNewCategory = new QPushButton(ModifyCategory);
        submitAddNewCategory->setObjectName(QStringLiteral("submitAddNewCategory"));
        submitAddNewCategory->setGeometry(QRect(130, 420, 81, 31));
        Backbuttom = new QPushButton(ModifyCategory);
        Backbuttom->setObjectName(QStringLiteral("Backbuttom"));
        Backbuttom->setGeometry(QRect(710, 560, 91, 41));
        label_8 = new QLabel(ModifyCategory);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 560, 101, 21));
        StatusBar = new QTextEdit(ModifyCategory);
        StatusBar->setObjectName(QStringLiteral("StatusBar"));
        StatusBar->setGeometry(QRect(140, 560, 211, 31));

        retranslateUi(ModifyCategory);
        QObject::connect(Backbuttom, SIGNAL(clicked()), ModifyCategory, SLOT(Backbutton()));
        QObject::connect(submitAddNewCategory, SIGNAL(clicked()), ModifyCategory, SLOT(AddCategory()));
        QObject::connect(SubmittDeleteCAtegor, SIGNAL(clicked()), ModifyCategory, SLOT(DeleteCategory()));
        QObject::connect(submittOfferDiscount, SIGNAL(clicked()), ModifyCategory, SLOT(OfferCategoryDiscount()));

        QMetaObject::connectSlotsByName(ModifyCategory);
    } // setupUi

    void retranslateUi(QWidget *ModifyCategory)
    {
        ModifyCategory->setWindowTitle(QApplication::translate("ModifyCategory", "ModifyCategory", 0));
        SubmittDeleteCAtegor->setText(QApplication::translate("ModifyCategory", "Submitt", 0));
        label_7->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:11pt;\">Discount</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Delete Category</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:11pt;\">Name</span></p></body></html>", 0));
        submittOfferDiscount->setText(QApplication::translate("ModifyCategory", "Submitt", 0));
        label_2->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:11pt;\">Name</span></p></body></html>", 0));
        label->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Add New Category</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:11pt;\">Name</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Offer Discount</span></p></body></html>", 0));
        submitAddNewCategory->setText(QApplication::translate("ModifyCategory", "Submitt", 0));
        Backbuttom->setText(QApplication::translate("ModifyCategory", "Back", 0));
        label_8->setText(QApplication::translate("ModifyCategory", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Status Bar</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyCategory: public Ui_ModifyCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCATEGORY_H
