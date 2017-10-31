/********************************************************************************
** Form generated from reading UI file 'adminportal.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPORTAL_H
#define UI_ADMINPORTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPortal
{
public:
    QPushButton *AdminGenerateSalesReport;
    QPushButton *AdminGenerateProfitReport;
    QPushButton *AdminModifyCategory;
    QPushButton *AdminPromoteMember;
    QLabel *label;
    QPushButton *AdminViewStock;
    QPushButton *adminModifyItem;
    QPushButton *ADminModifyStaff;
    QPushButton *Logout;

    void setupUi(QWidget *AdminPortal)
    {
        if (AdminPortal->objectName().isEmpty())
            AdminPortal->setObjectName(QStringLiteral("AdminPortal"));
        AdminPortal->resize(854, 795);
        AdminGenerateSalesReport = new QPushButton(AdminPortal);
        AdminGenerateSalesReport->setObjectName(QStringLiteral("AdminGenerateSalesReport"));
        AdminGenerateSalesReport->setGeometry(QRect(180, 370, 131, 51));
        AdminGenerateProfitReport = new QPushButton(AdminPortal);
        AdminGenerateProfitReport->setObjectName(QStringLiteral("AdminGenerateProfitReport"));
        AdminGenerateProfitReport->setGeometry(QRect(370, 370, 131, 51));
        AdminModifyCategory = new QPushButton(AdminPortal);
        AdminModifyCategory->setObjectName(QStringLiteral("AdminModifyCategory"));
        AdminModifyCategory->setGeometry(QRect(580, 280, 121, 51));
        AdminPromoteMember = new QPushButton(AdminPortal);
        AdminPromoteMember->setObjectName(QStringLiteral("AdminPromoteMember"));
        AdminPromoteMember->setGeometry(QRect(370, 460, 131, 51));
        label = new QLabel(AdminPortal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 70, 481, 141));
        AdminViewStock = new QPushButton(AdminPortal);
        AdminViewStock->setObjectName(QStringLiteral("AdminViewStock"));
        AdminViewStock->setGeometry(QRect(580, 370, 121, 51));
        adminModifyItem = new QPushButton(AdminPortal);
        adminModifyItem->setObjectName(QStringLiteral("adminModifyItem"));
        adminModifyItem->setGeometry(QRect(180, 282, 131, 51));
        ADminModifyStaff = new QPushButton(AdminPortal);
        ADminModifyStaff->setObjectName(QStringLiteral("ADminModifyStaff"));
        ADminModifyStaff->setGeometry(QRect(370, 280, 131, 51));
        Logout = new QPushButton(AdminPortal);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(600, 530, 101, 61));

        retranslateUi(AdminPortal);
        QObject::connect(adminModifyItem, SIGNAL(clicked()), AdminPortal, SLOT(ModifyitemPage()));
        QObject::connect(ADminModifyStaff, SIGNAL(clicked()), AdminPortal, SLOT(modifystaffPage()));
        QObject::connect(AdminModifyCategory, SIGNAL(clicked()), AdminPortal, SLOT(ModifycategoryPage()));
        QObject::connect(AdminGenerateProfitReport, SIGNAL(clicked()), AdminPortal, SLOT(genProfitReportPage()));
        QObject::connect(AdminGenerateSalesReport, SIGNAL(clicked()), AdminPortal, SLOT(gensalesreportPage()));
        QObject::connect(AdminViewStock, SIGNAL(clicked()), AdminPortal, SLOT(ViewstockPage()));
        QObject::connect(AdminPromoteMember, SIGNAL(clicked()), AdminPortal, SLOT(PromotememberPage()));
        QObject::connect(Logout, SIGNAL(clicked()), AdminPortal, SLOT(LogoutPage()));

        QMetaObject::connectSlotsByName(AdminPortal);
    } // setupUi

    void retranslateUi(QWidget *AdminPortal)
    {
        AdminPortal->setWindowTitle(QApplication::translate("AdminPortal", "AdminPortal", 0));
        AdminGenerateSalesReport->setText(QApplication::translate("AdminPortal", "Generate sales report", 0));
        AdminGenerateProfitReport->setText(QApplication::translate("AdminPortal", "Generate profit report", 0));
        AdminModifyCategory->setText(QApplication::translate("AdminPortal", "Modify category", 0));
        AdminPromoteMember->setText(QApplication::translate("AdminPortal", "Promote Member", 0));
        label->setText(QApplication::translate("AdminPortal", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aaff;\">Administrator Portal </span></p></body></html>", 0));
        AdminViewStock->setText(QApplication::translate("AdminPortal", "view stock", 0));
        adminModifyItem->setText(QApplication::translate("AdminPortal", "Modify item", 0));
        ADminModifyStaff->setText(QApplication::translate("AdminPortal", "Modify staff", 0));
        Logout->setText(QApplication::translate("AdminPortal", "Logout", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminPortal: public Ui_AdminPortal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPORTAL_H
