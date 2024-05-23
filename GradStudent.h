#pragma once
#include "Student.h"
class GradStudent :
    public Student
{
private:
    string advisorName;

public:

    void setAdvisorName(string an);

    string getAdvisorName();

    GradStudent();
    GradStudent(string m, string n, string i, string an);

};

