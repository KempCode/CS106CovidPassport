/********************************************************************************
** Form generated from reading UI file 'issue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUE_H
#define UI_ISSUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Issue
{
public:

    void setupUi(QDialog *Issue)
    {
        if (Issue->objectName().isEmpty())
            Issue->setObjectName(QString::fromUtf8("Issue"));
        Issue->resize(400, 300);

        retranslateUi(Issue);

        QMetaObject::connectSlotsByName(Issue);
    } // setupUi

    void retranslateUi(QDialog *Issue)
    {
        Issue->setWindowTitle(QApplication::translate("Issue", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Issue: public Ui_Issue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUE_H
