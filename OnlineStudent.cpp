#include "OnlineStudent.h"

void OnlineStudent::setLocation(string loc)
{
	location = loc;
}

string OnlineStudent::getLocation()
{
	return location;
}

OnlineStudent::OnlineStudent():Student()
{
	setLocation("Not Set yet!");
}

OnlineStudent::OnlineStudent(string m, string n, string i, string loc):Student(m,n,i)
{
	setLocation(loc);
}
