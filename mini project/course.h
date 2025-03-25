#ifndef COURSE_H
#define COURSE_H

#include<iostream>
using namespace std;

class Course 
{
private:
    string courseID;
    string name; 
    int capacity;

public:
    Course(string id, string n, int cap);
    void addStudent();
    void assignGrade();
    void displayCourseInfo();
    void addAnnouncements();
    void deleteCourse();
};

#endif