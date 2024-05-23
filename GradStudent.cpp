#include "GradStudent.h"

void GradStudent::setAdvisorName(string an)
{
	advisorName = an;
}

string GradStudent::getAdvisorName()
{
	return advisorName;
}

GradStudent::GradStudent():Student()
{
	setAdvisorName("Not assigned yet!");
}

GradStudent::GradStudent(string m, string n, string i, string an):Student(m,n,i)
{
	setAdvisorName(an);

}
