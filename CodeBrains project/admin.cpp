
#include <iostream>
#include <QMap>
#include<QObject>
#include <QDebug>


#include "admin.h"

using namespace std;



Admin::Admin(){}

int Admin::hashing(QString password){
        hash<QString> h;
        return h(password);
    }

bool Admin::checkUsername(QString username){
        if(check[username]) return false;
        else return true;

    }

bool Admin::checkPassword(QString password){
    if(password.size() < 8) return false;
    else return true;
}

void Admin::registerNew(QString username, QString password, QString fullName, QString adress, QString phoneNumber)
{
    if(!checkUsername(username))
    {
        qDebug()<<"This username is already taken";
        return;
    }
    if(!checkPassword(password))
    {
        qDebug()<<"Passord should be longer than 8 characters";
        return;
    }
        adress = adress;
        fullName = fullName;
        phoneNumber = phoneNumber;
       password = password;
       username = username;
        check[username] = hashing(password);
}

    void Admin::loginCheck(QString username, QString password)
    {
        if(check[username] == hashing(password)) cout<< "Login successful";

        else  qDebug()<< "Login failed";

    }

    void Admin::setAdress(QString newAdress)
    {
        adress = newAdress;
    }

    void Admin::setPhoneNumber(QString newPhoneNumber)
    {
        phoneNumber = newPhoneNumber;
    }

    void Admin::setFullName(QString newFullName)
    {
        fullName = newFullName;
    }

    void Admin::setPassword(QString newPassword)
    {
        if(checkPassword(newPassword)) password = newPassword;
        else qDebug()<< "Passord should be longer than 8 characters";
    }

    void Admin::setUsername(QString newUsername)
    {
        if(checkUsername(newUsername)) username = newUsername;
        else qDebug()<< "Username is already taken";
    }

    QString Admin::getAdress()
    {
        return adress;
    }

    QString Admin::getFullName()
    {
        return fullName;
    }

    QString Admin::getPhoneNumber()
    {
        return phoneNumber;
    }

    Admin::~Admin(){}
