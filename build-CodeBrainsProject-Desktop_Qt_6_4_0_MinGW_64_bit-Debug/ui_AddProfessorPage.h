/********************************************************************************
** Form generated from reading UI file 'AddProfessorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROFESSORPAGE_H
#define UI_ADDPROFESSORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AddProfessorPage
{
public:

    void setupUi(QDialog *AddProfessorPage)
    {
        if (AddProfessorPage->objectName().isEmpty())
            AddProfessorPage->setObjectName("AddProfessorPage");
        AddProfessorPage->resize(400, 300);

        retranslateUi(AddProfessorPage);

        QMetaObject::connectSlotsByName(AddProfessorPage);
    } // setupUi

    void retranslateUi(QDialog *AddProfessorPage)
    {
        AddProfessorPage->setWindowTitle(QCoreApplication::translate("AddProfessorPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProfessorPage: public Ui_AddProfessorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROFESSORPAGE_H
