/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *Username;
    QLineEdit *Password;
    QPushButton *pushButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(450, 300);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 417, 279));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 65, 65);\n"
""));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 381, 250));
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(244, 244, 244);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 201, 31));
        label->setStyleSheet(QString::fromUtf8("font-family: Nunito;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 28px;\n"
"line-height: 38px;"));
        Username = new QLineEdit(groupBox_2);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(90, 90, 225, 30));
        Username->setEchoMode(QLineEdit::Password);
        Password = new QLineEdit(groupBox_2);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(90, 130, 225, 30));
        Password->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 210, 75, 23));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("LoginDialog", "My Covid Tracer", nullptr));
        Username->setText(QCoreApplication::translate("LoginDialog", "Username", nullptr));
        Password->setText(QCoreApplication::translate("LoginDialog", "Pasword", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
