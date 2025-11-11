#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "Person.h"
#include<string>
using namespace std;

class student : public person {

private :
    int yearlevel ;
    string major ;
public :
    studen();
    student(int yearlevel, string major, string name , int id  )
    : person(name, id), studentyearlevel(yearlevel), studnetmajor (major){}

    display();

};




#endif
