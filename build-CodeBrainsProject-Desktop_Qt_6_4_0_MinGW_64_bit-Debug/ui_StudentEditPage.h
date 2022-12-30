/********************************************************************************
** Form generated from reading UI file 'StudentEditPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTEDITPAGE_H
#define UI_STUDENTEDITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentEditPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *FLNameLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_16;
    QLineEdit *phoneLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLineEdit *emailLineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *coursecomboBox;
    QTableWidget *studentTableInfo;
    QPushButton *savePushButton;

    void setupUi(QDialog *StudentEditPage)
    {
        if (StudentEditPage->objectName().isEmpty())
            StudentEditPage->setObjectName("StudentEditPage");
        StudentEditPage->resize(541, 573);
        verticalLayout_2 = new QVBoxLayout(StudentEditPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        FLNameLabel = new QLabel(StudentEditPage);
        FLNameLabel->setObjectName("FLNameLabel");
        QFont font;
        font.setPointSize(22);
        FLNameLabel->setFont(font);
        FLNameLabel->setFrameShape(QFrame::StyledPanel);

        verticalLayout_2->addWidget(FLNameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(StudentEditPage);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(label_3);

        nameLineEdit = new QLineEdit(StudentEditPage);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout->addWidget(nameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_16 = new QLabel(StudentEditPage);
        label_16->setObjectName("label_16");
        label_16->setFont(font1);
        label_16->setFrameShape(QFrame::NoFrame);

        horizontalLayout_5->addWidget(label_16);

        phoneLineEdit = new QLineEdit(StudentEditPage);
        phoneLineEdit->setObjectName("phoneLineEdit");

        horizontalLayout_5->addWidget(phoneLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_18 = new QLabel(StudentEditPage);
        label_18->setObjectName("label_18");
        label_18->setFont(font1);
        label_18->setFrameShape(QFrame::NoFrame);

        horizontalLayout_7->addWidget(label_18);

        idLineEdit = new QLineEdit(StudentEditPage);
        idLineEdit->setObjectName("idLineEdit");

        horizontalLayout_7->addWidget(idLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_12 = new QLabel(StudentEditPage);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);
        label_12->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(label_12);

        emailLineEdit = new QLineEdit(StudentEditPage);
        emailLineEdit->setObjectName("emailLineEdit");

        horizontalLayout_3->addWidget(emailLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(StudentEditPage);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(label_6);

        coursecomboBox = new QComboBox(StudentEditPage);
        coursecomboBox->setObjectName("coursecomboBox");

        horizontalLayout_2->addWidget(coursecomboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        studentTableInfo = new QTableWidget(StudentEditPage);
        studentTableInfo->setObjectName("studentTableInfo");

        verticalLayout->addWidget(studentTableInfo);


        verticalLayout_2->addLayout(verticalLayout);

        savePushButton = new QPushButton(StudentEditPage);
        savePushButton->setObjectName("savePushButton");

        verticalLayout_2->addWidget(savePushButton);


        retranslateUi(StudentEditPage);

        QMetaObject::connectSlotsByName(StudentEditPage);
    } // setupUi

    void retranslateUi(QDialog *StudentEditPage)
    {
        StudentEditPage->setWindowTitle(QCoreApplication::translate("StudentEditPage", "Dialog", nullptr));
        FLNameLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("StudentEditPage", "Name", nullptr));
        label_16->setText(QCoreApplication::translate("StudentEditPage", "Phone", nullptr));
        label_18->setText(QCoreApplication::translate("StudentEditPage", "ID", nullptr));
        label_12->setText(QCoreApplication::translate("StudentEditPage", "E-mail", nullptr));
        label_6->setText(QCoreApplication::translate("StudentEditPage", "Course:", nullptr));
        savePushButton->setText(QCoreApplication::translate("StudentEditPage", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentEditPage: public Ui_StudentEditPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTEDITPAGE_H
