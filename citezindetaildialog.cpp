#include "citezindetaildialog.h"
#include "ui_citezindetaildialog.h"


#include <QMessageBox>
#include <QDialog>
#include <QFileDialog>
#include <QDir>
#include <QVector>




citezinDetailDialog::citezinDetailDialog(Citezin*& newCitezin, QWidget *parent) :

    ui(new Ui::citezinDetailDialog)
{
    ui->setupUi(this);
    //Main Constructor for adding Citezin Details.


    //Initialise new Citezin with null pointer to add data using this item
    this->newCitezin = &newCitezin;
    QString imageFilePath;

    //Manually doing signals and slots.
    connect(ui->continueButton, &QPushButton::clicked,
            this, &citezinDetailDialog::addCitezinDetails);

    connect(ui->uploadButton, &QPushButton::clicked,
            this, &citezinDetailDialog::loadCitezinDetailsImage);


    //Initialise QDirectory
    //All images you upload have to go into ./images.
    QDir pathDir("./images");
    if(!pathDir.exists()){
        //If path doesn't exist already, specify it in constructor.
        QDir().mkdir("./images");
    }
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
          *newCitezin = new Citezin("password123", firstName, middleName, lastName, dobText, ethnicty, nationality,
                    gender, phoneNumber, email, address, postCode, NHI, clinicName, clinicAddress, imageFilePath);

        this->close();
        //Open vaccine dialog.

    }else{
        QMessageBox mb;
        mb.setText("You must enter valid user details!");
        mb.exec();
    }
}


void citezinDetailDialog::loadCitezinDetailsImage(){
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Open Image", "./",
                                             "Image File (*.png *jpg *jpeg)");
    if(filename != ""){
        int lastslash = filename.lastIndexOf("/");
        QString shortname = filename.right(filename.size() - lastslash - 1);

        QFile::copy(filename, "./images/" + shortname);
        QPixmap pixmap("./images/" + shortname);
        ui->userDetailsImage->setPixmap(pixmap);
        ui->userDetailsImage->setScaledContents(true);
        //save image filepath into data model.
        imageFilePath = "./images/" + shortname;
    }
}


void citezinDetailDialog::getVaccineDetails(){

}
void citezinDetailDialog::getTestDetails(){

}


citezinDetailDialog::~citezinDetailDialog()
{
    delete ui;
}
