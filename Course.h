#pragma once
#include<iostream>
#include "Student.h"
#include <string>
using namespace std;
#include <vector>


class Student;

class Course {
private:
	string name;
	vector <Student*> students;
public:
	Course(string name);
	Course();
	~Course();
	string getName();
	void addStudent(Student* s);
	void  removeStudentsFromCourse();
	friend ostream& operator <<(ostream& os, const Course& c);
};

