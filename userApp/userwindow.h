#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <citezin.h>

namespace Ui {
class UserWindow;
}
class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QString nhi, QWidget *parent = nullptr);
    ~UserWindow();

private slots:
    void on_actionReport_Issue_triggered();
    void logout();
   //void on_actionView_Certificate_triggered();

    //void on_actionLogout_triggered();


   // void on_Bview_clicked();

private:
    Ui::UserWindow *ui;
    QString nhi;

};

#endif // USERWINDOW_H
