#include <iostream>
#include<string>
#include"Person.h"
#include"Student.h"
#include"Instructor.h"
#include"Course.h"
using namespace std;

void Person :: person(string name , int id ) {

this->name = name ;
this->id = id ;

}

 void Person :: display () {

cout<< name<<endl ;
cout<<id<<endl;

}


void Student :: display(){

cout<< "Student Info:"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"year:"<<yearlevel<<endl ;
cout<<"Major:"<<major<<endl ;

}

void Instructor :: display (){


cout<<"Instructor Info:"<<endl ;
cout<<"Name:"<<name<<endl;
cout <<"Department:"<<department<<endl:
cout <<"Experience:"<<experienceyears<<endl;


}

void Course :: isplayCourseInfo(){ 
    cout<<"Course:"<<courseName<<endl ; 
    cout<<"Max Students:"<<maxStudents<<endl; 




}








int main() 
{ 
    
    Person myperson("ali", 18897); 
    Student mystudent(2 , "Informatics"); 
    Instructor myinstructor("Computer Science", 5); 
    Course mycourse ("CS101 - Introduction to Programming", 3 , "Omar Nabil (ID: 2202)")
    cout << "Hello worlffffd!" << endl;
    return 0;
}
