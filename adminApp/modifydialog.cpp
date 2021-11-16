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

    ui->vaccineNameLabel->setText(newCitezin->getVaccineName());
    ui->vaccineNumber->setText(newCitezin->getCovidVaccineNumber());

    //Fill in vaccine 1 2 and 3 details.
    qDebug() << newCitezin->getDateOfFirstVaccine();
    QDate vacDate1 = QDate::fromString(newCitezin->getDateOfFirstVaccine().trimmed(),"dd:MM:yyyy");
    ui->dateOfFirstVaccine->setDate(vacDate1);
    ui->batchNumber1->setText(newCitezin->getBatchNumber1());
    //2
    QDate vacDate2 = QDate::fromString(newCitezin->getDateOfSecondVaccine().trimmed(),"dd:MM:yyyy");
    ui->dateOfSecondVaccine->setDate(vacDate2);
    ui->batchNumber2->setText(newCitezin->getBatchNumber2());
    //3
    QDate vacDate3 = QDate::fromString(newCitezin->getDateOfBooster().trimmed(),"dd:MM:yyyy");
    ui->dateOfThirdVaccine->setDate(vacDate3);
    ui->batchNumber3->setText(newCitezin->getBatchNumber3());



    //Lockout all typing. Unlock elements after using same logic as detail dialog.

    //Hide items in vaccine menu. / Make not editable until valid.
    ui->vaccineNameEdit->setReadOnly(true);
    ui->vaccineNumber->setReadOnly(true);
    ui->dateOfFirstVaccine->setReadOnly(true);
    ui->batchNumber1->setReadOnly(true);
    ui->dateOfSecondVaccine->setReadOnly(true);
    ui->batchNumber2->setReadOnly(true);
    ui->dateOfThirdVaccine->setReadOnly(true);
    ui->batchNumber3->setReadOnly(true);

    //If Admin clicks one vaccine, it will retreive details for only one etc.


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


            newCitezin->setVaccineDetails(vaccineName, batchNo1, "", "", 1, timeText,
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

            newCitezin->setVaccineDetails(vaccineName, batchNo1, batchNo2, "", 2, timeText,
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

            newCitezin->setVaccineDetails(vaccineName, batchNo1, batchNo2, batchNo3, 3, timeText,
                                  secondTimeText, "Fully Vaccinated", vaccineNumber,
                                  thirdTimeText, dateOfFirstVacText, dateOfSecVacText, dateOfThirdVacText);

        }else{
            //it is == 0, citezin is unvaccinated.
            newCitezin->setVaccineDetails("", "", "", "", 0, "",
                                  "", "Not Fully Vaccinated", "", "", "", "", "");
        }



    //Load Vaccine Certificate
    //Set Covid Test details.
    //Load Covid Test Document.
    //Modify item in vector.


}




void ModifyDialog::on_vac1Radio_clicked()
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


void ModifyDialog::on_vac2Radio_clicked()
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


void ModifyDialog::on_vac3Radio_clicked()
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




