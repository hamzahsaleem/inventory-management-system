/********************************************************************************
** Form generated from reading UI file 'dialoguebox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUEBOX_H
#define UI_DIALOGUEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogueBox
{
public:
    QLabel *label;
    QLabel *ErrorBox;

    void setupUi(QWidget *DialogueBox)
    {
        if (DialogueBox->objectName().isEmpty())
            DialogueBox->setObjectName(QStringLiteral("DialogueBox"));
        DialogueBox->resize(386, 202);
        label = new QLabel(DialogueBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 141, 31));
        ErrorBox = new QLabel(DialogueBox);
        ErrorBox->setObjectName(QStringLiteral("ErrorBox"));
        ErrorBox->setGeometry(QRect(20, 100, 351, 31));

        retranslateUi(DialogueBox);

        QMetaObject::connectSlotsByName(DialogueBox);
    } // setupUi

    void retranslateUi(QWidget *DialogueBox)
    {
        DialogueBox->setWindowTitle(QApplication::translate("DialogueBox", "DialogueBox", 0));
        label->setText(QApplication::translate("DialogueBox", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#ff0000;\">ERROR</span></p></body></html>", 0));
        ErrorBox->setText(QApplication::translate("DialogueBox", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#000000;\">Fill The Fields correctly</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogueBox: public Ui_DialogueBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUEBOX_H
