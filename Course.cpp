#include "Course.h"


Course::Course(string name)
{
	this->name = name;
}

Course::Course()
{
	name = "";
}

Course::~Course()
{
	students.clear();
	delete &students;
}

string Course::getName()
{
	return name;
}

void Course::addStudent(Student* s)
{
	students.push_back(s);

}

void Course::removeStudentsFromCourse()
{
	students.clear();
}

ostream& operator<<(ostream& os, const Course& c)
{
	os << c.name << endl;

	for (int i = 0; i < c.students.size(); i++)
	{
		os << c.students[i] << " ";
	}
	return os;
}
