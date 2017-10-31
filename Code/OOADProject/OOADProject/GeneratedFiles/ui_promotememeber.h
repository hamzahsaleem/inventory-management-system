/********************************************************************************
** Form generated from reading UI file 'promotememeber.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOTEMEMEBER_H
#define UI_PROMOTEMEMEBER_H

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

class Ui_PromoteMemeber
{
public:
    QLabel *cnic;
    QLabel *PromoteMember;
    QPushButton *PromoteMemberPromote;
    QTextEdit *PromoteMemberName;
    QTextEdit *PromoteMemberCNIC;
    QLabel *name_2;
    QPushButton *Backbutton;
    QTextEdit *StatusBar;
    QLabel *cnic_2;

    void setupUi(QWidget *PromoteMemeber)
    {
        if (PromoteMemeber->objectName().isEmpty())
            PromoteMemeber->setObjectName(QStringLiteral("PromoteMemeber"));
        PromoteMemeber->resize(844, 781);
        cnic = new QLabel(PromoteMemeber);
        cnic->setObjectName(QStringLiteral("cnic"));
        cnic->setGeometry(QRect(300, 270, 61, 16));
        PromoteMember = new QLabel(PromoteMemeber);
        PromoteMember->setObjectName(QStringLiteral("PromoteMember"));
        PromoteMember->setGeometry(QRect(310, 170, 181, 21));
        PromoteMemberPromote = new QPushButton(PromoteMemeber);
        PromoteMemberPromote->setObjectName(QStringLiteral("PromoteMemberPromote"));
        PromoteMemberPromote->setGeometry(QRect(480, 380, 75, 31));
        PromoteMemberName = new QTextEdit(PromoteMemeber);
        PromoteMemberName->setObjectName(QStringLiteral("PromoteMemberName"));
        PromoteMemberName->setGeometry(QRect(370, 220, 151, 31));
        PromoteMemberCNIC = new QTextEdit(PromoteMemeber);
        PromoteMemberCNIC->setObjectName(QStringLiteral("PromoteMemberCNIC"));
        PromoteMemberCNIC->setGeometry(QRect(370, 270, 151, 31));
        name_2 = new QLabel(PromoteMemeber);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setGeometry(QRect(300, 220, 61, 16));
        Backbutton = new QPushButton(PromoteMemeber);
        Backbutton->setObjectName(QStringLiteral("Backbutton"));
        Backbutton->setGeometry(QRect(680, 520, 91, 41));
        StatusBar = new QTextEdit(PromoteMemeber);
        StatusBar->setObjectName(QStringLiteral("StatusBar"));
        StatusBar->setGeometry(QRect(130, 520, 151, 31));
        cnic_2 = new QLabel(PromoteMemeber);
        cnic_2->setObjectName(QStringLiteral("cnic_2"));
        cnic_2->setGeometry(QRect(40, 530, 81, 16));

        retranslateUi(PromoteMemeber);
        QObject::connect(Backbutton, SIGNAL(clicked()), PromoteMemeber, SLOT(Backbutton()));
        QObject::connect(PromoteMemberPromote, SIGNAL(clicked()), PromoteMemeber, SLOT(promotemember()));

        QMetaObject::connectSlotsByName(PromoteMemeber);
    } // setupUi

    void retranslateUi(QWidget *PromoteMemeber)
    {
        PromoteMemeber->setWindowTitle(QApplication::translate("PromoteMemeber", "PromoteMemeber", 0));
        cnic->setText(QApplication::translate("PromoteMemeber", "<html><head/><body><p><span style=\" font-size:11pt;\">CNIC</span></p></body></html>", 0));
        PromoteMember->setText(QApplication::translate("PromoteMemeber", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Promote Member</span></p><p><br/></p></body></html>", 0));
        PromoteMemberPromote->setText(QApplication::translate("PromoteMemeber", "Promote", 0));
        name_2->setText(QApplication::translate("PromoteMemeber", "<html><head/><body><p><span style=\" font-size:11pt;\">Name</span></p></body></html>", 0));
        Backbutton->setText(QApplication::translate("PromoteMemeber", "Back", 0));
        cnic_2->setText(QApplication::translate("PromoteMemeber", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Status Bar</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class PromoteMemeber: public Ui_PromoteMemeber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOTEMEMEBER_H
