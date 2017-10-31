/********************************************************************************
** Form generated from reading UI file 'modifystaff.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTAFF_H
#define UI_MODIFYSTAFF_H

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

class Ui_ModifyStaff
{
public:
    QLabel *label_2;
    QLabel *label_7;
    QTextEdit *AddMemberName;
    QTextEdit *ddMemberCnic;
    QPushButton *SubmittDeleteMember;
    QTextEdit *AddMemberPhone;
    QLabel *label_3;
    QTextEdit *DeleteMemberCnic;
    QLabel *label_5;
    QPushButton *SubmittAddMember;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label;
    QTextEdit *DeleteMemberName;
    QPushButton *Backbutton;
    QTextEdit *StatusBar;
    QLabel *label_8;

    void setupUi(QWidget *ModifyStaff)
    {
        if (ModifyStaff->objectName().isEmpty())
            ModifyStaff->setObjectName(QStringLiteral("ModifyStaff"));
        ModifyStaff->resize(846, 784);
        label_2 = new QLabel(ModifyStaff);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 200, 171, 41));
        label_7 = new QLabel(ModifyStaff);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 250, 51, 21));
        AddMemberName = new QTextEdit(ModifyStaff);
        AddMemberName->setObjectName(QStringLiteral("AddMemberName"));
        AddMemberName->setGeometry(QRect(150, 250, 141, 31));
        ddMemberCnic = new QTextEdit(ModifyStaff);
        ddMemberCnic->setObjectName(QStringLiteral("ddMemberCnic"));
        ddMemberCnic->setGeometry(QRect(150, 300, 191, 31));
        SubmittDeleteMember = new QPushButton(ModifyStaff);
        SubmittDeleteMember->setObjectName(QStringLiteral("SubmittDeleteMember"));
        SubmittDeleteMember->setGeometry(QRect(700, 430, 81, 31));
        AddMemberPhone = new QTextEdit(ModifyStaff);
        AddMemberPhone->setObjectName(QStringLiteral("AddMemberPhone"));
        AddMemberPhone->setGeometry(QRect(150, 350, 191, 31));
        label_3 = new QLabel(ModifyStaff);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 250, 51, 21));
        DeleteMemberCnic = new QTextEdit(ModifyStaff);
        DeleteMemberCnic->setObjectName(QStringLiteral("DeleteMemberCnic"));
        DeleteMemberCnic->setGeometry(QRect(510, 300, 191, 31));
        label_5 = new QLabel(ModifyStaff);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 350, 71, 21));
        SubmittAddMember = new QPushButton(ModifyStaff);
        SubmittAddMember->setObjectName(QStringLiteral("SubmittAddMember"));
        SubmittAddMember->setGeometry(QRect(260, 430, 81, 31));
        label_4 = new QLabel(ModifyStaff);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 300, 51, 21));
        label_6 = new QLabel(ModifyStaff);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 300, 51, 21));
        label = new QLabel(ModifyStaff);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 210, 131, 21));
        DeleteMemberName = new QTextEdit(ModifyStaff);
        DeleteMemberName->setObjectName(QStringLiteral("DeleteMemberName"));
        DeleteMemberName->setGeometry(QRect(510, 250, 141, 31));
        Backbutton = new QPushButton(ModifyStaff);
        Backbutton->setObjectName(QStringLiteral("Backbutton"));
        Backbutton->setGeometry(QRect(700, 590, 91, 41));
        StatusBar = new QTextEdit(ModifyStaff);
        StatusBar->setObjectName(QStringLiteral("StatusBar"));
        StatusBar->setGeometry(QRect(150, 580, 201, 31));
        label_8 = new QLabel(ModifyStaff);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 580, 91, 21));

        retranslateUi(ModifyStaff);
        QObject::connect(Backbutton, SIGNAL(clicked()), ModifyStaff, SLOT(Backbutton()));
        QObject::connect(SubmittAddMember, SIGNAL(clicked()), ModifyStaff, SLOT(AddMember()));
        QObject::connect(SubmittDeleteMember, SIGNAL(clicked()), ModifyStaff, SLOT(DeleteMemeber()));

        QMetaObject::connectSlotsByName(ModifyStaff);
    } // setupUi

    void retranslateUi(QWidget *ModifyStaff)
    {
        ModifyStaff->setWindowTitle(QApplication::translate("ModifyStaff", "ModifyStaff", 0));
        label_2->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Delete Member</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:11pt;\">Name</span></p></body></html>", 0));
        SubmittDeleteMember->setText(QApplication::translate("ModifyStaff", "Submitt", 0));
        label_3->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:11pt;\">Name</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:11pt;\">Phone No</span></p></body></html>", 0));
        SubmittAddMember->setText(QApplication::translate("ModifyStaff", "Submitt", 0));
        label_4->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:11pt;\">CNIC</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:11pt;\">CNIC</span></p></body></html>", 0));
        label->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Add Member</span></p></body></html>", 0));
        Backbutton->setText(QApplication::translate("ModifyStaff", "Back", 0));
        label_8->setText(QApplication::translate("ModifyStaff", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Status Bar</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyStaff: public Ui_ModifyStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTAFF_H
