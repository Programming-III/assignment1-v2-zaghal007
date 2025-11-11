#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED
#include<string>
using namespace std;
#include"Student.h"

class course : public student{
private :
    string courseCode;
    string courseName;
    int maxStudents;
    student *students;
    int currentStudents;
public :
    course();
    course(string courseCode, string courseName, int maxStudents,  student *students,  int currentStudents );
    addStudent(const student& s);
    displayCourseInfo();

};



#endif
