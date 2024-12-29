#include<iostream>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout<<"non parameterized constructor"<<endl;
    }

    Student(string name){
        this->name = name;
        cout<<"parameterized constructor"<<endl;
    }
};


int mian(){
Student s1("Ali");


return 0;
};