/********************************************************************************
** Form generated from reading UI file 'citezindetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITEZINDETAILDIALOG_H
#define UI_CITEZINDETAILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_citezinDetailDialog
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *firstNameLabel;
    QLabel *lastNameLabel;
    QLabel *nationalityLabel;
    QLabel *addressLabel;
    QLabel *phoneNumberLabel;
    QLabel *nhiLabel;
    QLabel *clinicAddressLabel;
    QLabel *middleNameLabel;
    QLabel *dobLabel;
    QLabel *genderLabel;
    QLabel *emailLabel;
    QLabel *postCodeLabel;
    QLabel *clinicNameLabel;
    QLabel *uploadDocLabel;
    QLabel *userDetailsImage;
    QPushButton *uploadButton;
    QPushButton *continueButton;
    QLineEdit *firstNameEdit;
    QLineEdit *lastNameEdit;
    QLineEdit *middleNameEdit;
    QLineEdit *nationalityEdit;
    QLineEdit *phoneNumberEdit;
    QLineEdit *addressEdit;
    QLineEdit *nhiEdit;
    QLineEdit *clinicAddressEdit;
    QLineEdit *genderEdit;
    QLineEdit *emailEdit;
    QLineEdit *postCodeEdit;
    QLineEdit *clinicNameEdit;
    QDateEdit *dateEdit;
    QLabel *postCodeLabel_2;
    QLineEdit *ethnicityEdit;
    QLabel *vaccineDetails;
    QLabel *testDetailsLabel;
    QGroupBox *groupBox_3;
    QLabel *vaccineNameLabel;
    QLineEdit *vaccineNameEdit;
    QLabel *vaccineNameLabel_2;
    QLineEdit *vaccineNumber;
    QLabel *vaccineNameLabel_4;
    QLabel *vaccineNameLabel_5;
    QLabel *vaccineCertImage;
    QLabel *vaccineNameLabel_7;
    QLabel *vaccineNameLabel_8;
    QLabel *vaccineNameLabel_9;
    QLabel *vaccineNameLabel_10;
    QLineEdit *batchNumber1;
    QLineEdit *batchNumber2;
    QLineEdit *batchNumber3;
    QLabel *uploadDocLabel_2;
    QPushButton *uploadVacCertButton;
    QDateTimeEdit *dateOfSecondVaccine;
    QDateTimeEdit *dateOfThirdVaccine;
    QDateTimeEdit *dateOfFirstVaccine;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout;
    QRadioButton *vac1Radio;
    QRadioButton *vac2Radio;
    QRadioButton *vac3Radio;
    QGroupBox *groupBox_4;
    QLabel *vaccineNameLabel_11;
    QDateTimeEdit *covidTestDate;
    QLabel *vaccineNameLabel_12;
    QRadioButton *covidPositive;
    QRadioButton *covidNegative;
    QLabel *vaccineNameLabel_13;
    QLineEdit *strainOfVirus;
    QLabel *uploadDocLabel_3;
    QPushButton *uploadTestDoc;
    QLabel *testDocImage;

    void setupUi(QDialog *citezinDetailDialog)
    {
        if (citezinDetailDialog->objectName().isEmpty())
            citezinDetailDialog->setObjectName(QString::fromUtf8("citezinDetailDialog"));
        citezinDetailDialog->resize(1300, 671);
        groupBox = new QGroupBox(citezinDetailDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 1271, 652));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 225, 24);"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 1241, 624));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 244, 244);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 91, 21));
        label->setStyleSheet(QString::fromUtf8("font-family: Nunito;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 24px;\n"
"line-height: 33px;\n"
"\n"
"color: #000000;"));
        firstNameLabel = new QLabel(groupBox_2);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        firstNameLabel->setGeometry(QRect(40, 80, 71, 16));
        firstNameLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        lastNameLabel = new QLabel(groupBox_2);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setGeometry(QRect(40, 110, 71, 16));
        lastNameLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        nationalityLabel = new QLabel(groupBox_2);
        nationalityLabel->setObjectName(QString::fromUtf8("nationalityLabel"));
        nationalityLabel->setGeometry(QRect(40, 140, 71, 16));
        nationalityLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        addressLabel = new QLabel(groupBox_2);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));
        addressLabel->setGeometry(QRect(40, 230, 71, 16));
        addressLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        phoneNumberLabel = new QLabel(groupBox_2);
        phoneNumberLabel->setObjectName(QString::fromUtf8("phoneNumberLabel"));
        phoneNumberLabel->setGeometry(QRect(10, 170, 101, 16));
        phoneNumberLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        nhiLabel = new QLabel(groupBox_2);
        nhiLabel->setObjectName(QString::fromUtf8("nhiLabel"));
        nhiLabel->setGeometry(QRect(40, 270, 71, 16));
        nhiLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        clinicAddressLabel = new QLabel(groupBox_2);
        clinicAddressLabel->setObjectName(QString::fromUtf8("clinicAddressLabel"));
        clinicAddressLabel->setGeometry(QRect(20, 300, 91, 16));
        clinicAddressLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        middleNameLabel = new QLabel(groupBox_2);
        middleNameLabel->setObjectName(QString::fromUtf8("middleNameLabel"));
        middleNameLabel->setGeometry(QRect(250, 80, 91, 16));
        middleNameLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        dobLabel = new QLabel(groupBox_2);
        dobLabel->setObjectName(QString::fromUtf8("dobLabel"));
        dobLabel->setGeometry(QRect(250, 110, 91, 16));
        dobLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        genderLabel = new QLabel(groupBox_2);
        genderLabel->setObjectName(QString::fromUtf8("genderLabel"));
        genderLabel->setGeometry(QRect(250, 140, 91, 16));
        genderLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        emailLabel = new QLabel(groupBox_2);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setGeometry(QRect(250, 170, 91, 16));
        emailLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        postCodeLabel = new QLabel(groupBox_2);
        postCodeLabel->setObjectName(QString::fromUtf8("postCodeLabel"));
        postCodeLabel->setGeometry(QRect(250, 270, 91, 16));
        postCodeLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        clinicNameLabel = new QLabel(groupBox_2);
        clinicNameLabel->setObjectName(QString::fromUtf8("clinicNameLabel"));
        clinicNameLabel->setGeometry(QRect(250, 300, 91, 16));
        clinicNameLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        uploadDocLabel = new QLabel(groupBox_2);
        uploadDocLabel->setObjectName(QString::fromUtf8("uploadDocLabel"));
        uploadDocLabel->setGeometry(QRect(50, 400, 191, 16));
        uploadDocLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        userDetailsImage = new QLabel(groupBox_2);
        userDetailsImage->setObjectName(QString::fromUtf8("userDetailsImage"));
        userDetailsImage->setGeometry(QRect(310, 400, 150, 150));
        userDetailsImage->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"border: 1px solid #000000;\n"
"box-sizing: border-box;"));
        uploadButton = new QPushButton(groupBox_2);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        uploadButton->setGeometry(QRect(90, 430, 100, 25));
        uploadButton->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 215, 22);\n"
""));
        continueButton = new QPushButton(groupBox_2);
        continueButton->setObjectName(QString::fromUtf8("continueButton"));
        continueButton->setGeometry(QRect(530, 590, 231, 25));
        continueButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
""));
        firstNameEdit = new QLineEdit(groupBox_2);
        firstNameEdit->setObjectName(QString::fromUtf8("firstNameEdit"));
        firstNameEdit->setGeometry(QRect(120, 80, 113, 20));
        lastNameEdit = new QLineEdit(groupBox_2);
        lastNameEdit->setObjectName(QString::fromUtf8("lastNameEdit"));
        lastNameEdit->setGeometry(QRect(120, 110, 113, 20));
        middleNameEdit = new QLineEdit(groupBox_2);
        middleNameEdit->setObjectName(QString::fromUtf8("middleNameEdit"));
        middleNameEdit->setGeometry(QRect(340, 80, 111, 20));
        nationalityEdit = new QLineEdit(groupBox_2);
        nationalityEdit->setObjectName(QString::fromUtf8("nationalityEdit"));
        nationalityEdit->setGeometry(QRect(120, 140, 113, 20));
        phoneNumberEdit = new QLineEdit(groupBox_2);
        phoneNumberEdit->setObjectName(QString::fromUtf8("phoneNumberEdit"));
        phoneNumberEdit->setGeometry(QRect(120, 170, 113, 20));
        addressEdit = new QLineEdit(groupBox_2);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        addressEdit->setGeometry(QRect(120, 230, 113, 20));
        nhiEdit = new QLineEdit(groupBox_2);
        nhiEdit->setObjectName(QString::fromUtf8("nhiEdit"));
        nhiEdit->setGeometry(QRect(120, 270, 113, 20));
        clinicAddressEdit = new QLineEdit(groupBox_2);
        clinicAddressEdit->setObjectName(QString::fromUtf8("clinicAddressEdit"));
        clinicAddressEdit->setGeometry(QRect(120, 300, 113, 20));
        genderEdit = new QLineEdit(groupBox_2);
        genderEdit->setObjectName(QString::fromUtf8("genderEdit"));
        genderEdit->setGeometry(QRect(340, 140, 113, 20));
        emailEdit = new QLineEdit(groupBox_2);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));
        emailEdit->setGeometry(QRect(340, 170, 113, 20));
        postCodeEdit = new QLineEdit(groupBox_2);
        postCodeEdit->setObjectName(QString::fromUtf8("postCodeEdit"));
        postCodeEdit->setGeometry(QRect(340, 270, 113, 20));
        clinicNameEdit = new QLineEdit(groupBox_2);
        clinicNameEdit->setObjectName(QString::fromUtf8("clinicNameEdit"));
        clinicNameEdit->setGeometry(QRect(340, 300, 113, 20));
        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(340, 110, 110, 22));
        postCodeLabel_2 = new QLabel(groupBox_2);
        postCodeLabel_2->setObjectName(QString::fromUtf8("postCodeLabel_2"));
        postCodeLabel_2->setGeometry(QRect(250, 230, 71, 16));
        postCodeLabel_2->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        ethnicityEdit = new QLineEdit(groupBox_2);
        ethnicityEdit->setObjectName(QString::fromUtf8("ethnicityEdit"));
        ethnicityEdit->setGeometry(QRect(340, 230, 113, 20));
        vaccineDetails = new QLabel(groupBox_2);
        vaccineDetails->setObjectName(QString::fromUtf8("vaccineDetails"));
        vaccineDetails->setGeometry(QRect(610, 20, 111, 21));
        vaccineDetails->setStyleSheet(QString::fromUtf8("font-family: Nunito;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 24px;\n"
"line-height: 33px;\n"
"\n"
"color: #000000;"));
        testDetailsLabel = new QLabel(groupBox_2);
        testDetailsLabel->setObjectName(QString::fromUtf8("testDetailsLabel"));
        testDetailsLabel->setGeometry(QRect(970, 20, 141, 21));
        testDetailsLabel->setStyleSheet(QString::fromUtf8("font-family: Nunito;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 24px;\n"
"line-height: 33px;\n"
"\n"
"color: #000000;"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(490, 60, 351, 491));
        vaccineNameLabel = new QLabel(groupBox_3);
        vaccineNameLabel->setObjectName(QString::fromUtf8("vaccineNameLabel"));
        vaccineNameLabel->setGeometry(QRect(20, 100, 91, 16));
        vaccineNameLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        vaccineNameEdit = new QLineEdit(groupBox_3);
        vaccineNameEdit->setObjectName(QString::fromUtf8("vaccineNameEdit"));
        vaccineNameEdit->setGeometry(QRect(180, 100, 131, 20));
        vaccineNameLabel_2 = new QLabel(groupBox_3);
        vaccineNameLabel_2->setObjectName(QString::fromUtf8("vaccineNameLabel_2"));
        vaccineNameLabel_2->setGeometry(QRect(20, 130, 111, 16));
        vaccineNameLabel_2->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        vaccineNumber = new QLineEdit(groupBox_3);
        vaccineNumber->setObjectName(QString::fromUtf8("vaccineNumber"));
        vaccineNumber->setGeometry(QRect(180, 130, 131, 20));
        vaccineNameLabel_4 = new QLabel(groupBox_3);
        vaccineNameLabel_4->setObjectName(QString::fromUtf8("vaccineNameLabel_4"));
        vaccineNameLabel_4->setGeometry(QRect(20, 190, 141, 16));
        vaccineNameLabel_4->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        vaccineNameLabel_5 = new QLabel(groupBox_3);
        vaccineNameLabel_5->setObjectName(QString::fromUtf8("vaccineNameLabel_5"));
        vaccineNameLabel_5->setGeometry(QRect(20, 160, 141, 16));
        vaccineNameLabel_5->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        vaccineCertImage = new QLabel(groupBox_3);
        vaccineCertImage->setObjectName(QString::fromUtf8("vaccineCertImage"));
        vaccineCertImage->setGeometry(QRect(180, 350, 141, 131));
        vaccineCertImage->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"border: 1px solid #000000;\n"
"box-sizing: border-box;"));
        vaccineNameLabel_7 = new QLabel(groupBox_3);
        vaccineNameLabel_7->setObjectName(QString::fromUtf8("vaccineNameLabel_7"));
        vaccineNameLabel_7->setGeometry(QRect(20, 220, 151, 16));
        vaccineNameLabel_7->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        vaccineNameLabel_8 = new QLabel(groupBox_3);
        vaccineNameLabel_8->setObjectName(QString::fromUtf8("vaccineNameLabel_8"));
        vaccineNameLabel_8->setGeometry(QRect(20, 250, 141, 16));
        vaccineNameLabel_8->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        vaccineNameLabel_9 = new QLabel(groupBox_3);
        vaccineNameLabel_9->setObjectName(QString::fromUtf8("vaccineNameLabel_9"));
        vaccineNameLabel_9->setGeometry(QRect(20, 280, 151, 16));
        vaccineNameLabel_9->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        vaccineNameLabel_10 = new QLabel(groupBox_3);
        vaccineNameLabel_10->setObjectName(QString::fromUtf8("vaccineNameLabel_10"));
        vaccineNameLabel_10->setGeometry(QRect(20, 310, 141, 16));
        vaccineNameLabel_10->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        batchNumber1 = new QLineEdit(groupBox_3);
        batchNumber1->setObjectName(QString::fromUtf8("batchNumber1"));
        batchNumber1->setGeometry(QRect(180, 190, 141, 20));
        batchNumber2 = new QLineEdit(groupBox_3);
        batchNumber2->setObjectName(QString::fromUtf8("batchNumber2"));
        batchNumber2->setGeometry(QRect(180, 250, 141, 20));
        batchNumber3 = new QLineEdit(groupBox_3);
        batchNumber3->setObjectName(QString::fromUtf8("batchNumber3"));
        batchNumber3->setGeometry(QRect(180, 310, 141, 20));
        uploadDocLabel_2 = new QLabel(groupBox_3);
        uploadDocLabel_2->setObjectName(QString::fromUtf8("uploadDocLabel_2"));
        uploadDocLabel_2->setGeometry(QRect(20, 350, 131, 61));
        uploadDocLabel_2->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        uploadVacCertButton = new QPushButton(groupBox_3);
        uploadVacCertButton->setObjectName(QString::fromUtf8("uploadVacCertButton"));
        uploadVacCertButton->setGeometry(QRect(20, 420, 100, 25));
        uploadVacCertButton->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 215, 22);\n"
""));
        dateOfSecondVaccine = new QDateTimeEdit(groupBox_3);
        dateOfSecondVaccine->setObjectName(QString::fromUtf8("dateOfSecondVaccine"));
        dateOfSecondVaccine->setGeometry(QRect(180, 220, 141, 22));
        dateOfThirdVaccine = new QDateTimeEdit(groupBox_3);
        dateOfThirdVaccine->setObjectName(QString::fromUtf8("dateOfThirdVaccine"));
        dateOfThirdVaccine->setGeometry(QRect(180, 280, 141, 22));
        dateOfFirstVaccine = new QDateTimeEdit(groupBox_3);
        dateOfFirstVaccine->setObjectName(QString::fromUtf8("dateOfFirstVaccine"));
        dateOfFirstVaccine->setGeometry(QRect(180, 160, 141, 22));
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 30, 312, 41));
        horizontalLayout = new QHBoxLayout(groupBox_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vac1Radio = new QRadioButton(groupBox_5);
        vac1Radio->setObjectName(QString::fromUtf8("vac1Radio"));

        horizontalLayout->addWidget(vac1Radio);

        vac2Radio = new QRadioButton(groupBox_5);
        vac2Radio->setObjectName(QString::fromUtf8("vac2Radio"));

        horizontalLayout->addWidget(vac2Radio);

        vac3Radio = new QRadioButton(groupBox_5);
        vac3Radio->setObjectName(QString::fromUtf8("vac3Radio"));

        horizontalLayout->addWidget(vac3Radio);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(850, 60, 371, 491));
        vaccineNameLabel_11 = new QLabel(groupBox_4);
        vaccineNameLabel_11->setObjectName(QString::fromUtf8("vaccineNameLabel_11"));
        vaccineNameLabel_11->setGeometry(QRect(60, 40, 71, 21));
        vaccineNameLabel_11->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        covidTestDate = new QDateTimeEdit(groupBox_4);
        covidTestDate->setObjectName(QString::fromUtf8("covidTestDate"));
        covidTestDate->setGeometry(QRect(150, 40, 194, 22));
        vaccineNameLabel_12 = new QLabel(groupBox_4);
        vaccineNameLabel_12->setObjectName(QString::fromUtf8("vaccineNameLabel_12"));
        vaccineNameLabel_12->setGeometry(QRect(60, 100, 151, 21));
        vaccineNameLabel_12->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        covidPositive = new QRadioButton(groupBox_4);
        covidPositive->setObjectName(QString::fromUtf8("covidPositive"));
        covidPositive->setGeometry(QRect(230, 100, 51, 19));
        covidNegative = new QRadioButton(groupBox_4);
        covidNegative->setObjectName(QString::fromUtf8("covidNegative"));
        covidNegative->setGeometry(QRect(290, 100, 51, 19));
        vaccineNameLabel_13 = new QLabel(groupBox_4);
        vaccineNameLabel_13->setObjectName(QString::fromUtf8("vaccineNameLabel_13"));
        vaccineNameLabel_13->setGeometry(QRect(60, 150, 151, 21));
        vaccineNameLabel_13->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        strainOfVirus = new QLineEdit(groupBox_4);
        strainOfVirus->setObjectName(QString::fromUtf8("strainOfVirus"));
        strainOfVirus->setGeometry(QRect(180, 150, 161, 20));
        uploadDocLabel_3 = new QLabel(groupBox_4);
        uploadDocLabel_3->setObjectName(QString::fromUtf8("uploadDocLabel_3"));
        uploadDocLabel_3->setGeometry(QRect(70, 280, 191, 16));
        uploadDocLabel_3->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        uploadTestDoc = new QPushButton(groupBox_4);
        uploadTestDoc->setObjectName(QString::fromUtf8("uploadTestDoc"));
        uploadTestDoc->setGeometry(QRect(70, 340, 100, 25));
        uploadTestDoc->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 215, 22);\n"
""));
        testDocImage = new QLabel(groupBox_4);
        testDocImage->setObjectName(QString::fromUtf8("testDocImage"));
        testDocImage->setGeometry(QRect(200, 330, 150, 150));
        testDocImage->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"border: 1px solid #000000;\n"
"box-sizing: border-box;"));

        retranslateUi(citezinDetailDialog);

        QMetaObject::connectSlotsByName(citezinDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *citezinDetailDialog)
    {
        citezinDetailDialog->setWindowTitle(QApplication::translate("citezinDetailDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("citezinDetailDialog", "<html><head/><body><p><span style=\" font-size:12pt;\">User Details</span></p></body></html>", nullptr));
        firstNameLabel->setText(QApplication::translate("citezinDetailDialog", "First Name", nullptr));
        lastNameLabel->setText(QApplication::translate("citezinDetailDialog", "Last Name", nullptr));
        nationalityLabel->setText(QApplication::translate("citezinDetailDialog", "Nationality", nullptr));
        addressLabel->setText(QApplication::translate("citezinDetailDialog", "Address", nullptr));
        phoneNumberLabel->setText(QApplication::translate("citezinDetailDialog", "Phone Number", nullptr));
        nhiLabel->setText(QApplication::translate("citezinDetailDialog", "NHI", nullptr));
        clinicAddressLabel->setText(QApplication::translate("citezinDetailDialog", "Clinic Address", nullptr));
        middleNameLabel->setText(QApplication::translate("citezinDetailDialog", "Middle Name", nullptr));
        dobLabel->setText(QApplication::translate("citezinDetailDialog", "DOB", nullptr));
        genderLabel->setText(QApplication::translate("citezinDetailDialog", "Gender", nullptr));
        emailLabel->setText(QApplication::translate("citezinDetailDialog", "Email", nullptr));
        postCodeLabel->setText(QApplication::translate("citezinDetailDialog", "Post Code", nullptr));
        clinicNameLabel->setText(QApplication::translate("citezinDetailDialog", "Clinic Name", nullptr));
        uploadDocLabel->setText(QApplication::translate("citezinDetailDialog", "Upload User Details Document", nullptr));
        userDetailsImage->setText(QString());
        uploadButton->setText(QApplication::translate("citezinDetailDialog", "Upload", nullptr));
        continueButton->setText(QApplication::translate("citezinDetailDialog", "Save User", nullptr));
        postCodeLabel_2->setText(QApplication::translate("citezinDetailDialog", "Ethnicity", nullptr));
        vaccineDetails->setText(QApplication::translate("citezinDetailDialog", "<html><head/><body><p><span style=\" font-size:12pt;\">Vaccine Details</span></p></body></html>", nullptr));
        testDetailsLabel->setText(QApplication::translate("citezinDetailDialog", "<html><head/><body><p><span style=\" font-size:12pt;\">Covid Test Details</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        vaccineNameLabel->setText(QApplication::translate("citezinDetailDialog", "Vaccine Name", nullptr));
        vaccineNameLabel_2->setText(QApplication::translate("citezinDetailDialog", "Vaccine Number", nullptr));
        vaccineNameLabel_4->setText(QApplication::translate("citezinDetailDialog", "Batch Number 1", nullptr));
        vaccineNameLabel_5->setText(QApplication::translate("citezinDetailDialog", "Date of First Vaccine", nullptr));
        vaccineCertImage->setText(QString());
        vaccineNameLabel_7->setText(QApplication::translate("citezinDetailDialog", "Date of Second Vaccine", nullptr));
        vaccineNameLabel_8->setText(QApplication::translate("citezinDetailDialog", "Batch Number 2", nullptr));
        vaccineNameLabel_9->setText(QApplication::translate("citezinDetailDialog", "Date of Third Vaccine", nullptr));
        vaccineNameLabel_10->setText(QApplication::translate("citezinDetailDialog", "Batch Number 3", nullptr));
        uploadDocLabel_2->setText(QApplication::translate("citezinDetailDialog", "<html><head/><body><p><span style=\" font-size:11pt;\">Upload </span></p><p><span style=\" font-size:11pt;\">Vaccine Certificate</span></p></body></html>", nullptr));
        uploadVacCertButton->setText(QApplication::translate("citezinDetailDialog", "Upload", nullptr));
        groupBox_5->setTitle(QString());
        vac1Radio->setText(QApplication::translate("citezinDetailDialog", "Had 1 Vaccine", nullptr));
        vac2Radio->setText(QApplication::translate("citezinDetailDialog", "Had 2 Vaccines", nullptr));
        vac3Radio->setText(QApplication::translate("citezinDetailDialog", "Had 3 Vaccines", nullptr));
        groupBox_4->setTitle(QString());
        vaccineNameLabel_11->setText(QApplication::translate("citezinDetailDialog", "Test Date", nullptr));
        vaccineNameLabel_12->setText(QApplication::translate("citezinDetailDialog", "Positive For Coronavirus", nullptr));
        covidPositive->setText(QApplication::translate("citezinDetailDialog", "Yes", nullptr));
        covidNegative->setText(QApplication::translate("citezinDetailDialog", "No", nullptr));
        vaccineNameLabel_13->setText(QApplication::translate("citezinDetailDialog", "Strain Of Virus", nullptr));
        uploadDocLabel_3->setText(QApplication::translate("citezinDetailDialog", "Upload Covid Test Document", nullptr));
        uploadTestDoc->setText(QApplication::translate("citezinDetailDialog", "Upload", nullptr));
        testDocImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class citezinDetailDialog: public Ui_citezinDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITEZINDETAILDIALOG_H
