/********************************************************************************
** Form generated from reading UI file 'StudentPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPAGE_H
#define UI_STUDENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_StudentPage
{
public:

    void setupUi(QDialog *StudentPage)
    {
        if (StudentPage->objectName().isEmpty())
            StudentPage->setObjectName("StudentPage");
        StudentPage->resize(400, 300);

        retranslateUi(StudentPage);

        QMetaObject::connectSlotsByName(StudentPage);
    } // setupUi

    void retranslateUi(QDialog *StudentPage)
    {
        StudentPage->setWindowTitle(QCoreApplication::translate("StudentPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentPage: public Ui_StudentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPAGE_H
