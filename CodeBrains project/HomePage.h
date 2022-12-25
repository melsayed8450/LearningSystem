#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>
#include "CoursePage.h"
#include "ProfessorPage.h"
#include "StudentPage.h"
#include "AdminInfoPage.h"



namespace Ui {
class HomePage;
}

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomePage(QString name,QString username,QWidget *parent = nullptr);
    ~HomePage();

private slots:


    void on_logoutButton_clicked();

    void on_studentsButton_clicked();

    void on_coursesButton_clicked();

    void on_professorsButton_clicked();

    void on_infoButton_clicked();

private:
    Ui::HomePage *ui;
    CoursePage *coursePage;
    ProfessorPage *professorPage;
    StudentPage *studentPage;
    AdminInfoPage *adminInfoPage;
    QString username;
    QString name;

};

#endif // HOMEPAGE_H
