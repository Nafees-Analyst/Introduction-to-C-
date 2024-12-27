#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    int age;
    string subject;
    double salary;
    //constructor created
    //this is a non-paramaterized constructor
    Teacher (){
        cout<<"this is a constructor."<<endl;
    }



};




int main(){

Teacher t1;
t1.name = "Zain";
t1.age = 45;
t1.subject = "C++";
t1.salary = 56000;

cout<<"The salary of the teacher is : "<<t1.salary<<endl;
}