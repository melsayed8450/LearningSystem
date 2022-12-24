#include "SignupPage.h"
#include "ui_SignupPage.h"

SignupPage::SignupPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignupPage)
{
    ui->setupUi(this);
}

SignupPage::~SignupPage()
{
    delete ui;
}
