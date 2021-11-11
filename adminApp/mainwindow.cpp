#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "citezin.h"
#include <QFile>
#include <QMessageBox>
#include <QFileInfo>
#include <QDialog>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadCitezins();
    //ui->lstCitezins->currentRow(0);
    //handleItemClick();

    //Event listener for creating new citezin - open modal window.
    connect(ui->actionNewCitezin, &QAction::triggered,
            this, &MainWindow::handleNewCitezin);

    connect(ui->actionSaveCitezins, &QAction::triggered,
            this, &MainWindow::saveCitezins);

    connect(ui->actionLoadUsers, &QAction::triggered,
            this, &MainWindow::loadCitezins);

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

    QFile outputFile(":/res/Resources/citezins.txt");
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
        out << ", ";
        //Added virus strain
        out << citezinList.at(i)->getStrainOfVirus();
        out << "\n";

    }

    //Close File Handles.
    out.flush();
    outputFile.close();

}

void MainWindow::loadCitezins(){
    //Load all of the citezins in on click of the File > Load Button.
    QString fileName(":/res/Resources/citezins.txt");


    if(QFileInfo::exists(fileName)){
         //Check if File exists for reading.
        QFile inputFile(fileName);
        inputFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&inputFile);

        //Clear existing QList widget
        ui->lstCitezins->clear();

        //Clear citezinList data model vector
        for(int i = 0; i < citezinList.size(); i++){
            //deleting the pointers one by one. Dangling pointers.
            delete citezinList.at(i);
            citezinList[i] = nullptr;
        }
        citezinList.clear();

        while(!in.atEnd()){
            //Loop until the end of the file.
            //Read in and populate lstCitezins, and citezinList vector from csv.
            //Extract each column name before , using split, save in QStringList.
            QString line = in.readLine();
            QStringList currentCitezin = line.split(",");

            //Add full Name to list widget ui
            ui->lstCitezins->addItem(currentCitezin.at(4));

            //Create a pointer to citezin, add correct values from csv then push to vec.
            Citezin* newCit = new Citezin(currentCitezin.at(5), currentCitezin.at(1), currentCitezin.at(2),
                                          currentCitezin.at(3), currentCitezin.at(6), currentCitezin.at(8),
                                          currentCitezin.at(9), currentCitezin.at(10), currentCitezin.at(7),
                                          currentCitezin.at(13), currentCitezin.at(11), currentCitezin.at(12),
                                          currentCitezin.at(0), currentCitezin.at(14), currentCitezin.at(15),
                                          currentCitezin.at(30));


            newCit->setVaccineDetails(currentCitezin.at(16), currentCitezin.at(17), currentCitezin.at(18),
                                      currentCitezin.at(19), currentCitezin.at(20).toInt(), currentCitezin.at(21),
                                      currentCitezin.at(22), currentCitezin.at(24), currentCitezin.at(25),
                                      currentCitezin.at(23));

            newCit->setTestDetails(currentCitezin.at(26), currentCitezin.at(27), currentCitezin.at(34));

            newCit->setFileDetails(currentCitezin.at(28), currentCitezin.at(29), currentCitezin.at(31),
                    currentCitezin.at(32));

            //To output into debugger for unit testing.
            //qDebug() << QString(newCit->getUserPhotoFilepath());

            //Push current pointer to object to vector.
            citezinList.push_back(newCit);
        }
        in.flush();
        inputFile.close();
    }else{
        //If file doesn't exist throw an error.
        //QMessageBox::information(this, "Warning", "Can't load any users. File does not exist.");
    }
}



MainWindow::~MainWindow()
{
    for(int i = 0; i < citezinList.size(); i++){
        delete citezinList.at(i);
        citezinList[i] = nullptr;
    }
    delete ui;
}

