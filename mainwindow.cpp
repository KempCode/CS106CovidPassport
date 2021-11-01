#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "citezin.h"
#include <QFile>
#include <QDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Event listener for creating new citezin - open modal window.
    connect(ui->actionNewCitezin, &QAction::triggered,
            this, &MainWindow::handleNewCitezin);

}



void MainWindow::handleNewCitezin()
{
    //Event listener for creating new citezin - open modal window.
    Citezin *newCit = nullptr;
    citezinDetailDialog detailDialog(newCit, nullptr);
    detailDialog.setModal(true);
    detailDialog.exec();
    if(newCit != nullptr){
        //datamodel adding to qvec
        citezinList.push_back(newCit);
        //add to view vector main window widget.
        ui->lstCitezins->addItem(newCit->getName());
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

