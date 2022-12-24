/********************************************************************************
** Form generated from reading UI file 'ProfessorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSORPAGE_H
#define UI_PROFESSORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ProfessorPage
{
public:

    void setupUi(QDialog *ProfessorPage)
    {
        if (ProfessorPage->objectName().isEmpty())
            ProfessorPage->setObjectName("ProfessorPage");
        ProfessorPage->resize(400, 300);

        retranslateUi(ProfessorPage);

        QMetaObject::connectSlotsByName(ProfessorPage);
    } // setupUi

    void retranslateUi(QDialog *ProfessorPage)
    {
        ProfessorPage->setWindowTitle(QCoreApplication::translate("ProfessorPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfessorPage: public Ui_ProfessorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORPAGE_H
