#pragma once
#include"Course.h"
#include"Student.h"

class Registrar {
private:
	vector<Course*> courses;
	vector<Student*> students;
	int findStudent(string name);
	int findCourse(string name);
public:
	Registrar();
	bool addCourse(string name);
	bool  addStudent(string name);
	bool enrollStudentInCourse(string studentName, string courseName);
	bool cancelCourse(string courseName);
	void clear();
	friend ostream& operator <<(ostream& out, const Registrar& reg);
};

