/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNewCitezin;
    QAction *actionModify_User;
    QAction *actionLoadUsers;
    QAction *actionSaveCitezins;
    QAction *actionExit;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *A_3;
    QLabel *A_4;
    QLabel *QRImage;
    QLabel *VaccineInfo;
    QLabel *TestResults;
    QLabel *A_6;
    QLabel *UserDoc;
    QLabel *PersonalInfo;
    QLabel *VIL;
    QLabel *VIL_2;
    QLabel *VIL_4;
    QLabel *TRL_1;
    QLabel *TRL_2;
    QLabel *PI_1;
    QLabel *PI_2;
    QLabel *PI_3;
    QLabel *PI_4;
    QLabel *PI_5;
    QLabel *PI_6;
    QLabel *PI_7;
    QLabel *PI_8;
    QLabel *PI_9;
    QLabel *PI_10;
    QLabel *VI_1;
    QLabel *VI_2;
    QLabel *VI_3;
    QLabel *VI_4;
    QLabel *VI_5;
    QLabel *VI_6;
    QLabel *VI_7;
    QLabel *VI_8;
    QLabel *VI_9;
    QLabel *TR_1;
    QLabel *TR_2;
    QLabel *LPI_1;
    QLabel *LPI_2;
    QLabel *LPI_3;
    QLabel *LPI_4;
    QLabel *LPI_5;
    QLabel *LPI_6;
    QLabel *LPI_14;
    QLabel *LPI_15;
    QLabel *LPI_16;
    QLabel *LPI_17;
    QLabel *PI_11;
    QLabel *LPI_18;
    QLabel *PI_12;
    QLabel *LPI_19;
    QPushButton *uploadButton_3;
    QLabel *firstNameLabel;
    QLabel *PI_13;
    QLabel *LPI_13;
    QGroupBox *groupBox_3;
    QLabel *A_5;
    QLabel *UD;
    QLabel *UD_2;
    QLabel *UD_11;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *UD_3;
    QLabel *UD_5;
    QLabel *UD_7;
    QLabel *UD_4;
    QLabel *UD_9;
    QLabel *UD_6;
    QLabel *UD_10;
    QLabel *UD_8;
    QLabel *UD_12;
    QLabel *VIL_5;
    QLabel *VIL_6;
    QLabel *VIL_7;
    QLabel *VIL_8;
    QLabel *VIL_9;
    QLabel *VIL_10;
    QLabel *TRL_3;
    QLabel *TR_3;
    QGroupBox *groupBox_2;
    QLineEdit *LSearch;
    QPushButton *BSearch;
    QListWidget *lstCitezins;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(964, 636);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: grey;"));
        actionNewCitezin = new QAction(MainWindow);
        actionNewCitezin->setObjectName(QString::fromUtf8("actionNewCitezin"));
        actionModify_User = new QAction(MainWindow);
        actionModify_User->setObjectName(QString::fromUtf8("actionModify_User"));
        actionLoadUsers = new QAction(MainWindow);
        actionLoadUsers->setObjectName(QString::fromUtf8("actionLoadUsers"));
        actionSaveCitezins = new QAction(MainWindow);
        actionSaveCitezins->setObjectName(QString::fromUtf8("actionSaveCitezins"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, 30, 631, 561));
        groupBox->setStyleSheet(QString::fromUtf8("background: rgba(248, 224, 11, 0.9);\n"
"border: 1px solid rgba(0, 0, 0, 0.5);\n"
"box-sizing: border-box;"));
        A_3 = new QLabel(groupBox);
        A_3->setObjectName(QString::fromUtf8("A_3"));
        A_3->setGeometry(QRect(10, 10, 250, 241));
        A_3->setAutoFillBackground(false);
        A_3->setStyleSheet(QString::fromUtf8("\n"
"position: absolute;\n"
"width: 250px;\n"
"height: 231px;\n"
"\n"
"background: linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), rgba(244, 244, 244, 0.94);"));
        A_3->setFrameShape(QFrame::Panel);
        A_3->setFrameShadow(QFrame::Raised);
        A_4 = new QLabel(groupBox);
        A_4->setObjectName(QString::fromUtf8("A_4"));
        A_4->setGeometry(QRect(10, 260, 250, 121));
        A_4->setAutoFillBackground(false);
        A_4->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 250px;\n"
"height: 104px;\n"
"\n"
"background: #F4F4F4;\n"
"\n"
""));
        QRImage = new QLabel(groupBox);
        QRImage->setObjectName(QString::fromUtf8("QRImage"));
        QRImage->setGeometry(QRect(430, 10, 181, 161));
        QRImage->setStyleSheet(QString::fromUtf8("background: linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), rgba(244, 244, 244, 0.94);\n"
""));
        VaccineInfo = new QLabel(groupBox);
        VaccineInfo->setObjectName(QString::fromUtf8("VaccineInfo"));
        VaccineInfo->setGeometry(QRect(60, 20, 131, 16));
        VaccineInfo->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"background-color: rgb(255, 255, 255);\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;\n"
""));
        TestResults = new QLabel(groupBox);
        TestResults->setObjectName(QString::fromUtf8("TestResults"));
        TestResults->setGeometry(QRect(90, 270, 81, 16));
        TestResults->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"background-color: rgb(255, 255, 255);\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;\n"
""));
        A_6 = new QLabel(groupBox);
        A_6->setObjectName(QString::fromUtf8("A_6"));
        A_6->setGeometry(QRect(270, 220, 351, 165));
        A_6->setAutoFillBackground(false);
        A_6->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 249px;\n"
"height: 165px;\n"
"\n"
"background: linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), rgba(244, 244, 244, 0.94);\n"
""));
        UserDoc = new QLabel(groupBox);
        UserDoc->setObjectName(QString::fromUtf8("UserDoc"));
        UserDoc->setGeometry(QRect(10, 390, 131, 16));
        UserDoc->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"background-color: rgb(255, 255, 255);\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;\n"
""));
        PersonalInfo = new QLabel(groupBox);
        PersonalInfo->setObjectName(QString::fromUtf8("PersonalInfo"));
        PersonalInfo->setGeometry(QRect(390, 220, 131, 16));
        PersonalInfo->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"background-color: rgb(255, 255, 255);\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;\n"
""));
        VIL = new QLabel(groupBox);
        VIL->setObjectName(QString::fromUtf8("VIL"));
        VIL->setGeometry(QRect(20, 40, 71, 16));
        VIL->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_2 = new QLabel(groupBox);
        VIL_2->setObjectName(QString::fromUtf8("VIL_2"));
        VIL_2->setGeometry(QRect(20, 60, 71, 16));
        VIL_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_4 = new QLabel(groupBox);
        VIL_4->setObjectName(QString::fromUtf8("VIL_4"));
        VIL_4->setGeometry(QRect(20, 80, 71, 16));
        VIL_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TRL_1 = new QLabel(groupBox);
        TRL_1->setObjectName(QString::fromUtf8("TRL_1"));
        TRL_1->setGeometry(QRect(20, 300, 91, 16));
        TRL_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TRL_2 = new QLabel(groupBox);
        TRL_2->setObjectName(QString::fromUtf8("TRL_2"));
        TRL_2->setGeometry(QRect(20, 330, 91, 16));
        TRL_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_1 = new QLabel(groupBox);
        PI_1->setObjectName(QString::fromUtf8("PI_1"));
        PI_1->setGeometry(QRect(280, 240, 91, 16));
        PI_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_2 = new QLabel(groupBox);
        PI_2->setObjectName(QString::fromUtf8("PI_2"));
        PI_2->setGeometry(QRect(280, 260, 91, 16));
        PI_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_3 = new QLabel(groupBox);
        PI_3->setObjectName(QString::fromUtf8("PI_3"));
        PI_3->setGeometry(QRect(280, 280, 91, 16));
        PI_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_4 = new QLabel(groupBox);
        PI_4->setObjectName(QString::fromUtf8("PI_4"));
        PI_4->setGeometry(QRect(280, 300, 91, 16));
        PI_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_5 = new QLabel(groupBox);
        PI_5->setObjectName(QString::fromUtf8("PI_5"));
        PI_5->setGeometry(QRect(280, 320, 91, 16));
        PI_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_6 = new QLabel(groupBox);
        PI_6->setObjectName(QString::fromUtf8("PI_6"));
        PI_6->setGeometry(QRect(280, 340, 91, 16));
        PI_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_7 = new QLabel(groupBox);
        PI_7->setObjectName(QString::fromUtf8("PI_7"));
        PI_7->setGeometry(QRect(460, 240, 61, 16));
        PI_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_8 = new QLabel(groupBox);
        PI_8->setObjectName(QString::fromUtf8("PI_8"));
        PI_8->setGeometry(QRect(460, 260, 61, 16));
        PI_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_9 = new QLabel(groupBox);
        PI_9->setObjectName(QString::fromUtf8("PI_9"));
        PI_9->setGeometry(QRect(460, 280, 61, 16));
        PI_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_10 = new QLabel(groupBox);
        PI_10->setObjectName(QString::fromUtf8("PI_10"));
        PI_10->setGeometry(QRect(460, 300, 61, 16));
        PI_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_1 = new QLabel(groupBox);
        VI_1->setObjectName(QString::fromUtf8("VI_1"));
        VI_1->setGeometry(QRect(160, 40, 71, 16));
        VI_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_2 = new QLabel(groupBox);
        VI_2->setObjectName(QString::fromUtf8("VI_2"));
        VI_2->setGeometry(QRect(160, 60, 71, 16));
        VI_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_3 = new QLabel(groupBox);
        VI_3->setObjectName(QString::fromUtf8("VI_3"));
        VI_3->setGeometry(QRect(160, 80, 71, 16));
        VI_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_4 = new QLabel(groupBox);
        VI_4->setObjectName(QString::fromUtf8("VI_4"));
        VI_4->setGeometry(QRect(160, 100, 71, 16));
        VI_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_5 = new QLabel(groupBox);
        VI_5->setObjectName(QString::fromUtf8("VI_5"));
        VI_5->setGeometry(QRect(160, 120, 71, 16));
        VI_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_6 = new QLabel(groupBox);
        VI_6->setObjectName(QString::fromUtf8("VI_6"));
        VI_6->setGeometry(QRect(160, 140, 71, 16));
        VI_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_7 = new QLabel(groupBox);
        VI_7->setObjectName(QString::fromUtf8("VI_7"));
        VI_7->setGeometry(QRect(160, 160, 71, 16));
        VI_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_8 = new QLabel(groupBox);
        VI_8->setObjectName(QString::fromUtf8("VI_8"));
        VI_8->setGeometry(QRect(160, 180, 71, 16));
        VI_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VI_9 = new QLabel(groupBox);
        VI_9->setObjectName(QString::fromUtf8("VI_9"));
        VI_9->setGeometry(QRect(160, 200, 71, 16));
        VI_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TR_1 = new QLabel(groupBox);
        TR_1->setObjectName(QString::fromUtf8("TR_1"));
        TR_1->setGeometry(QRect(150, 300, 91, 16));
        TR_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TR_2 = new QLabel(groupBox);
        TR_2->setObjectName(QString::fromUtf8("TR_2"));
        TR_2->setGeometry(QRect(150, 330, 91, 16));
        TR_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_1 = new QLabel(groupBox);
        LPI_1->setObjectName(QString::fromUtf8("LPI_1"));
        LPI_1->setGeometry(QRect(370, 240, 91, 16));
        LPI_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_2 = new QLabel(groupBox);
        LPI_2->setObjectName(QString::fromUtf8("LPI_2"));
        LPI_2->setGeometry(QRect(370, 260, 91, 16));
        LPI_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_3 = new QLabel(groupBox);
        LPI_3->setObjectName(QString::fromUtf8("LPI_3"));
        LPI_3->setGeometry(QRect(370, 280, 91, 16));
        LPI_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_4 = new QLabel(groupBox);
        LPI_4->setObjectName(QString::fromUtf8("LPI_4"));
        LPI_4->setGeometry(QRect(370, 300, 91, 16));
        LPI_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_5 = new QLabel(groupBox);
        LPI_5->setObjectName(QString::fromUtf8("LPI_5"));
        LPI_5->setGeometry(QRect(370, 320, 91, 16));
        LPI_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_6 = new QLabel(groupBox);
        LPI_6->setObjectName(QString::fromUtf8("LPI_6"));
        LPI_6->setGeometry(QRect(370, 340, 91, 16));
        LPI_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_14 = new QLabel(groupBox);
        LPI_14->setObjectName(QString::fromUtf8("LPI_14"));
        LPI_14->setGeometry(QRect(520, 240, 91, 16));
        LPI_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_15 = new QLabel(groupBox);
        LPI_15->setObjectName(QString::fromUtf8("LPI_15"));
        LPI_15->setGeometry(QRect(520, 260, 91, 16));
        LPI_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_16 = new QLabel(groupBox);
        LPI_16->setObjectName(QString::fromUtf8("LPI_16"));
        LPI_16->setGeometry(QRect(520, 280, 91, 16));
        LPI_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_17 = new QLabel(groupBox);
        LPI_17->setObjectName(QString::fromUtf8("LPI_17"));
        LPI_17->setGeometry(QRect(520, 300, 91, 16));
        LPI_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_11 = new QLabel(groupBox);
        PI_11->setObjectName(QString::fromUtf8("PI_11"));
        PI_11->setGeometry(QRect(460, 320, 61, 16));
        PI_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_18 = new QLabel(groupBox);
        LPI_18->setObjectName(QString::fromUtf8("LPI_18"));
        LPI_18->setGeometry(QRect(520, 320, 91, 16));
        LPI_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PI_12 = new QLabel(groupBox);
        PI_12->setObjectName(QString::fromUtf8("PI_12"));
        PI_12->setGeometry(QRect(460, 340, 61, 16));
        PI_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_19 = new QLabel(groupBox);
        LPI_19->setObjectName(QString::fromUtf8("LPI_19"));
        LPI_19->setGeometry(QRect(520, 340, 91, 16));
        LPI_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        uploadButton_3 = new QPushButton(groupBox);
        uploadButton_3->setObjectName(QString::fromUtf8("uploadButton_3"));
        uploadButton_3->setGeometry(QRect(310, 80, 100, 25));
        uploadButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);\n"
""));
        firstNameLabel = new QLabel(groupBox);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        firstNameLabel->setGeometry(QRect(310, 10, 101, 61));
        firstNameLabel->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 16px;\n"
"\n"
"color: #000000;"));
        firstNameLabel->setFrameShape(QFrame::NoFrame);
        PI_13 = new QLabel(groupBox);
        PI_13->setObjectName(QString::fromUtf8("PI_13"));
        PI_13->setGeometry(QRect(280, 360, 91, 16));
        PI_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LPI_13 = new QLabel(groupBox);
        LPI_13->setObjectName(QString::fromUtf8("LPI_13"));
        LPI_13->setGeometry(QRect(370, 360, 91, 16));
        LPI_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 420, 611, 101));
        A_5 = new QLabel(groupBox_3);
        A_5->setObjectName(QString::fromUtf8("A_5"));
        A_5->setGeometry(QRect(0, -10, 611, 111));
        A_5->setAutoFillBackground(false);
        A_5->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 510px;\n"
"height: 92px;\n"
"\n"
"background: linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), rgba(244, 244, 244, 0.94);\n"
""));
        UD = new QLabel(groupBox_3);
        UD->setObjectName(QString::fromUtf8("UD"));
        UD->setGeometry(QRect(60, 10, 181, 16));
        UD->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_2 = new QLabel(groupBox_3);
        UD_2->setObjectName(QString::fromUtf8("UD_2"));
        UD_2->setGeometry(QRect(60, 40, 181, 16));
        UD_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_11 = new QLabel(groupBox_3);
        UD_11->setObjectName(QString::fromUtf8("UD_11"));
        UD_11->setGeometry(QRect(60, 70, 181, 16));
        UD_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 21, 21));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 21, 21));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 21, 21));
        UD_3 = new QLabel(groupBox_3);
        UD_3->setObjectName(QString::fromUtf8("UD_3"));
        UD_3->setGeometry(QRect(270, 10, 71, 16));
        UD_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_5 = new QLabel(groupBox_3);
        UD_5->setObjectName(QString::fromUtf8("UD_5"));
        UD_5->setGeometry(QRect(370, 10, 71, 16));
        UD_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_7 = new QLabel(groupBox_3);
        UD_7->setObjectName(QString::fromUtf8("UD_7"));
        UD_7->setGeometry(QRect(460, 10, 71, 16));
        UD_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_4 = new QLabel(groupBox_3);
        UD_4->setObjectName(QString::fromUtf8("UD_4"));
        UD_4->setGeometry(QRect(270, 40, 71, 16));
        UD_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_9 = new QLabel(groupBox_3);
        UD_9->setObjectName(QString::fromUtf8("UD_9"));
        UD_9->setGeometry(QRect(270, 70, 71, 16));
        UD_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_6 = new QLabel(groupBox_3);
        UD_6->setObjectName(QString::fromUtf8("UD_6"));
        UD_6->setGeometry(QRect(370, 40, 71, 16));
        UD_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_10 = new QLabel(groupBox_3);
        UD_10->setObjectName(QString::fromUtf8("UD_10"));
        UD_10->setGeometry(QRect(370, 70, 71, 16));
        UD_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_8 = new QLabel(groupBox_3);
        UD_8->setObjectName(QString::fromUtf8("UD_8"));
        UD_8->setGeometry(QRect(460, 40, 71, 16));
        UD_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        UD_12 = new QLabel(groupBox_3);
        UD_12->setObjectName(QString::fromUtf8("UD_12"));
        UD_12->setGeometry(QRect(460, 70, 71, 16));
        UD_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_5 = new QLabel(groupBox);
        VIL_5->setObjectName(QString::fromUtf8("VIL_5"));
        VIL_5->setGeometry(QRect(20, 100, 111, 16));
        VIL_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_6 = new QLabel(groupBox);
        VIL_6->setObjectName(QString::fromUtf8("VIL_6"));
        VIL_6->setGeometry(QRect(20, 120, 111, 16));
        VIL_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_7 = new QLabel(groupBox);
        VIL_7->setObjectName(QString::fromUtf8("VIL_7"));
        VIL_7->setGeometry(QRect(20, 140, 121, 16));
        VIL_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_8 = new QLabel(groupBox);
        VIL_8->setObjectName(QString::fromUtf8("VIL_8"));
        VIL_8->setGeometry(QRect(20, 160, 111, 16));
        VIL_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_9 = new QLabel(groupBox);
        VIL_9->setObjectName(QString::fromUtf8("VIL_9"));
        VIL_9->setGeometry(QRect(20, 180, 121, 16));
        VIL_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VIL_10 = new QLabel(groupBox);
        VIL_10->setObjectName(QString::fromUtf8("VIL_10"));
        VIL_10->setGeometry(QRect(20, 200, 111, 16));
        VIL_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TRL_3 = new QLabel(groupBox);
        TRL_3->setObjectName(QString::fromUtf8("TRL_3"));
        TRL_3->setGeometry(QRect(20, 360, 91, 16));
        TRL_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TR_3 = new QLabel(groupBox);
        TR_3->setObjectName(QString::fromUtf8("TR_3"));
        TR_3->setGeometry(QRect(150, 360, 91, 16));
        TR_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 301, 561));
        groupBox_2->setStyleSheet(QString::fromUtf8("background: rgba(248, 224, 11, 0.6);\n"
"border: 1px solid rgba(0, 0, 0, 0.5);\n"
""));
        LSearch = new QLineEdit(groupBox_2);
        LSearch->setObjectName(QString::fromUtf8("LSearch"));
        LSearch->setGeometry(QRect(10, 40, 195, 25));
        LSearch->setStyleSheet(QString::fromUtf8("\n"
"background: linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), linear-gradient(0deg, rgba(244, 244, 244, 0.94), rgba(244, 244, 244, 0.94)), rgba(244, 244, 244, 0.94);"));
        BSearch = new QPushButton(groupBox_2);
        BSearch->setObjectName(QString::fromUtf8("BSearch"));
        BSearch->setGeometry(QRect(210, 40, 75, 23));
        BSearch->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lstCitezins = new QListWidget(groupBox_2);
        lstCitezins->setObjectName(QString::fromUtf8("lstCitezins"));
        lstCitezins->setGeometry(QRect(10, 70, 281, 471));
        lstCitezins->setStyleSheet(QString::fromUtf8("background:white;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 964, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNewCitezin);
        menuFile->addAction(actionModify_User);
        menuFile->addAction(actionLoadUsers);
        menuFile->addAction(actionSaveCitezins);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNewCitezin->setText(QApplication::translate("MainWindow", "Create User", nullptr));
        actionModify_User->setText(QApplication::translate("MainWindow", "Modify User", nullptr));
        actionLoadUsers->setText(QApplication::translate("MainWindow", "Load Users", nullptr));
        actionSaveCitezins->setText(QApplication::translate("MainWindow", "Save Users", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        groupBox->setTitle(QString());
        A_3->setText(QString());
        A_4->setText(QString());
        QRImage->setText(QString());
        VaccineInfo->setText(QApplication::translate("MainWindow", "Vaccine Information", nullptr));
        TestResults->setText(QApplication::translate("MainWindow", "Test Results", nullptr));
        A_6->setText(QString());
        UserDoc->setText(QApplication::translate("MainWindow", "Users Documents", nullptr));
        PersonalInfo->setText(QApplication::translate("MainWindow", "Personal Information", nullptr));
        VIL->setText(QApplication::translate("MainWindow", "Clinic Name", nullptr));
        VIL_2->setText(QApplication::translate("MainWindow", "Clinic Address", nullptr));
        VIL_4->setText(QApplication::translate("MainWindow", "Vaccine Name", nullptr));
        TRL_1->setText(QApplication::translate("MainWindow", "Covid Test Date", nullptr));
        TRL_2->setText(QApplication::translate("MainWindow", "Covid Test Result", nullptr));
        PI_1->setText(QApplication::translate("MainWindow", "First Name", nullptr));
        PI_2->setText(QApplication::translate("MainWindow", "Middle Name", nullptr));
        PI_3->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
        PI_4->setText(QApplication::translate("MainWindow", "DOB", nullptr));
        PI_5->setText(QApplication::translate("MainWindow", "Ethnicity", nullptr));
        PI_6->setText(QApplication::translate("MainWindow", "Gender", nullptr));
        PI_7->setText(QApplication::translate("MainWindow", "Email", nullptr));
        PI_8->setText(QApplication::translate("MainWindow", "Address", nullptr));
        PI_9->setText(QApplication::translate("MainWindow", "PostCode", nullptr));
        PI_10->setText(QApplication::translate("MainWindow", "Contact", nullptr));
        VI_1->setText(QString());
        VI_2->setText(QString());
        VI_3->setText(QString());
        VI_4->setText(QString());
        VI_5->setText(QString());
        VI_6->setText(QString());
        VI_7->setText(QString());
        VI_8->setText(QString());
        VI_9->setText(QString());
        TR_1->setText(QString());
        TR_2->setText(QString());
        LPI_1->setText(QString());
        LPI_2->setText(QString());
        LPI_3->setText(QString());
        LPI_4->setText(QString());
        LPI_5->setText(QString());
        LPI_6->setText(QString());
        LPI_14->setText(QString());
        LPI_15->setText(QString());
        LPI_16->setText(QString());
        LPI_17->setText(QString());
        PI_11->setText(QApplication::translate("MainWindow", "Nationality", nullptr));
        LPI_18->setText(QString());
        PI_12->setText(QApplication::translate("MainWindow", "Phone", nullptr));
        LPI_19->setText(QString());
        uploadButton_3->setText(QApplication::translate("MainWindow", "Upload", nullptr));
        firstNameLabel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:14px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Change User</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">QR Certificate:</span></p></body></html>", nullptr));
        PI_13->setText(QApplication::translate("MainWindow", "NHI Number", nullptr));
        LPI_13->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        A_5->setText(QString());
        UD->setText(QApplication::translate("MainWindow", "Vaccination Document", nullptr));
        UD_2->setText(QApplication::translate("MainWindow", "Vaccination Document", nullptr));
        UD_11->setText(QApplication::translate("MainWindow", "Vaccination Document", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        UD_3->setText(QApplication::translate("MainWindow", "20/04/2000", nullptr));
        UD_5->setText(QApplication::translate("MainWindow", "PNG File", nullptr));
        UD_7->setText(QApplication::translate("MainWindow", "37k", nullptr));
        UD_4->setText(QApplication::translate("MainWindow", "20/04/2000", nullptr));
        UD_9->setText(QApplication::translate("MainWindow", "20/04/2000", nullptr));
        UD_6->setText(QApplication::translate("MainWindow", "PNG File", nullptr));
        UD_10->setText(QApplication::translate("MainWindow", "PNG File", nullptr));
        UD_8->setText(QApplication::translate("MainWindow", "37k", nullptr));
        UD_12->setText(QApplication::translate("MainWindow", "37k", nullptr));
        VIL_5->setText(QApplication::translate("MainWindow", "Date of First Vaccine", nullptr));
        VIL_6->setText(QApplication::translate("MainWindow", "Batch Number 1", nullptr));
        VIL_7->setText(QApplication::translate("MainWindow", "Date of Second Vaccine", nullptr));
        VIL_8->setText(QApplication::translate("MainWindow", "Batch Number 2", nullptr));
        VIL_9->setText(QApplication::translate("MainWindow", "Date of Third Vaccine", nullptr));
        VIL_10->setText(QApplication::translate("MainWindow", "Batch Number 3", nullptr));
        TRL_3->setText(QApplication::translate("MainWindow", "Strain of Virus", nullptr));
        TR_3->setText(QString());
        groupBox_2->setTitle(QString());
        BSearch->setText(QApplication::translate("MainWindow", "Search", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
