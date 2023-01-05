#pragma once
#include<iostream>
#include<vector>
#include "Course.h"
using namespace std;


//class Course;

class Student {
private:
	string name;
	vector <Course * >courses;
public:
	Student(string name);
	Student();
	~Student();
	string getName();
	bool addCourse(Course* C);
	void removedFormCourse(Course* C);
	friend ostream& operator <<(ostream& out, const Student& stu);
};