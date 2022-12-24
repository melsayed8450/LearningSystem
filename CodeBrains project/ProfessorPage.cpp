#include "ProfessorPage.h"
#include "ui_ProfessorPage.h"

ProfessorPage::ProfessorPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfessorPage)
{
    ui->setupUi(this);
}

ProfessorPage::~ProfessorPage()
{
    delete ui;
}
