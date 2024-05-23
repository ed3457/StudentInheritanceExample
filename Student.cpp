#include "Student.h"

void Student::setMajor(string m)
{
	major = m;
}

string Student::getMajor()
{
	return major;
}

void Student::setID(string i)
{
	id = i;
}

string Student::getID()
{
	return id;
}

void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name;
}

Student::Student():Student("000000", "Not assigned!", "Not assigned!")
{
	/*setID("000000");
	setName("Not assigned!");
	setMajor("Not assigned!"); */
}

Student::Student(string m, string n, string i)
{
	setID(i);
	setName(n);
	setMajor(m);
}
