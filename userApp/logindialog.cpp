#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "userwindow.h"

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
    UserWindow W;
    QString username = ui->Username->text();
    QString password = ui->Password->text();

    if (username=="User"&& password =="User")
    {
        this->hide();
        QMessageBox::information(this,"Login","Correct Username and Password");
        this->setResult(QDialog::Accepted);




    }
    else
    {
        QMessageBox::warning(this,"Login", "Incorrect username or password");
        this->setResult(QDialog::Rejected);

    }
}

