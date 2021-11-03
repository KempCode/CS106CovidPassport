#include "userwindow.h"
#include "ui_userwindow.h"
#include "citezin.h"
#include "citezinreportissuedialog.h"
#include "covidpassportdialog.h"
#include "citezindocdialog.h"
#include "logindialog.h"

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    //    connect(ui->actionNewCitezin, &QAction::triggered,
    //this, &MainWindow::handleNewCitezin);

}

UserWindow::~UserWindow()
{
    delete ui;
}


void UserWindow::on_actionReport_Issue_triggered()
{
    citezinReportIssueDialog issue;
    issue.setModal(true);
    issue.exec();
}



void UserWindow::on_actionView_Certificate_triggered()
{
    covidPassportDialog passport;
    passport.setModal(true);
    passport.exec();
}


void UserWindow::on_actionView_Documents_triggered()
{
    citezinDocDialog doc;
    doc.setModal(true);
    doc.exec();

}


void UserWindow::on_actionLogout_triggered()
{
    LoginDialog log;
    log.setModal(true);
    log.exec();
}

