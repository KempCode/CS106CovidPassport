#ifndef CITEZINDOC_H
#define CITEZINDOC_H

#include <QMainWindow>

namespace Ui {
class CitezinDoc;
}

class CitezinDoc : public QMainWindow
{
    Q_OBJECT

public:
    explicit CitezinDoc(QWidget *parent = nullptr);
    ~CitezinDoc();

private:
    Ui::CitezinDoc *ui;
};

#endif // CITEZINDOC_H
