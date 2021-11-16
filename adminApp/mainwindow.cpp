#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "citezin.h"
#include "modifydialog.h"
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

    connect(ui->actionModify_User, &QAction::triggered,
            this, &MainWindow::editUser);

    connect(ui->lstCitezins, &QListWidget::itemClicked,this,&MainWindow::userClicked);
    connect(ui->BSearch, &QPushButton::clicked,this, &MainWindow::searchUser);
    connect(ui->Bremove, &QPushButton::clicked,this, &MainWindow::removeUser);



}
void MainWindow::editUser()
{
    int index = ui->lstCitezins->currentRow();

    if (index != -1)
    {
        Citezin* currentUser = citezinList.at(index);

        if ( currentUser!= nullptr)
        {
           ModifyDialog updateItemDialog(currentUser, nullptr);
           updateItemDialog.exec();

//            //make sure UI is updated
//            ui->lblProductName->setText(currentUser->getName());
//            ui->lblQuantity->setText(QString::number(currentUser->getQuantity()));

//            QPixmap pixmap(currentUser->getImageFilePath());
//            ui->lblImage->setPixmap(pixmap);
//            ui->lblImage->setScaledContents(true);
        }//end inner if
    }//end if


}
void MainWindow::removeUser()
{
int index = ui->lstCitezins->currentRow();
if (index >= 0)
{
    //remove from vector
    Citezin* user = citezinList.at(index);
    delete user;
    citezinList.removeAt(index);

    delete ui->lstCitezins->currentItem();
}
    ui->VI_1->setText("");
    ui->VI_2->setText("");
    ui->VI_3->setText("");
    ui->VI_4->setText("");//date of first vaccine
    ui->VI_5->setText("");
    ui->VI_6->setText("");
    ui->VI_7->setText("");
    ui->VI_8->setText("");
    ui->VI_9->setText("");

    ui->TR_1->setText("");
    ui->TR_2->setText("");
    ui->TR_3->setText("");

    ui->LPI_1->setText("");
    ui->LPI_2->setText("");
    ui->LPI_3->setText("");
    ui->LPI_4->setText("");
    ui->LPI_5->setText("");
    ui->LPI_6->setText("");
    ui->LPI_7->setText("");
    ui->LPI_8->setText("");
    ui->LPI_9->setText("");
    ui->LPI_10->setText("");
    ui->LPI_11->setText("");
    ui->LPI_12->setText("");
    ui->LPI_13->setText("");

}

   void MainWindow::searchUser()
   {
       QString search=ui->LSearch->text();
       if(search!="")
       {
           for(int i = 0; i <ui->lstCitezins->count();i++)
           {
               QListWidgetItem* citezin = ui->lstCitezins->item(i);
               citezin->setBackground(Qt::white);
           }
           QList<QListWidgetItem *> list = ui->lstCitezins->findItems(search,Qt::MatchContains);
           //for ( QListWidgetItem *item : list)
           for (int i=0; i<list.count(); i++)
           {
               QListWidgetItem* item = list.at(i);
               item->setBackground(Qt::red);
           }
       }
       else
       {
           for(int i = 0; i < ui->lstCitezins->count(); i++)
           {
               QListWidgetItem* item = ui->lstCitezins->item(i);
               item->setBackground(Qt::white);
           }
       }
   }

void MainWindow::userClicked()
{
    int index= ui->lstCitezins->currentRow();

    if(index!= -1)
    {
         Citezin *newCit = citezinList.at(index);


         ui->VI_1->setText(newCit->getClinicName());
         ui->VI_2->setText(newCit->getClinicAddress());
         ui->VI_3->setText(newCit->getVaccineName());
         ui->VI_4->setText(newCit->getDateOfFirstVaccine());//date of first vaccine
         ui->VI_5->setText(newCit->getBatchNumber1());
         ui->VI_6->setText(newCit->getDateOfSecondVaccine());
         ui->VI_7->setText(newCit->getBatchNumber2());
         ui->VI_8->setText(newCit->getDateOfBooster());
         ui->VI_9->setText(newCit->getBatchNumber3());

         ui->TR_1->setText(newCit->getCovidTestDate());
         ui->TR_2->setText(newCit->getCovidTestResult());
         ui->TR_3->setText(newCit->getStrainOfVirus());

         ui->LPI_1->setText(newCit->getFirstName());
         ui->LPI_2->setText(newCit->getMiddleName());
         ui->LPI_3->setText(newCit->getLastName());
         ui->LPI_4->setText(newCit->getDOB());
         ui->LPI_5->setText(newCit->getEthnicity());
         ui->LPI_6->setText(newCit->getGender());
         ui->LPI_7->setText(newCit->getNHINumber());
         ui->LPI_8->setText(newCit->getEmail());
         ui->LPI_9->setText(newCit->getStreetAddress());
         ui->LPI_10->setText(newCit->getPostcode());
         ui->LPI_11->setText(newCit->getPhoneNumber());
         ui->LPI_12->setText(newCit->getNationality());
         ui->LPI_13->setText(newCit->getPhoneNumber());


    }

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

    QFile outputFile("./citezins.txt");
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
        out << citezinList.at(i)->getDateOfFirstVaccine();
        out << ", ";
        out << citezinList.at(i)->getDateOfSecondVaccine();
        out << ", ";
        out << citezinList.at(i)->getDateOfBooster();
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
        out << ", ";
        //add vaccine times in.
        out << citezinList.at(i)->getTimeOfFirstVaccine(); //35
        out << ", ";
        out << citezinList.at(i)->getTimeOfSecondVaccine();
        out << ", ";
        out << citezinList.at(i)->getTimeOfBooster();
        out << "\n";
    }

    //Close File Handles.
    out.flush();
    outputFile.close();

}

void MainWindow::loadCitezins(){
    //Load all of the citezins in on click of the File > Load Button.
    QString fileName("./citezins.txt");


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
                                      currentCitezin.at(19), currentCitezin.at(20).toInt(), currentCitezin.at(35),
                                      currentCitezin.at(36), currentCitezin.at(24), currentCitezin.at(25),
                                      currentCitezin.at(37), currentCitezin.at(21), currentCitezin.at(22), currentCitezin.at(23));

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
    citezinList.clear();
    delete ui;

}

