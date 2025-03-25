#ifndef USER_H
#define USER_H

#include<iostream>
using namespace std;

class User 
{
private:
    string username; 
    string password;

public:
    User(string uname, string pass);
    virtual void displayRole() = 0;
    bool logIn(string uname, string pass);
    void logOut();
}; 

#endif