#ifndef CITEZINDOCDIALOG_H
#define CITEZINDOCDIALOG_H

#include <QDialog>

namespace Ui {
class citezinDocDialog;
}

class citezinDocDialog : public QDialog
{
    Q_OBJECT

public:
    explicit citezinDocDialog(QWidget *parent = nullptr);
    ~citezinDocDialog();

private:
    Ui::citezinDocDialog *ui;
};

#endif // CITEZINDOCDIALOG_H
