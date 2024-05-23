#pragma once
#include "Student.h"
class OnlineStudent :
    public Student
{
private:
    string location;

public: 

    void setLocation(string loc);

    string getLocation();

    OnlineStudent();

    OnlineStudent(string m, string n, string i, string loc);
};

