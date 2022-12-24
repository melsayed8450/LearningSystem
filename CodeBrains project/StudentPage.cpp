#include "StudentPage.h"
#include "ui_StudentPage.h"

StudentPage::StudentPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentPage)
{
    ui->setupUi(this);
}

StudentPage::~StudentPage()
{
    delete ui;
}
