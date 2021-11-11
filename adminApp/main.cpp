#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.hide();


    QMessageBox msgbx;
    LoginDialog Login;
    Login.setModal(true);

    if (Login.exec()!=QDialog::Accepted)
    {
        msgbx.setText("Wrong credentials. The program will stop.");
        msgbx.exec();
        a.quit();
    }
    else
    {
        msgbx.setText("Correct, welcome.");
        msgbx.exec();
        w.show();
        a.exec();
    }


    return 0;

}
