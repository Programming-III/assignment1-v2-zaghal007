#ifndef INSTRUCTOR_H_INCLUDED
#define INSTRUCTOR_H_INCLUDED

#include"Person.h"
#include<string>
using namespace std;

class instructor : public person {

private :
    string department ;
    int experienceyears ;
public :
    instructor ();
    instructor(string departmen ,int experienceyears string name , int id )
    : Person(name, id) , department (department) , experienceyears(experienceyears){}
    display();



};




#endif
