#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
};
class Teacher{
    public:
    string subject;
    double salary;
};
class TA : public Student, public Teacher{
    public:
    int hours;
};



int main(){
    TA t1;
    t1.name = "Ali";
    t1.subject = "C++";
    t1.hours = 20;
    cout<<"Name: "<<t1.name<<endl<<"Subject: "<<t1.subject<<endl<<"Hours: "<<t1.hours<<endl;



}