#include "logindialog.h"
#include "userwindow.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include "ui_userwindow.h"
#include "citezin.h"
#include <QFile>
#include <QDialog>
#include <QTextStream>
#include <QString>
#include <QFileInfo>
#include <QDebug>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_clicked()
{
    bool flag = false;
    UserWindow W;
    QString username = ui->Username->text();
    QString password = ui->Password->text();

    //Load all of the citezins in on click of the File > Load Button.
    QString fileName(":/res/Resources/citezins.txt");


    if(QFileInfo::exists(fileName)){
         //Check if File exists for reading.
        QFile inputFile(fileName);
        inputFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&inputFile);


        while(!in.atEnd()){
            //Loop until the end of the file.
            //Read in and populate lstCitezins, and citezinList vector from csv.
            //Extract each column name before , using split, save in QStringList.
            QString line = in.readLine();
            QStringList currentCitezin = line.split(",");

            //NHI
            QString citNHI = currentCitezin.at(0);
            //Password
            QString citPass =  currentCitezin.at(5);

            //Trim whitespace away from the password.
            QString citPassTrimmed = citPass;
            citPassTrimmed = citPassTrimmed.trimmed();


            //Check if inputted NHI and Password  == to saved file.
            if (username == citNHI && password == citPassTrimmed)
            {
                this->hide();
                this->setResult(QDialog::Accepted);
                flag = true;
                break;
            }
            else
            {
                this->setResult(QDialog::Rejected);

            }
        }
        in.flush();
        inputFile.close();
    }else{
        //If file doesn't exist throw an error.
        //QMessageBox::information(this, "Warning", "Can't load any users. File does not exist.");
    }


    QMessageBox msgbx;
    if (flag == false)
    {
        msgbx.setText("Wrong credentials. Try again!");
        msgbx.exec();
    }
}

