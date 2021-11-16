#include "modifydialog.h"
#include "ui_modifydialog.h"
#include "citezin.h"

#include <QMessageBox>
#include <QDialog>
#include <QFileDialog>
#include <QDir>
#include <QVector>
#include <QDebug>


ModifyDialog::ModifyDialog(Citezin*& newCitezin, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyDialog)
{
    ui->setupUi(this);
    //Load in all user Details.
    //Load in all selected citezins details .
    ui->firstNameEdit->setText(newCitezin->getFirstName());
    ui->middleNameEdit->setText(newCitezin->getMiddleName());
    ui->lastNameEdit->setText(newCitezin->getLastName());
    QString dob = newCitezin->getDOB();
    QDate birthDate = QDate::fromString(dob,"dd:MM:yyyy");
    ui->dateEdit->setDate(birthDate);

    ui->nationalityEdit->setText(newCitezin->getNationality());
    ui->genderEdit->setText(newCitezin->getGender());
    ui->phoneNumberEdit->setText(newCitezin->getPhoneNumber());
    ui->emailEdit->setText(newCitezin->getEmail());
    ui->addressEdit->setText(newCitezin->getStreetAddress());
    ui->postCodeEdit->setText(newCitezin->getPostcode());
    ui->ethnicityEdit->setText(newCitezin->getEthnicity());
    ui->nhiEdit->setText(newCitezin->getNHINumber());
    ui->clinicNameEdit->setText(newCitezin->getClinicName());
    ui->clinicAddressEdit->setText(newCitezin->getClinicAddress());

    //Load User Details Document.
    QPixmap pixmap(newCitezin->getUserDetailsFilePath().trimmed());
    ui->userDetailsImage->setPixmap(pixmap);
    ui->userDetailsImage->setScaledContents(true);

    //Set vaccination Details.





    //fill in all details/
    //then let user click how many, wipe those not needed. fill in needed. / allow update.





    //Load Vaccine Certificate
    //Set Covid Test details.
    //Load Covid Test Document.
    //delete item from vector.


}



void ModifyDialog::loadCitezinDetailsImage(){

}
void ModifyDialog::loadCitezinVaccineImage(){

}
void ModifyDialog::loadCitezinTestImage(){

}



ModifyDialog::~ModifyDialog()
{
    delete ui;
}
