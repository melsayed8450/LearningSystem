/********************************************************************************
** Form generated from reading UI file 'ProfessorEditPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSOREDITPAGE_H
#define UI_PROFESSOREDITPAGE_H

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

class Ui_ProfessorEditPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *FLNameLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QLabel *idLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLineEdit *titleLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QLineEdit *phoneLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *emailLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QComboBox *courseComboBox;
    QPushButton *deletePushButton;
    QTableWidget *allCoursesTable;
    QLabel *label;
    QPushButton *savePushButton;

    void setupUi(QDialog *ProfessorEditPage)
    {
        if (ProfessorEditPage->objectName().isEmpty())
            ProfessorEditPage->setObjectName("ProfessorEditPage");
        ProfessorEditPage->resize(549, 611);
        ProfessorEditPage->setStyleSheet(QString::fromUtf8("/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: #121212;\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QMenuBar-----*/\n"
"QMenuBar\n"
"{\n"
"	background-color: #0a0a0a;\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background-color: #607cff;\n"
"    border: 1px solid #41cd52;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background-color: #4969ff;\n"
"    border: 1px solid #000;\n"
"    margin-bottom: -1px;\n"
"    padding-bottom: 1px;\n"
"\n"
"}\n"
""
                        "\n"
"\n"
"/*-----QMenu-----*/\n"
"QMenu\n"
"{\n"
"    background-color: #121212;\n"
"    border: 1px solid;\n"
"    color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: #6d8eff;\n"
"    color: #ffffff;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    min-width : 150px;\n"
"    padding: 3px 20px 3px 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    background-color: #4969ff;\n"
"    color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:disabled\n"
"{\n"
"    color: #262626;\n"
"}\n"
"\n"
"\n"
"/*-----QToolTip-----*/\n"
"QToolTip\n"
"{\n"
"	border : 1px solid #000000;\n"
"	background-color: #26264f;\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: #607cff;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-co"
                        "lor: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #8399ff;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #4969ff;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"QToolButton\n"
"{\n"
"	background-color: #607cff;\n"
"	color: #ffffff;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::hover\n"
"{\n"
""
                        "	background-color: #8399ff;\n"
"	color: #ffffff;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: #4969ff;\n"
"	color: #ffffff;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QComboBox-----*/\n"
"QComboBox\n"
"{\n"
"    background-color: #607cff;\n"
"    border: 1px solid;\n"
"    border-radius: 3px;\n"
"    padding-left: 6px;\n"
"    color: #ffffff;\n"
"    height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:hover\n"
"{\n"
"    background-color: #8399ff;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #4969ff;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #383838;\n"
"    color: #ffffff;\n"
"    border: 1px solid black;\n"
""
                        "    selection-background-color: #4969ff;\n"
"    selection-color: #ffffff;\n"
"    outline: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"    border-left-width: 0px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"}\n"
"\n"
"\n"
"/*-----QSpinBox & QDoubleSpinBox & QDateTimeEdit-----*/\n"
"QSpinBox, \n"
"QDoubleSpinBox,\n"
"QDateTimeEdit\n"
"{\n"
"	background-color: #525251;\n"
"	color: #ffffff;\n"
"	border: 1px solid #051a39;\n"
"	border-radius: 3px;\n"
"	padding : 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"QSpinBox:hover, \n"
"QDoubleSpinBox::hover,\n"
"QDateTimeEdit::hover\n"
"{\n"
"    background-color: #626262;\n"
"    border: 1px solid #607cff;\n"
"    color:  #fff;\n"
"    padding: 2px\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button,\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
"QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
"{\n"
"    background-color: #607cff;\n"
"	border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
"QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
"QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
"{\n"
"    background-color: #8399ff;\n"
"    border: 1px solid #8399ff;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:disabled, QSpinBox::down-button:dis"
                        "abled,\n"
"QDoubleSpinBox::up-button:disabled, QDoubleSpinBox::down-button:disabled,\n"
"QDateTimeEdit::up-button:disabled, QDateTimeEdit::down-button:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button::pressed,\n"
"QDateTimeEdit::up-button:pressed, QDateTimeEdit::down-button::pressed\n"
"{\n"
"    background-color: #4969ff;\n"
"    border: 1px solid #4969ff;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-arrow,\n"
"QDoubleSpinBox::down-arrow,\n"
"QDateTimeEdit::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-arrow,\n"
"QDoubleSpinBox::up-arrow,\n"
"QDateTimeEdit::up-arrow\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"	background-color: #525251;\n"
"	color: #ffffff;\n"
""
                        "	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTextEdit-----*/\n"
"QTextEdit\n"
"{\n"
"	background-color: #ffffff;\n"
"	color: #010201;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QTextEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"    border: 1px solid;\n"
"    border-color: #607cff;\n"
"    margin-top: 22px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: #607cff;\n"
"    color: #ffffff;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 5px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
""
                        "QGroupBox::title::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 5px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(://checkbox.png);\n"
"    border: 1px solid #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 1px solid #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QRadioButton-----*/\n"
"QRadioButton::indicator::unchecked\n"
"{ \n"
""
                        "	border: 2px inset gray; \n"
"	border-radius: 5px; \n"
"	background-color:  #fff;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked:hover\n"
"{ \n"
"	border: 2px solid #607cff; \n"
"	border-radius: 5px; \n"
"	background-color:  #fff;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::checked\n"
"{ \n"
"	border: 2px inset darkgray; \n"
"	border-radius: 5px; \n"
"	background-color: #4969ff; \n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 2px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #f0f0f0;\n"
"    gridline-color: #8faaff;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{"
                        "\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #656565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #26264f;\n"
"    color: #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #4969ff;\n"
"    color: #F0F0F0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #505050;\n"
"    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #525251;\n"
"    color: #fff;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
""
                        "    color: #fff;\n"
"    background-color: #4969ff;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTabWidget-----*/\n"
"QTabBar::tab\n"
"{\n"
"	background-color: #262626;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::t"
                        "ab:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane \n"
"{\n"
"	background-color: #262626;\n"
"	color: #ffffff;\n"
"    border: 1px solid;\n"
"    border-color: #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    background-color: #607cff;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected \n"
"{\n"
"    background-color: #262626;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected:hover \n"
"{\n"
"    background-color: #8399ff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:!selected \n"
"{\n"
"    margin-top: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:!selected \n"
"{\n"
"    margin-bottom: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top, Q"
                        "TabBar::tab:bottom \n"
"{\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:selected \n"
"{\n"
"    border-bottom-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:selected \n"
"{\n"
"    border-top-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one \n"
"{\n"
"    margin-right: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:!selected \n"
"{\n"
"    margin-right: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:!selected\n"
"{\n"
"    margin-left: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right \n"
"{\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:selected \n"
"{\n"
"    border-left-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:selected \n"
"{\n"
"    border-right-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:le"
                        "ft:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one \n"
"{\n"
"    margin-bottom: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QSlider-----*/\n"
"QSlider::groove:horizontal \n"
"{\n"
"	background-color: transparent;\n"
"	height: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal \n"
"{\n"
"	background-color: #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal \n"
"{\n"
"	background-color: #666765;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"	background-color: #607cff;\n"
"	width: 14px;\n"
"	margin-top: -6px;\n"
"	margin-bottom: -6px;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:hover \n"
"{\n"
"	background-color: #607cff;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
""
                        "\n"
"QSlider::handle:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border: 1px solid #aaa;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::groove:vertical \n"
"{\n"
"	background-color: transparent;\n"
"	width: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical \n"
"{\n"
"	background-color: #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical \n"
"{\n"
"	background-color: #666765;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical \n"
"{\n"
"	background-color: #607cff;\n"
"	height: 14px;\n"
"	margin-left: -6px;\n"
"	margin-right: -6px;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:hover \n"
"{\n"
"	background-color: #607cff;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:disabl"
                        "ed \n"
"{\n"
"	background-color: #eee;\n"
"	border: 1px solid #aaa;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QDial-----*/\n"
"QDial\n"
"{\n"
"	background-color: #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QDial::disabled\n"
"{\n"
"	background-color: #404040;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal\n"
"{\n"
"    border: 1px solid #222222;\n"
"    background-color: #3d3d3d;\n"
"    height: 13px;\n"
"    margin: 0px 16px 0 16px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background: #607cff;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #607cff;\n"
"    width: 14px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #607cff;\n"
"    width: 14px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-orig"
                        "in: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::right-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-right.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::left-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-left.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: #3d3d3d;\n"
"    width: 13px;\n"
"    margin: 16px 0 16px 0;\n"
"    border: 1px solid #222222;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: #607cff;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #607cff;\n"
"    height: 14px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    border: 1px "
                        "solid #1b1b19;\n"
"    background-color: #607cff;\n"
"    height: 14px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::up-arrow:vertical\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::down-arrow:vertical\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QProgressBar-----*/\n"
"QProgressBar\n"
"{\n"
"	background-color: #383838;\n"
"	color: #ffffff;\n"
"	border: 1px solid #607cff;\n"
"	border-radius: 3px;\n"
"	text-align: center;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: #607cff;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk:disabled {\n"
"	background-color: #656565;\n"
"	border: 1px solid #aaa;\n"
"	color: #656565;\n"
"}\n"
"\n"
"\n"
"/*-----QStatusBar--"
                        "---*/\n"
"QStatusBar\n"
"{\n"
"	background-color: #0a0a0a;\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(ProfessorEditPage);
        verticalLayout->setObjectName("verticalLayout");
        FLNameLabel = new QLabel(ProfessorEditPage);
        FLNameLabel->setObjectName("FLNameLabel");
        QFont font;
        font.setPointSize(22);
        FLNameLabel->setFont(font);
        FLNameLabel->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(FLNameLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_4 = new QLabel(ProfessorEditPage);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::NoFrame);

        horizontalLayout_9->addWidget(label_4);

        nameLineEdit = new QLineEdit(ProfessorEditPage);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_9->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_19 = new QLabel(ProfessorEditPage);
        label_19->setObjectName("label_19");
        label_19->setFont(font1);
        label_19->setFrameShape(QFrame::NoFrame);

        horizontalLayout_8->addWidget(label_19);

        idLabel = new QLabel(ProfessorEditPage);
        idLabel->setObjectName("idLabel");

        horizontalLayout_8->addWidget(idLabel);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_14 = new QLabel(ProfessorEditPage);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);
        label_14->setFrameShape(QFrame::NoFrame);

        horizontalLayout_5->addWidget(label_14);

        titleLineEdit = new QLineEdit(ProfessorEditPage);
        titleLineEdit->setObjectName("titleLineEdit");

        horizontalLayout_5->addWidget(titleLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_17 = new QLabel(ProfessorEditPage);
        label_17->setObjectName("label_17");
        label_17->setFont(font1);
        label_17->setFrameShape(QFrame::NoFrame);

        horizontalLayout_10->addWidget(label_17);

        phoneLineEdit = new QLineEdit(ProfessorEditPage);
        phoneLineEdit->setObjectName("phoneLineEdit");

        horizontalLayout_10->addWidget(phoneLineEdit);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_13 = new QLabel(ProfessorEditPage);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);
        label_13->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(label_13);

        emailLineEdit = new QLineEdit(ProfessorEditPage);
        emailLineEdit->setObjectName("emailLineEdit");

        horizontalLayout_4->addWidget(emailLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_7 = new QLabel(ProfessorEditPage);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(label_7);

        courseComboBox = new QComboBox(ProfessorEditPage);
        courseComboBox->setObjectName("courseComboBox");

        verticalLayout_2->addWidget(courseComboBox);

        deletePushButton = new QPushButton(ProfessorEditPage);
        deletePushButton->setObjectName("deletePushButton");

        verticalLayout_2->addWidget(deletePushButton);

        allCoursesTable = new QTableWidget(ProfessorEditPage);
        allCoursesTable->setObjectName("allCoursesTable");
        allCoursesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        allCoursesTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(allCoursesTable);

        label = new QLabel(ProfessorEditPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addLayout(verticalLayout_2);

        savePushButton = new QPushButton(ProfessorEditPage);
        savePushButton->setObjectName("savePushButton");

        verticalLayout->addWidget(savePushButton);


        retranslateUi(ProfessorEditPage);

        QMetaObject::connectSlotsByName(ProfessorEditPage);
    } // setupUi

    void retranslateUi(QDialog *ProfessorEditPage)
    {
        ProfessorEditPage->setWindowTitle(QCoreApplication::translate("ProfessorEditPage", "Dialog", nullptr));
        FLNameLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("ProfessorEditPage", "Name", nullptr));
        label_19->setText(QCoreApplication::translate("ProfessorEditPage", "ID", nullptr));
        idLabel->setText(QCoreApplication::translate("ProfessorEditPage", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("ProfessorEditPage", "Title", nullptr));
        label_17->setText(QCoreApplication::translate("ProfessorEditPage", "Phone", nullptr));
        label_13->setText(QCoreApplication::translate("ProfessorEditPage", "E-mail", nullptr));
        label_7->setText(QCoreApplication::translate("ProfessorEditPage", "Course:", nullptr));
        deletePushButton->setText(QCoreApplication::translate("ProfessorEditPage", "Delete", nullptr));
        label->setText(QCoreApplication::translate("ProfessorEditPage", "Press Enter to add a course to this professor", nullptr));
        savePushButton->setText(QCoreApplication::translate("ProfessorEditPage", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfessorEditPage: public Ui_ProfessorEditPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSOREDITPAGE_H
