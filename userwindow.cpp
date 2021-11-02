#include "userwindow.h"
#include "ui_userwindow.h"
#include "citezin.h"
#include "citezinreportissuedialog.h"
#include "covidpassportdialog.h"


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
