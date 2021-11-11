#include "userwindow.h"
#include "ui_userwindow.h"
#include "citezin.h"
#include "citezinreportissuedialog.h"
#include "covidpassportdialog.h"
#include "logindialog.h"

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{

    ui->setupUi(this);
    connect (ui->actionReport_Issue, &QAction::triggered,this,&UserWindow::on_actionReport_Issue_triggered);
    connect (ui->actionView_Certificate, &QAction::triggered,this,&UserWindow::on_actionView_Certificate_triggered);
    connect (ui->actionLogout, &QAction::triggered,this,&UserWindow::on_actionLogout_triggered);

    //Load in the user with a function.

}

UserWindow::~UserWindow()
{
    delete ui;
}


void UserWindow::on_actionReport_Issue_triggered()
{
    Issue *newissue =nullptr;
    citezinReportIssueDialog issue(newissue,nullptr);
    issue.setModal(true);
    issue.exec();
}



void UserWindow::on_actionView_Certificate_triggered()
{
    covidPassportDialog passport;
    passport.setModal(true);
    passport.exec();
}





void UserWindow::on_actionLogout_triggered()
{
    LoginDialog log;
    log.setModal(true);
    log.exec();
}

