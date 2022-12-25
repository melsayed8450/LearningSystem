/********************************************************************************
** Form generated from reading UI file 'HomePage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *helloLabel;
    QPushButton *infoButton;
    QPushButton *logoutButton;
    QLabel *label;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *coursesButton;
    QPushButton *studentsButton;
    QPushButton *professorsButton;
    QMenuBar *menubar;
    QMenu *menuAdmin_Panel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(800, 600);
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        helloLabel = new QLabel(widget);
        helloLabel->setObjectName("helloLabel");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        helloLabel->setFont(font);

        verticalLayout_2->addWidget(helloLabel);

        infoButton = new QPushButton(widget);
        infoButton->setObjectName("infoButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infoButton->sizePolicy().hasHeightForWidth());
        infoButton->setSizePolicy(sizePolicy);
        infoButton->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(infoButton);

        logoutButton = new QPushButton(widget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(logoutButton);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(label);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName("widget1");
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        coursesButton = new QPushButton(widget1);
        coursesButton->setObjectName("coursesButton");
        coursesButton->setMinimumSize(QSize(220, 130));

        verticalLayout->addWidget(coursesButton);

        studentsButton = new QPushButton(widget1);
        studentsButton->setObjectName("studentsButton");
        studentsButton->setMinimumSize(QSize(220, 130));

        verticalLayout->addWidget(studentsButton);

        professorsButton = new QPushButton(widget1);
        professorsButton->setObjectName("professorsButton");
        professorsButton->setMinimumSize(QSize(220, 130));

        verticalLayout->addWidget(professorsButton);

        splitter->addWidget(widget1);

        verticalLayout_3->addWidget(splitter);

        HomePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuAdmin_Panel = new QMenu(menubar);
        menuAdmin_Panel->setObjectName("menuAdmin_Panel");
        HomePage->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePage);
        statusbar->setObjectName("statusbar");
        HomePage->setStatusBar(statusbar);

        menubar->addAction(menuAdmin_Panel->menuAction());

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "MainWindow", nullptr));
        helloLabel->setText(QString());
        infoButton->setText(QCoreApplication::translate("HomePage", "Info", nullptr));
        logoutButton->setText(QCoreApplication::translate("HomePage", "Logout", nullptr));
        label->setText(QString());
        coursesButton->setText(QCoreApplication::translate("HomePage", "Courses", nullptr));
        studentsButton->setText(QCoreApplication::translate("HomePage", "Students", nullptr));
        professorsButton->setText(QCoreApplication::translate("HomePage", "Professors", nullptr));
        menuAdmin_Panel->setTitle(QCoreApplication::translate("HomePage", "Admin Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
