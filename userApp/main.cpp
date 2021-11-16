#include "userwindow.h"
#include "logindialog.h"
#include <QApplication>
#include <QMessageBox>
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
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
        UserWindow w(Login.localNHI, nullptr);
        w.show();
        a.exec();
    }


    return 0;

}
