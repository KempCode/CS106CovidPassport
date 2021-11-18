#include "userwindow.h"
#include "ui_userwindow.h"
#include "citezin.h"
#include "citezinreportissuedialog.h"

#include "logindialog.h"
#include <QFile>
#include <QDialog>
#include <QTextStream>
#include <QString>
#include <QFileInfo>
#include <QDebug>
#include <QFileDialog>

UserWindow::UserWindow(QString nhi, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{

    ui->setupUi(this);
    //n_Bview_clicked();
    QGroupBox theBox;
    theBox.setFlat(true);
    theBox.setStyleSheet("border:0;");

    connect (ui->actionReport_Issue, &QAction::triggered,this,&UserWindow::on_actionReport_Issue_triggered);

    connect (ui->actionLogout, &QAction::triggered,this,&UserWindow::logout);


    //Load in the user with a function.
    this->nhi = nhi;


    QString fileName(":/res/images/citezins.txt");




    if(QFileInfo::exists(fileName))
    {
        //checking if file exists for reading
        QFile inputFile(fileName);
        inputFile.open(QIODevice::ReadOnly|QIODevice::Text);

        QTextStream in(&inputFile);
        while(!in.atEnd())
        {
            //Loop until the end of the file.
            //Read in and populate lstCitezins, and citezinList vector from csv.
            //Extract each column name before , using split, save in QStringList.

            QString line = in.readLine();
            QStringList currentCitezin = line.split(",");
            //NHI

            QString VI_1x =currentCitezin.at(14);
            QString VI_2x =currentCitezin.at(15);
            QString VI_3x =currentCitezin.at(16);
            QString VI_4x =currentCitezin.at(21);
            QString VI_5x =currentCitezin.at(17);
            QString VI_6x =currentCitezin.at(22);
            QString VI_7x =currentCitezin.at(18);
            QString VI_8x =currentCitezin.at(23);
             QString VI_9x =currentCitezin.at(19);

              QString TR_1x =currentCitezin.at(26);
               QString TR_2x =currentCitezin.at(27);
                QString TR_3x =currentCitezin.at(26);//strain of virus

            QString PI_1x =currentCitezin.at(1);
             QString PI_2x =currentCitezin.at(3);
              QString PI_3x =currentCitezin.at(2);
               QString PI_4x =currentCitezin.at(6);
                QString PI_5x =currentCitezin.at(8);
                 QString PI_6x =currentCitezin.at(10);
                 QString citNHI = currentCitezin.at(0);

                   QString PI_8x =currentCitezin.at(13);
                    QString PI_9x =currentCitezin.at(11);
                     QString PI_10x =currentCitezin.at(12);
                      QString PI_11x =currentCitezin.at(7);

                      QString userDetailsImagex=currentCitezin.at(29);
                      QString vaccineCertImagex=currentCitezin.at(30);
                       QString covid=currentCitezin.at(31);
                       QString testDocImagex=currentCitezin.at(32);




            if (nhi ==citNHI)
            {
 //userDetailsImage
                //B
                   //QPixmap(":res/images/" + userDetailsImagex);
                 qDebug() << userDetailsImagex;
                 QString f = userDetailsImagex;
                 int lastSlash = f.lastIndexOf("/");
                 QString  s = f.right(f.size()-lastSlash-1);
qDebug() << s;
                 QPixmap pixmap1(":res/images/"+s);

                ui->userDetailsImage->setPixmap(pixmap1);
                ui->userDetailsImage->setScaledContents(true);

//vaccineCertImage
               QString filename1 = vaccineCertImagex;
                int lastSlash1 = filename1.lastIndexOf("/");
               QString shortname1 = filename1.right(filename1.size()-lastSlash1-1);

               QPixmap pixmap2(":res/images/" +shortname1);

              ui->vaccineCertImage->setPixmap(pixmap2);
              ui->vaccineCertImage->setScaledContents(true);
//testDocImage
            QString filename2 = testDocImagex;
             int lastSlash2 = filename2.lastIndexOf("/");
               QString shortname2 = filename2.right(filename2.size()-lastSlash2-1);
              QPixmap pixmap3(":res/images/" +shortname2);

             ui->testDocImage->setPixmap(pixmap3);
              ui->testDocImage->setScaledContents(true);
//QRCODE
             QString filename3 = covid;
              int lastSlash3 = filename3.lastIndexOf("/");
             QString shortname3 = filename3.right(filename3.size()-lastSlash3-1);

              QPixmap pixmap4(":res/images/" +shortname3);

            ui->covid->setPixmap(pixmap4);
            ui->covid_2->setPixmap(pixmap4);
             ui->covid->setScaledContents(true);
             ui->covid_2->setScaledContents(true);



/*
                ui->userDetailsImage->setPixmap(userDetailsImagex);
                ui->vaccineCertImage->setPixmap(vaccineCertImagex);
                ui->testDocImage->setPixmap(testDocImagex);
                ui->covid->setPixmap(covid);

*/
               ui->VI_1->setText(VI_1x);
               ui->VI_2->setText(VI_2x);
               ui->VI_3->setText(VI_3x);
               ui->VI_4->setText(VI_4x);//date of first vaccine
               ui->VI_5->setText(VI_5x);
               ui->VI_6->setText(VI_6x);
               ui->VI_7->setText(VI_7x);
               ui->VI_8->setText(VI_8x);
               ui->VI_9->setText(VI_9x);

               ui->TR_1->setText(TR_1x);
               ui->TR_2->setText(TR_2x);
               ui->TR_3->setText(TR_3x);

               ui->LPI_1->setText(PI_1x);
               ui->LPI_2->setText(PI_2x);
               ui->LPI_3->setText(PI_3x);
               ui->LPI_4->setText(PI_4x);
               ui->LPI_5->setText(PI_5x);
               ui->LPI_6->setText(PI_6x);
               ui->LPI_7->setText(citNHI);
               ui->LPI_8->setText(PI_8x);
               ui->LPI_9->setText(PI_9x);
               ui->LPI_10->setText(PI_10x);
               ui->LPI_11->setText(PI_11x);

               ui->CPI_6->setText(PI_3x);
               ui->CPI_7->setText(PI_1x);
               ui->CPI_8->setText(PI_4x);
               ui->CPI_9->setText(citNHI);
               ui->CPI_10->setText("20/12/2023");
               ui->CVI_7->setText(PI_3x);
               ui->CVI_8->setText(VI_5x);
               ui->CVI_9->setText(VI_7x);


            }
        }
        in.flush();
               inputFile.close();
    }

}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::on_actionReport_Issue_triggered()
{

    citezinReportIssueDialog issue(nhi,nullptr);
    issue.setModal(true);
    issue.exec();
}




void UserWindow::logout()
{



   this->close();
   LoginDialog login;
   login.setModal(true);
}

