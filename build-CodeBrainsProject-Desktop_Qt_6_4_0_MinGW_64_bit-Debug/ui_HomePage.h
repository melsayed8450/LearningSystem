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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *helloLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *infoButton;
    QPushButton *logoutButton;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *studentTable;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_2;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *courseTable;
    QWidget *tab_3;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBox_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QHBoxLayout *horizontalLayout_9;
    QTableWidget *professorTable;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QMenuBar *menubar;
    QMenu *menuAdmin_Panel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomePage->sizePolicy().hasHeightForWidth());
        HomePage->setSizePolicy(sizePolicy);
        HomePage->setStyleSheet(QString::fromUtf8("/*\n"
"Material Dark Style Sheet for QT Applications\n"
"Author: Jaime A. Quiroga P.\n"
"Inspired on https://github.com/jxfwinter/qt-material-stylesheet\n"
"Company: GTRONICK\n"
"Last updated: 04/12/2018, 15:00.\n"
"Available at: https://github.com/GTRONICK/QSS/blob/master/MaterialDark.qss\n"
"*/\n"
"QMainWindow {\n"
"	background-color:#1e1d23;\n"
"}\n"
"QDialog {\n"
"	background-color:#1e1d23;\n"
"}\n"
"QColorDialog {\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTextEdit {\n"
"	background-color:#1e1d23;\n"
"	color: #a9b7c6;\n"
"}\n"
"QPlainTextEdit {\n"
"	selection-background-color:#007b50;\n"
"	background-color:#1e1d23;\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-width: 1px;\n"
"	color: #a9b7c6;\n"
"}\n"
"QPushButton{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-botto"
                        "m-color: transparent;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton::default{\n"
"	border-style: inset;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-width: 1px;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolButton {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid"
                        ";\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #37efba;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #808086;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	co"
                        "lor: #808086;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QLineEdit {\n"
"	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: #a9b7c6;\n"
"	background:#1e1d23;\n"
"	selection-background-color:#007b50;\n"
"	selection-color: #FFFFFF;\n"
"}\n"
"QLabel {\n"
"	color: #a9b7c6;\n"
"}\n"
"QLCDNumber {\n"
"	color: #37e6b4;\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: rgb(240, 240, 240);\n"
"	border-width: 1px; \n"
"	border-radius: 10px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	background-color:#1e1d23;\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: #04b97f;\n"
"	border-radius: 5px;\n"
"}\n"
"QMenuBar {\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenuBar::item {\n"
"	color: #a9b7c6;\n"
"  	spacing: 3px;\n"
"  	padding: 1px 4px;\n"
"  	background: #1e1d23;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"  	background:#1e1d23;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu::item:s"
                        "elected {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: #04b97f;\n"
"	border-bottom-color: transparent;\n"
"	border-left-width: 2px;\n"
"	color: #FFFFFF;\n"
"	padding-left:15px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:7px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenu::item {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding-left:17px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:7px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenu{\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: rgb(77,77,77);\n"
"		background-color:#1e1d23;\n"
"		border-style: solid;\n"
"		border-"
                        "width: 1px;\n"
"    	border-radius: 6px;\n"
"}\n"
"QTabBar::tab {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #808086;\n"
"	padding: 3px;\n"
"	margin-left:3px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-left: 3px;\n"
"	padding-bottom: 2px;\n"
"	margin-left:3px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"\n"
"QCheckBox {\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:disabled {\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"	border-radius:4px;"
                        "\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-width:1px;\n"
"	border-color: rgb(87, 97, 106);\n"
"	background-color:#1e1d23;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: #04b97f;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QRadioButton {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: #04b97f;\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
""
                        "	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QStatusBar {\n"
"	color:#027f7f;\n"
"}\n"
"QSpinBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDoubleSpinBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QTimeEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDateTimeEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDateEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QComboBox {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"}\n"
"QComboBox:editable {\n"
"	background: #1e1d23;\n"
"	color: #a9b7c6;\n"
"	selection-background-color: #1e1d23;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"	selection-color: #FFFFFF;\n"
"	selection-background-color: #1e1d23;\n"
"}\n"
"QComboBox:!editable:on, QComboBox::drop-do"
                        "wn:editable:on {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"}\n"
"QFontComboBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox::tab {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox::tab:selected {\n"
"	color: #FFFFFF;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QScrollArea {\n"
"	color: #FFFFFF;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: #04b97f;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: #04b97f;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	width: 14px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	height: 14"
                        "px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background: #04b97f;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: #04b97f;\n"
"}"));
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        helloLabel = new QLabel(centralwidget);
        helloLabel->setObjectName("helloLabel");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        helloLabel->setFont(font);

        verticalLayout->addWidget(helloLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        infoButton = new QPushButton(centralwidget);
        infoButton->setObjectName("infoButton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoButton->sizePolicy().hasHeightForWidth());
        infoButton->setSizePolicy(sizePolicy1);
        infoButton->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(infoButton);

        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(logoutButton);


        horizontalLayout_2->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setIconSize(QSize(25, 25));
        tab1 = new QWidget();
        tab1->setObjectName("tab1");
        layoutWidget_2 = new QWidget(tab1);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(131, 11, 551, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget_2);
        comboBox->setObjectName("comboBox");
        comboBox->setAutoFillBackground(false);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget_3 = new QWidget(tab1);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(130, 50, 551, 421));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        studentTable = new QTableWidget(layoutWidget_3);
        studentTable->setObjectName("studentTable");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(studentTable->sizePolicy().hasHeightForWidth());
        studentTable->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(18);
        studentTable->setFont(font1);
        studentTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #C0C0C0;\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #202020;\n"
"}"));
        studentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        studentTable->setAlternatingRowColors(true);
        studentTable->setSelectionMode(QAbstractItemView::SingleSelection);
        studentTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        studentTable->setSortingEnabled(true);
        studentTable->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(studentTable);

        layoutWidget_4 = new QWidget(tab1);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 160, 111, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget_4);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget_4);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_3->addWidget(pushButton_4);

        tabWidget->addTab(tab1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget_8 = new QWidget(tab_2);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(121, 0, 551, 34));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        comboBox_3 = new QComboBox(layoutWidget_8);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setAutoFillBackground(false);

        horizontalLayout_6->addWidget(comboBox_3);

        horizontalSpacer_3 = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pushButton_9 = new QPushButton(layoutWidget_8);
        pushButton_9->setObjectName("pushButton_9");

        horizontalLayout_6->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget_8);
        pushButton_10->setObjectName("pushButton_10");

        horizontalLayout_6->addWidget(pushButton_10);

        layoutWidget_9 = new QWidget(tab_2);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(0, 149, 111, 111));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget_9);
        pushButton_11->setObjectName("pushButton_11");

        verticalLayout_5->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget_9);
        pushButton_12->setObjectName("pushButton_12");

        verticalLayout_5->addWidget(pushButton_12);

        layoutWidget_10 = new QWidget(tab_2);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(120, 39, 551, 421));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        courseTable = new QTableWidget(layoutWidget_10);
        courseTable->setObjectName("courseTable");
        sizePolicy3.setHeightForWidth(courseTable->sizePolicy().hasHeightForWidth());
        courseTable->setSizePolicy(sizePolicy3);
        courseTable->setFont(font1);
        courseTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #C0C0C0;\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #202020;\n"
"}"));
        courseTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        courseTable->setAlternatingRowColors(true);
        courseTable->setSelectionMode(QAbstractItemView::SingleSelection);
        courseTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        courseTable->setSortingEnabled(true);
        courseTable->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_7->addWidget(courseTable);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        formLayout = new QFormLayout(tab_3);
        formLayout->setObjectName("formLayout");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        comboBox_4 = new QComboBox(tab_3);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setAutoFillBackground(false);

        horizontalLayout_8->addWidget(comboBox_4);

        horizontalSpacer_4 = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName("pushButton_13");

        horizontalLayout_8->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(tab_3);
        pushButton_14->setObjectName("pushButton_14");

        horizontalLayout_8->addWidget(pushButton_14);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        professorTable = new QTableWidget(tab_3);
        professorTable->setObjectName("professorTable");
        professorTable->setEnabled(true);
        sizePolicy3.setHeightForWidth(professorTable->sizePolicy().hasHeightForWidth());
        professorTable->setSizePolicy(sizePolicy3);
        professorTable->setFont(font1);
        professorTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #C0C0C0;\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #202020;\n"
"}"));
        professorTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        professorTable->setAlternatingRowColors(true);
        professorTable->setSelectionMode(QAbstractItemView::SingleSelection);
        professorTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        professorTable->setSortingEnabled(true);
        professorTable->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_9->addWidget(professorTable);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_9);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        pushButton_15 = new QPushButton(tab_3);
        pushButton_15->setObjectName("pushButton_15");

        verticalLayout_6->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(tab_3);
        pushButton_16->setObjectName("pushButton_16");

        verticalLayout_6->addWidget(pushButton_16);


        formLayout->setLayout(2, QFormLayout::LabelRole, verticalLayout_6);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_2->addWidget(tabWidget);

        HomePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menuAdmin_Panel = new QMenu(menubar);
        menuAdmin_Panel->setObjectName("menuAdmin_Panel");
        HomePage->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePage);
        statusbar->setObjectName("statusbar");
        HomePage->setStatusBar(statusbar);

        menubar->addAction(menuAdmin_Panel->menuAction());

        retranslateUi(HomePage);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "MainWindow", nullptr));
        helloLabel->setText(QString());
        infoButton->setText(QCoreApplication::translate("HomePage", "Info", nullptr));
        logoutButton->setText(QCoreApplication::translate("HomePage", "Logout", nullptr));
#if QT_CONFIG(tooltip)
        comboBox->setToolTip(QCoreApplication::translate("HomePage", "search", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboBox->setStatusTip(QCoreApplication::translate("HomePage", "search", nullptr));
#endif // QT_CONFIG(statustip)
        comboBox->setCurrentText(QString());
        comboBox->setPlaceholderText(QCoreApplication::translate("HomePage", "search", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HomePage", "clear", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HomePage", "Addnew", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("HomePage", "Student", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_3->setToolTip(QCoreApplication::translate("HomePage", "search", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboBox_3->setStatusTip(QCoreApplication::translate("HomePage", "search", nullptr));
#endif // QT_CONFIG(statustip)
        comboBox_3->setCurrentText(QString());
        comboBox_3->setPlaceholderText(QCoreApplication::translate("HomePage", "search", nullptr));
        pushButton_9->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        pushButton_10->setText(QCoreApplication::translate("HomePage", "clear", nullptr));
        pushButton_11->setText(QCoreApplication::translate("HomePage", "Addnew", nullptr));
        pushButton_12->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HomePage", "Course", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_4->setToolTip(QCoreApplication::translate("HomePage", "search", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboBox_4->setStatusTip(QCoreApplication::translate("HomePage", "search", nullptr));
#endif // QT_CONFIG(statustip)
        comboBox_4->setCurrentText(QString());
        comboBox_4->setPlaceholderText(QCoreApplication::translate("HomePage", "search", nullptr));
        pushButton_13->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        pushButton_14->setText(QCoreApplication::translate("HomePage", "clear", nullptr));
        pushButton_15->setText(QCoreApplication::translate("HomePage", "Addnew", nullptr));
        pushButton_16->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("HomePage", "Professor", nullptr));
        menuAdmin_Panel->setTitle(QCoreApplication::translate("HomePage", "Admin Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
