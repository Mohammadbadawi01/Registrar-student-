#include "Student.h"
using namespace std;

Student::Student(string name)
{
	this->name = name;
}
Student::Student()
{
	name = "";
}
Student::~Student()
{
	courses.clear();
	delete& courses;
}
string Student::getName()
{
	return name;
}
bool Student::addCourse(Course* C)
{
	courses.push_back(C);
	return false;
}

void Student::removedFormCourse(Course* C)
{
	for (int i = 0; i < courses.size(); i++){
		if (courses[i]->getName() == C->getName()) {
			courses[i] = nullptr;
		}
	}
}

ostream& operator<<(ostream& out, const Student& stu)
{
	out << stu.name << endl;
	for (int i = 0; i < stu.courses.size(); i++) {
		out << stu.courses[i];
	}
	return out;
}
