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

    connect(ui->actionSaveCitezins, &QAction::triggered,
            this, &MainWindow::saveCitezins);

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


void MainWindow::saveCitezins(){
    //Save all users in Qlist widget / Data model vector into file

    QFile outputFile("citezins.txt");
    outputFile.open(QIODevice::WriteOnly /*| QIODevice::Append*/ | QIODevice::Text);
    QTextStream out(&outputFile);

    //loop through data model vector citezinList and use getters to add each user.
    for(int i = 0; i < citezinList.size(); i++){
        //NHI as first key for searching up users as unique identifiers
        //They will use NHI as username
        out << citezinList.at(i)->getNHINumber();
        out << ", ";
        out << citezinList.at(i)->getFirstName();
        out << ", ";
        out << citezinList.at(i)->getMiddleName();
        out << ", ";
        out << citezinList.at(i)->getLastName();
        out << ", ";
        out << citezinList.at(i)->getName();
        out << ", ";
        out << citezinList.at(i)->getPassword();
        out << ", ";
        out << citezinList.at(i)->getDOB();
        out << ", ";
        out << citezinList.at(i)->getPhoneNumber();
        out << ", ";
        out << citezinList.at(i)->getEthnicity();
        out << ", ";
        out << citezinList.at(i)->getNationality();
        out << ", ";
        out << citezinList.at(i)->getGender();
        out << ", ";
        out << citezinList.at(i)->getStreetAddress();
        out << ", ";
        out << citezinList.at(i)->getPostcode();
        out << ", ";

        out << citezinList.at(i)->getEmail();
        out << ", ";
        out << citezinList.at(i)->getClinicName();
        out << ", ";
        out << citezinList.at(i)->getClinicAddress();
        out << ", ";
        out << citezinList.at(i)->getVaccineName();
        out << ", ";

        out << citezinList.at(i)->getBatchNumber1();
        out << ", ";
        out << citezinList.at(i)->getBatchNumber2();
        out << ", ";
        out << citezinList.at(i)->getBatchNumber3();
        out << ", ";
        out << citezinList.at(i)->getNumberOfDoses();
        out << ", ";
        out << citezinList.at(i)->getTimeOfFirstVaccine();
        out << ", ";
        out << citezinList.at(i)->getTimeOfSecondVaccine();
        out << ", ";
        out << citezinList.at(i)->getTimeOfBooster();
        out << ", ";
        out << citezinList.at(i)->getFullyVaccinated();
        out << ", ";
        out << citezinList.at(i)->getCovidVaccineNumber();
        out << ", ";
        out << citezinList.at(i)->getCovidTestDate();
        out << ", ";
        out << citezinList.at(i)->getCovidTestResult();
        out << ", ";

        //File locations
        out << citezinList.at(i)->getUserPhotoFilepath();
        out << ", ";
        out << citezinList.at(i)->getUserDocumentFilePath();
        out << ", ";
        out << citezinList.at(i)->getUserDetailsFilePath();
        out << ", ";
        out << citezinList.at(i)->getUserQRFilepath();
        out << ", ";
        out << citezinList.at(i)->getTestResultFilePath();
        out << ", ";
        out << citezinList.at(i)->getReportIssuesFilepath();
        out << "\n";

    }

    //Close File Handles.
    out.flush();
    outputFile.close();

}

MainWindow::~MainWindow()
{
    delete ui;
}

