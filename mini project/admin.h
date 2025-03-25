#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include"user.h"
using namespace std;

class Admin : public User
{
public:
    Admin(string uname, string pass);
    void displayRole() override;
    void manageUsers();
    void addUser();
    void addCourse();
    void displayUsers();
    void displayCourse();
    void deleteUser();
};

#endif