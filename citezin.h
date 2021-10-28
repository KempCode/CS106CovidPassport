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
    int postCode;
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
    bool fullyVaccinated;
    QString covidVaccineNumber;
    QString timeOfBooster;
    QString covidTestDate;
    QString covidTestResult;
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
    QString phoneNumber, QString email, QString streetAddress, int postcode,
    QString nhi, QString clinicName, QString clinicAddress);

    void setVaccineDetails(QString vaccineName, QString batchNumber1, QString batchNumber2,
    QString batchNumber3, int numberOfDoses, QString timeOfFirstVaccine, QString timeOfSecondVaccine,
    bool fullyVaccinated, QString covidVaccineNumber, QString timeOfBooster);

    void setTestDetails(QString covidTestDate, QString covidTestResult);

    void setFileDetails(QString userPhotoFilepath, QString userDocumentFilePath,
    QString userDetailsFilePath, QString userQRFilepath, QString testResultFilePath);

    QString getPassword();
    QString getFirstName();
    QString getMiddleName();
    QString getLastName();
    QString getDOB();
    QString getPhoneNumber();
    QString getEthnicity();
    QString getNationality();
    QString getGender();
    QString getStreetAddress();
    int getPostcode();

    QString getEmail();
    QString getNHINumber();
    QString getClinicName();
    QString getClinicAddress();
    QString getVaccineName();
    QString getBatchNumber1();
    QString getBatchNumber2();
    QString getBatchNumber3();

    int getNumberOfDoses();
    QString getTimeOfFirstVaccine();
    QString getTimeOfSecondVaccine();
    QString getTimeOfBooster();
    bool getFullyVaccinated();

    QString getCovidVaccineNumber();
    QString getCovidTestDate();
    QString getCovidTestResult();

    //File Getters.
    QString getUserPhotoFilepath();
    QString getUserDocumentFilePath();
    QString getUserDetailsFilePath();
    QString getUserQRFilepath();
    QString getCertificateFilepath();
    QString getTestResultFilePath();
    QString getReportIssuesFilepath();

};

#endif // CITEZIN_H
