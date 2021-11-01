#include "citezindetaildialog.h"
#include "ui_citezindetaildialog.h"

#include <QMessageBox>
#include <QDialog>
#include <QFileDialog>
#include <QDir>


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
    //Obtain all user information for Citezin Constructor.
    //local var


}


void citezinDetailDialog::loadCitezinDetailsImage(){

}


citezinDetailDialog::~citezinDetailDialog()
{
    delete ui;
}
