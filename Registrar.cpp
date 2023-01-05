#include "Registrar.h"
#include"Student.h"
#include"Course.h"
using namespace std;
int Registrar::findStudent(string name)
{
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i]->getName() == name)
            return i;
    }
    return -1;
}
int Registrar::findCourse(string name)
{
    for (int i = 0; i < courses.size(); i++)
    {
        if (courses[i]->getName() == name)
            return i;
    }
    return -1;
}

Registrar::Registrar()
{

}

bool Registrar::addCourse(string courseName)
{
    if (findCourse(courseName) != -1)
        return false;

    courses.push_back(new Course(courseName));
    return true;
}

bool Registrar::addStudent(string studentName)
{
    if (findStudent(studentName) != -1)
        return false;
    students.push_back(new Student(studentName));
    return true;
}

bool Registrar::enrollStudentInCourse(string studentName, string courseName)
{
    if ((findStudent(studentName) != -1) && (findCourse(courseName) != -1)){
        students[findStudent(studentName)]->addCourse(new Course(courseName));
        return true;
    }
    return false;
}

bool Registrar::cancelCourse(string courseName)
{
    if (findCourse(courseName) != -1)
    {
        courses.clear();
        return true;
    }
    return false;
}

void Registrar::clear()
{
    courses.clear();
    students.clear();
}

ostream& operator<<(ostream& out, const Registrar& reg)
{       
        out << "Stuent:\n";
        if (reg.students.size() == 0)
            out << "Empty";
       
        for (int i = 0; i < reg.students.size(); i++) {
            out << reg.students[i]->getName() << "\n";
        }
        
        out << "\nCourses:\n";
        if (reg.courses.size() == 0)
            out << "Empty";
     
        for (int i = 0; i < reg.courses.size(); i++) {
            
            out << reg.courses.at(i)->getName() << "\n";
        }
    return out;
}
