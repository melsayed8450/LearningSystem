#include "LoginPage.h"
#include "professor.h"
#include <QApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginPage w;
    w.show();
//    QString x="Ali Mo Ana Abit";
//    QString y="fgsdfgfds";
//    QString z="011234568";
//    QString e="@gmail.com";
//    QString f="phd";
//    Professor p(x,y,z,e,f);
//    qDebug()<< p.getFullName()<< p.getFirstLastName();

    return a.exec();
}
