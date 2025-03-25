#ifndef GRADE_H
#define GRADE_H

#include<iostream>
#include"student.h"
#include"course.h"
using namespace std;

class Grade
{
private:
    Student* student; 
    Course* course;
    int score; 

public:
    Grade(Student* s, Course* c, int sc);
    void displayGrade();
};

#endif