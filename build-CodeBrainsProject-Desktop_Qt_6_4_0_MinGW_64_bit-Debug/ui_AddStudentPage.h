/********************************************************************************
** Form generated from reading UI file 'AddStudentPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTPAGE_H
#define UI_ADDSTUDENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AddStudentPage
{
public:

    void setupUi(QDialog *AddStudentPage)
    {
        if (AddStudentPage->objectName().isEmpty())
            AddStudentPage->setObjectName("AddStudentPage");
        AddStudentPage->resize(400, 300);

        retranslateUi(AddStudentPage);

        QMetaObject::connectSlotsByName(AddStudentPage);
    } // setupUi

    void retranslateUi(QDialog *AddStudentPage)
    {
        AddStudentPage->setWindowTitle(QCoreApplication::translate("AddStudentPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentPage: public Ui_AddStudentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTPAGE_H
