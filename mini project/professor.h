#ifndef PROFESSOR_H
#define PROFESSOR_H

#include<iostream>
#include"user.h"
using namespace std;

class Proffesor : public User
{
public:
    Proffesor(string uname, string pass);
    void displayRole() override;
    void createCourse();
    void assignGrade();
    void createAnnouncement();
    void deleteCourse();
};

#endif