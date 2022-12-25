#include "HomePage.h"
#include "ui_HomePage.h"
#include "admin.h"
#include <QProcess>

HomePage::HomePage(QString name, QString username ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
  Admin *admin = new Admin();
    ui->helloLabel->setText("Hello " + name);
    HomePage::username = username;
    HomePage::name = name;

}

HomePage::~HomePage()
{
    delete ui;
}




void HomePage::on_logoutButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


void HomePage::on_studentsButton_clicked()
{
    studentPage = new StudentPage(this);
    studentPage->show();
    hide();
}


void HomePage::on_coursesButton_clicked()
{
    coursePage = new CoursePage(this);
    coursePage->show();
    hide();
}


void HomePage::on_professorsButton_clicked()
{
    professorPage = new ProfessorPage(this);
    professorPage->show();
    hide();
}


void HomePage::on_infoButton_clicked()
{

    adminInfoPage = new AdminInfoPage(name, username, this);
    adminInfoPage->show();

}

