//#ifndef ADMIN_H
//#define ADMIN_H

#pragma once

#include <iostream>
#include <QMap>
#include<QObject>
using namespace std;

class Admin
{

private:

    QString username;
    QString password;
    QString fullName;
    QString adress;
    QString phoneNumber;

    QMap<QString, int> check{ {"ahmed", hashing("ahmedpass")}, {"mohamed", hashing("mohamedpass")} };

public:

    Admin();


    int hashing(QString password);


    bool checkUsername(QString username);

    bool checkPassword(QString password);

    void registerNew(QString username, QString password, QString fullName, QString adress, QString phoneNumber);

    void loginCheck(QString username, QString password);

    void setUsername(QString username);

    void setPassword(QString password);

    void setFullName(QString fullName);

    void setAdress(QString adress);//

    void setPhoneNumber(QString phoneNumber);//

    QString getFullName();

    QString getAdress();//

    QString getPhoneNumber();//

    ~Admin();
};
//#endif
