/********************************************************************************
** Form generated from reading UI file 'citezinreportissuedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITEZINREPORTISSUEDIALOG_H
#define UI_CITEZINREPORTISSUEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_citezinReportIssueDialog
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *reportissue;
    QPushButton *submit;

    void setupUi(QDialog *citezinReportIssueDialog)
    {
        if (citezinReportIssueDialog->objectName().isEmpty())
            citezinReportIssueDialog->setObjectName(QString::fromUtf8("citezinReportIssueDialog"));
        citezinReportIssueDialog->resize(534, 534);
        groupBox = new QGroupBox(citezinReportIssueDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 474, 447));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(248, 224, 11);"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 432, 403));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 244, 244);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 171, 31));
        label->setStyleSheet(QString::fromUtf8("\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 28px;\n"
"line-height: 33px;\n"
""));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 381, 91));
        label_2->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"\n"
""));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 170, 281, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"\n"
"color: #000000;"));
        reportissue = new QLineEdit(groupBox_2);
        reportissue->setObjectName(QString::fromUtf8("reportissue"));
        reportissue->setGeometry(QRect(30, 220, 371, 141));
        submit = new QPushButton(groupBox_2);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setGeometry(QRect(190, 370, 75, 23));

        retranslateUi(citezinReportIssueDialog);

        QMetaObject::connectSlotsByName(citezinReportIssueDialog);
    } // setupUi

    void retranslateUi(QDialog *citezinReportIssueDialog)
    {
        citezinReportIssueDialog->setWindowTitle(QCoreApplication::translate("citezinReportIssueDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("citezinReportIssueDialog", "Report Issue", nullptr));
        label_2->setText(QCoreApplication::translate("citezinReportIssueDialog", "Please describe a detailed description of the  issue you are facing,\n"
"include;\n"
"What activity you were doing when this issue occured.\n"
"What you expected to happen. \n"
"What actually occured.", nullptr));
        label_3->setText(QCoreApplication::translate("citezinReportIssueDialog", "Please describe the issue that you are facing.", nullptr));
        submit->setText(QCoreApplication::translate("citezinReportIssueDialog", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class citezinReportIssueDialog: public Ui_citezinReportIssueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITEZINREPORTISSUEDIALOG_H
