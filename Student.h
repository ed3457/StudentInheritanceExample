#pragma once
#include <string>
#include <iostream>
using namespace std; 
class Student
{
private:
	string major;
	string id;
	string name; 

public:

	void setMajor(string m);
	string getMajor();

	void setID(string i);
	string getID();

	void setName(string n);
	string getName();

	Student();
	Student(string m, string n, string i);



};

