#include "HomePage.h"
#include "ui_HomePage.h"
#include "admin.h"

HomePage::HomePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
  Admin *admin = new Admin();
    ui->helloLabel->setText("Hello " + admin->getFullName());
}

HomePage::~HomePage()
{
    delete ui;
}
