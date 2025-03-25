#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include<iostream>
#include"student.h"
using namespace std;

class Assignment
{
private:
    string title;
    string description;

public:
    Assignment(string t, string d);
    void submitAssignment();
    void displaySubmissions();
};

#endif