/********************************************************************************
** Form generated from reading UI file 'AddCoursePage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOURSEPAGE_H
#define UI_ADDCOURSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AddCoursePage
{
public:

    void setupUi(QDialog *AddCoursePage)
    {
        if (AddCoursePage->objectName().isEmpty())
            AddCoursePage->setObjectName("AddCoursePage");
        AddCoursePage->resize(400, 300);

        retranslateUi(AddCoursePage);

        QMetaObject::connectSlotsByName(AddCoursePage);
    } // setupUi

    void retranslateUi(QDialog *AddCoursePage)
    {
        AddCoursePage->setWindowTitle(QCoreApplication::translate("AddCoursePage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCoursePage: public Ui_AddCoursePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSEPAGE_H
