#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include"user.h"
using namespace std;

class Student : public User
{
public:
    Student(string uname, string pass);
    void displayRole() override;
    void enrollCourse();
    void viewGrades();
    void submitAssignment();
};

#endif