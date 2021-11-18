#include "citezindetaildialog.h"
#include "ui_citezindetaildialog.h"

#include <QMessageBox>
#include <QDialog>
#include <QFileDialog>
#include <QDir>
#include <QVector>
#include <QDebug>


citezinDetailDialog::citezinDetailDialog(Citezin*& newCitezin, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinDetailDialog)
{
    ui->setupUi(this);
    //Main Constructor for adding Citezin Details.


    //Initialise new Citezin with null pointer to add data using this item
    this->newCitezin = &newCitezin;

    //Manually doing signals and slots.
    connect(ui->continueButton, &QPushButton::clicked,
            this, &citezinDetailDialog::addCitezinDetails);

    connect(ui->uploadButton, &QPushButton::clicked,
            this, &citezinDetailDialog::loadCitezinDetailsImage);

    connect(ui->uploadVacCertButton, &QPushButton::clicked,
            this, &citezinDetailDialog::loadCitezinVaccineImage);

    connect(ui->uploadTestDoc, &QPushButton::clicked,
            this, &citezinDetailDialog::loadCitezinTestImage);

    connect(ui->uploadQRButton, &QPushButton::clicked,
            this, &citezinDetailDialog::loadQRImage);

    //Initialise QDirectory
    //All images you upload have to go into ./images.
    QDir pathDir("./images");
    if(!pathDir.exists()){
        //If path doesn't exist already, specify it in constructor.
        QDir().mkdir("./images");
    }

    QDir pathDir2("./logs");
    if(!pathDir2.exists()){
        //If path doesn't exist already, specify it in constructor.
        QDir().mkdir("./logs");
    }

    //Hide items in vaccine menu. / Make not editable until valid.
    ui->vaccineNameEdit->setReadOnly(true);
    ui->vaccineNumber->setReadOnly(true);
    ui->dateOfFirstVaccine->setReadOnly(true);
    ui->batchNumber1->setReadOnly(true);
    ui->dateOfSecondVaccine->setReadOnly(true);
    ui->batchNumber2->setReadOnly(true);
    ui->dateOfThirdVaccine->setReadOnly(true);
    ui->batchNumber3->setReadOnly(true);
}

void citezinDetailDialog::addCitezinDetails(){
    //QVector<QString> citezinDetails;
    //Obtain all user information for Citezin Constructor.
    //local variables to collect user information.
    QString firstName = ui->firstNameEdit->text();
    QString middleName = ui->middleNameEdit->text();
    QString lastName = ui->lastNameEdit->text();

    QDate birthDate = ui->dateEdit->date();
    QString dobText = birthDate.toString("dd:MM:yyyy");

    QString nationality = ui->nationalityEdit->text();
    QString gender = ui->genderEdit->text();
    QString phoneNumber = ui->phoneNumberEdit->text();
    QString email = ui->emailEdit->text();
    QString address = ui->addressEdit->text();
    QString postCode = ui->postCodeEdit->text();
    QString ethnicty = ui->ethnicityEdit->text();

    QString NHI = ui->nhiEdit->text();
    QString clinicName = ui->clinicNameEdit->text();
    QString clinicAddress = ui->clinicAddressEdit->text();

    //Make sure no empty input fields.
    if(firstName.trimmed() != "" && middleName.trimmed() != "" && lastName.trimmed() != "" &&
            dobText.trimmed() != "" && nationality.trimmed() != "" && gender.trimmed() != "" &&
            phoneNumber.trimmed() != "" && email.trimmed() != "" && address.trimmed() != "" &&
            postCode.trimmed() != "" && ethnicty.trimmed() != "" && NHI.trimmed() != "" &&
                            clinicName.trimmed() != "" && clinicAddress.trimmed() != ""){

           //Construct a new Citezin..
          Citezin* c1 = new Citezin("password123", firstName, middleName, lastName, dobText, ethnicty, nationality,
                    gender, phoneNumber, email, address, postCode, NHI, clinicName, clinicAddress, imageFilePath);

          //Set Vacination details for the returned citezin pointer.
           c1 = getVaccineDetails(c1);
           c1 = getTestDetails(c1);
           //Set file path details.

           //Check for covid QR Passport.
           if(localCitezinVaccineNumber >= 2){
               //can keep qr image.
               c1->setFileDetails("",vaccineImageFilepath, qrImageFilepath, covidTestImageFilepath);
           }else{
               QMessageBox::information(this, "warning", "User hasn't had enough vaccines to have Covid Passport.");
               c1->setFileDetails("",vaccineImageFilepath, "", covidTestImageFilepath);
           }


          *newCitezin = c1;

          this->close();
        //Open vaccine dialog.


    }else{
        QMessageBox mb;
        mb.setText("You must enter valid user details!");
        mb.exec();
    }
}





Citezin* citezinDetailDialog::getVaccineDetails(Citezin* c1){
    //Validation tests for the Vaccination forms..
    /*If had vaccine one checked then:
     *  Display vaccine one, else keep hidden.
    */

    if(localCitezinVaccineNumber == 1){
        //Vaccine details
        QString vaccineName = ui->vaccineNameEdit->text();
        QString vaccineNumber = ui->vaccineNumber->text();

        //Vaccine details first batch
        QDate dateOfVac1 = ui->dateOfFirstVaccine->date();
        QString dateOfFirstVacText = dateOfVac1.toString("dd:MM:yyyy");

        //Add time to date
        QTime time = ui->dateOfFirstVaccine->time();
        QString timeText = time.toString("hh:mm:ss");

        QString batchNo1 = ui->batchNumber1->text();


        c1->setVaccineDetails(vaccineName, batchNo1, "", "", 1, timeText,
                              "", "Not Fully Vaccinated", vaccineNumber, "", dateOfFirstVacText, "", "");

    }else if( localCitezinVaccineNumber == 2){
        //Vaccine details
        QString vaccineName = ui->vaccineNameEdit->text();
        QString vaccineNumber = ui->vaccineNumber->text();

        //Vaccine date details first batch
        QDate dateOfVac1 = ui->dateOfFirstVaccine->date();
        QString dateOfFirstVacText = dateOfVac1.toString("dd:MM:yyyy");
        //Time of first batch
        QTime time = ui->dateOfFirstVaccine->time();
        QString timeText = time.toString("hh:mm:ss");

        //Batch Number 1
        QString batchNo1 = ui->batchNumber1->text();

        //Vaccine details second batch
        QDate dateOfVac2 = ui->dateOfSecondVaccine->date();
        QString dateOfSecVacText = dateOfVac2.toString("dd:MM:yyyy");
        //Time of second batch
        QTime secondTime = ui->dateOfSecondVaccine->time();
        QString secondTimeText = secondTime.toString("hh:mm:ss");

        //Batch Number 2
        QString batchNo2 = ui->batchNumber2->text();


        c1->setVaccineDetails(vaccineName, batchNo1, batchNo2, "", 2, timeText,
                              secondTimeText, "Fully Vaccinated", vaccineNumber, "", dateOfFirstVacText, dateOfSecVacText, "");

    }else if( localCitezinVaccineNumber == 3){
        //Vaccine details
        QString vaccineName = ui->vaccineNameEdit->text();
        QString vaccineNumber = ui->vaccineNumber->text();

        //Vaccine details first batch
        QDate dateOfVac1 = ui->dateOfFirstVaccine->date();
        QString dateOfFirstVacText = dateOfVac1.toString("dd:MM:yyyy");

        //Add time to date
        QTime time = ui->dateOfFirstVaccine->time();
        QString timeText = time.toString("hh:mm:ss");

        QString batchNo1 = ui->batchNumber1->text();


        //Vaccine details second batch
        QDate dateOfVac2 = ui->dateOfSecondVaccine->date();
        QString dateOfSecVacText = dateOfVac2.toString("dd:MM:yyyy");
        //Time of second batch
        QTime secondTime = ui->dateOfSecondVaccine->time();
        QString secondTimeText = secondTime.toString("hh:mm:ss");

        //BatchNumber2
        QString batchNo2 = ui->batchNumber2->text();

        //Vaccine details third batch
        QDate dateOfVac3 = ui->dateOfThirdVaccine->date();
        QString dateOfThirdVacText = dateOfVac3.toString("dd:MM:yyyy");

        //Time of third batch
        QTime thirdTime = ui->dateOfThirdVaccine->time();
        QString thirdTimeText = thirdTime.toString("hh:mm:ss");

        //Batch Number 3
        QString batchNo3 = ui->batchNumber3->text();

        c1->setVaccineDetails(vaccineName, batchNo1, batchNo2, batchNo3, 3, timeText,
                              secondTimeText, "Fully Vaccinated", vaccineNumber,
                              thirdTimeText, dateOfFirstVacText, dateOfSecVacText, dateOfThirdVacText);

    }else{
        //it is == 0, citezin is unvaccinated.
        c1->setVaccineDetails("", "", "", "", 0, "",
                              "", "Not Fully Vaccinated", "", "", "", "", "");


    }
    return c1;
}


void citezinDetailDialog::on_vac1Radio_clicked()
{
    //If Admin clicks First Vaccine, only enable relevant options
    if(ui->vac1Radio->isChecked()){
      ui->vac2Radio->setEnabled(false);
      ui->vac3Radio->setEnabled(false);
      ui->vaccineNameEdit->setReadOnly(false);
      ui->vaccineNumber->setReadOnly(false);
      ui->dateOfFirstVaccine->setReadOnly(false);
      ui->batchNumber1->setReadOnly(false);
      localCitezinVaccineNumber = 1;
    }
}

void citezinDetailDialog::on_vac2Radio_clicked()
{
    //If Admin clicks Second Vaccine, only enable relevant options
     ui->vac3Radio->setEnabled(false);
     ui->vac1Radio->setEnabled(false);
     ui->vaccineNameEdit->setReadOnly(false);
     ui->vaccineNumber->setReadOnly(false);
     ui->dateOfFirstVaccine->setReadOnly(false);
     ui->batchNumber1->setReadOnly(false);
     ui->dateOfSecondVaccine->setReadOnly(false);
     ui->batchNumber2->setReadOnly(false);
     localCitezinVaccineNumber = 2;
}

void citezinDetailDialog::on_vac3Radio_clicked()
{
    //If Admin clicks Third Vaccine, only enable relevant options
    ui->vac1Radio->setEnabled(false);
    ui->vac2Radio->setEnabled(false);
    ui->vaccineNameEdit->setReadOnly(false);
    ui->vaccineNumber->setReadOnly(false);
    ui->dateOfFirstVaccine->setReadOnly(false);
    ui->batchNumber1->setReadOnly(false);
    ui->dateOfSecondVaccine->setReadOnly(false);
    ui->batchNumber2->setReadOnly(false);
    ui->dateOfThirdVaccine->setReadOnly(false);
    ui->batchNumber3->setReadOnly(false);
    localCitezinVaccineNumber = 3;
}

void citezinDetailDialog::loadCitezinDetailsImage(){
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Open Image", "./",
                                             "Image File (*.png *jpg *jpeg)");
    //Open details certificate log file.
    QFile citLogFile("./logs/citezinDetailsLog.txt");
    citLogFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
    QTextStream out(&citLogFile);

    if(filename != ""){
        int lastslash = filename.lastIndexOf("/");
        QString shortname = filename.right(filename.size() - lastslash - 1);

        QFile::copy(filename, "./images/" + shortname);
        QPixmap pixmap("./images/" + shortname);
        ui->userDetailsImage->setPixmap(pixmap);
        ui->userDetailsImage->setScaledContents(true);
        //save image filepath into data model.
        imageFilePath = "./images/" + shortname;

        //Log the upload of the document
        out << "Date: ";
        out << QDate::currentDate().toString("dd:MM:yyyy");
        out << ", Time: ";
        out << QTime::currentTime().toString("hh:mm:ss");
        out << ", Citezin Details document location: ";
        out << imageFilePath;
        out << "\n";

    }

    //Close File Handles.
    out.flush();
    citLogFile.close();
}

void citezinDetailDialog::loadCitezinVaccineImage(){
    //Load in the Latest vaccine document
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Open Image", "./",
                                             "Image File (*.png *jpg *jpeg)");
    //Open vaccine certificate log file.
    QFile vaxlogFile("./logs/vaccineLog.txt");
    vaxlogFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
    QTextStream out(&vaxlogFile);


    if(filename != ""){
        int lastslash = filename.lastIndexOf("/");
        QString shortname = filename.right(filename.size() - lastslash - 1);

        QFile::copy(filename, "./images/" + shortname);
        QPixmap pixmap("./images/" + shortname);
        ui->vaccineCertImage->setPixmap(pixmap);
        ui->vaccineCertImage->setScaledContents(true);
        //save image filepath into data model.
        vaccineImageFilepath = "./images/" + shortname;

        //Log the upload of the document
        out << "Date: ";
        out << QDate::currentDate().toString("dd:MM:yyyy");
        out << ", Time: ";
        out << QTime::currentTime().toString("hh:mm:ss");
        out << ", Vaccine document location: ";
        out << vaccineImageFilepath;
        out << "\n";

    }
    //Close File Handles.
    out.flush();
    vaxlogFile.close();
}

Citezin* citezinDetailDialog::getTestDetails(Citezin* c1){
    /*If user has had a test, fill get filled out info.
     * Else use blank in public member function.
    */

    if(ui->covidPositive->isChecked() == false && ui->covidNegative->isChecked() == false){
        //If neither positve or negative clicked for covid test, every field is set empty.
        c1->setTestDetails("", testResult, "");
    }
    else if(ui->covidNegative->isChecked() == true){
        //If negative checked, strain of virus shouldn't be allowed
        QDate testDate = ui->covidTestDate->date();
        QString testDateText = testDate.toString("dd:MM:yyyy");


        //Set virus to empty string.
        QString strainOfVir = "";
         //Set details of test in data model.
        c1->setTestDetails(testDateText,testResult,strainOfVir);
        }
    else{
        //else set to input fields.
        QDate testDate = ui->covidTestDate->date();
        QString testDateText = testDate.toString("dd:MM:yyyy");

        QString strainOfVir = ui->strainOfVirus->text();
         //Set details of test in data model.
        c1->setTestDetails(testDateText,testResult,strainOfVir);
    }
    return c1;
}
void citezinDetailDialog::on_covidPositive_clicked()
{
    //Positive for Covid
    testResult = "true";
}

void citezinDetailDialog::on_covidNegative_clicked()
{
    //Negative covid test
    testResult = "false";
}

void citezinDetailDialog::loadCitezinTestImage(){
    //Load image of the Coronavirus testing document.
    //Load in the Latest vaccine document.
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Open Image", "./",
                                             "Image File (*.png *jpg *jpeg)");

    //Open test certificate log file.
    QFile testLogFile("./logs/testLog.txt");
    testLogFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
    QTextStream out(&testLogFile);

    if(filename != ""){
        int lastslash = filename.lastIndexOf("/");
        QString shortname = filename.right(filename.size() - lastslash - 1);

        QFile::copy(filename, "./images/" + shortname);
        QPixmap pixmap("./images/" + shortname);
        ui->testDocImage->setPixmap(pixmap);
        ui->testDocImage->setScaledContents(true);
        //save image filepath into data model.
        covidTestImageFilepath = "./images/" + shortname;

        //Log the upload of the document
        out << "Date: ";
        out << QDate::currentDate().toString("dd:MM:yyyy");
        out << ", Time: ";
        out << QTime::currentTime().toString("hh:mm:ss");
        out << ", Test document location: ";
        out << covidTestImageFilepath;
        out << "\n";
    }
    //Close File Handles.
    out.flush();
    testLogFile.close();
}

void citezinDetailDialog::loadQRImage(){
    //Load the QR code image in on button click
    QString qrFilename;
    qrFilename = QFileDialog::getOpenFileName(this, "Open Image", "./",
                                             "Image File (*.png *jpg *jpeg)");
    //Open QR certificate log file.
    QFile QRLogFile("./logs/QRLog.txt");
    QRLogFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
    QTextStream out(&QRLogFile);

    if(qrFilename != ""){
        int lastslash = qrFilename.lastIndexOf("/");
        QString shortname = qrFilename.right(qrFilename.size() - lastslash - 1);

        QFile::copy(qrFilename, "./images/" + shortname);
        QPixmap pixmap("./images/" + shortname);
        ui->QRImage->setPixmap(pixmap);
        ui->QRImage->setScaledContents(true);
        //save image filepath into data model.
        qrImageFilepath = "./images/" + shortname;

        //Log the upload of the document
        out << "Date: ";
        out << QDate::currentDate().toString("dd:MM:yyyy");
        out << ", Time: ";
        out << QTime::currentTime().toString("hh:mm:ss");
        out << ", Vaccine document location: ";
        out << qrImageFilepath;
        out << "\n";
    }
    //Close File Handles.
    out.flush();
    QRLogFile.close();
}



citezinDetailDialog::~citezinDetailDialog()
{
    delete ui;
}















