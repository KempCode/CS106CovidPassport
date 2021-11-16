#include <QString>
#ifndef CITEZIN_H
#define CITEZIN_H

class Citezin
{
private:
    QString firstName;
    QString password;
    QString middleName;
    QString lastName;
    QString DOB;
    QString ethnicity;
    QString nationality;
    QString gender;
    QString phoneNumber;
    QString email;
    QString streetAddress;
    QString postCode;
    QString NHINumber;
    QString clinicName;
    QString clinicAddress;
    QString vaccineName;
    QString batchNumber1;
    QString batchNumber2;
    QString batchNumber3;
    int numberOfDoses;
    QString timeOfFirstVaccine;
    QString timeOfSecondVaccine;

    QString dateOfFirstVaccine;
    QString dateOfSecondVaccine;
    QString dateOfBooster;

    QString fullyVaccinated;
    QString covidVaccineNumber;
    QString timeOfBooster;
    QString covidTestDate;
    QString covidTestResult;
    QString strainOfVirus;
    //Files.
    QString userPhotoFilepath;
    QString userDocumentFilePath;
    QString userDetailsFilePath;
    QString userQRFilepath;
    QString testResultFilePath;
    QString reportIssuesFilepath;


public:
    //Citezin();
    Citezin(QString password, QString first, QString middle, QString last,
    QString dob, QString ethnicity, QString nationality, QString gender,
    QString phoneNumber, QString email, QString streetAddress, QString postcode,
    QString nhi, QString clinicName, QString clinicAddress, QString userDetailsFilePath);

    void setVaccineDetails(QString vaccineName, QString batchNumber1, QString batchNumber2,
    QString batchNumber3, int numberOfDoses, QString timeOfFirstVaccine, QString timeOfSecondVaccine,
    QString fullyVaccinated, QString covidVaccineNumber, QString timeOfBooster, QString dateOfFirstVaccine,
    QString dateOfSecondVaccine, QString dateOfBooster);

    void setTestDetails(QString covidTestDate, QString covidTestResult, QString strainOfVirus);

    void setFileDetails(QString userPhotoFilepath, QString userDocumentFilePath,
                        QString userQRFilepath, QString testResultFilePath);

    QString getPassword();
    QString getFirstName();
    QString getMiddleName();
    QString getLastName();
    QString getName();
    QString getDOB();
    QString getPhoneNumber();
    QString getEthnicity();
    QString getNationality();
    QString getGender();
    QString getStreetAddress();
    QString getPostcode();

    QString getEmail();
    QString getNHINumber();
    QString getClinicName();
    QString getClinicAddress();
    QString getVaccineName();
    QString getBatchNumber1();
    QString getBatchNumber2();
    QString getBatchNumber3();
    QString getStrainOfVirus();

    int getNumberOfDoses();
    QString getTimeOfFirstVaccine();
    QString getTimeOfSecondVaccine();
    QString getTimeOfBooster();

    QString getDateOfFirstVaccine();
    QString getDateOfSecondVaccine();
    QString getDateOfBooster();

    QString getFullyVaccinated();

    QString getCovidVaccineNumber();
    QString getCovidTestDate();
    QString getCovidTestResult();

    //File Getters.
    QString getUserPhotoFilepath();
    QString getUserDocumentFilePath();
    QString getUserDetailsFilePath();
    QString getUserQRFilepath();
    QString getTestResultFilePath();
    QString getReportIssuesFilepath();

};

#endif // CITEZIN_H
