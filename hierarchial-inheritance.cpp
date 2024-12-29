#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int rollno;
};
class Teacher: public Person{
    public:
    string subject;
};



int main(){
    Student s1;
    s1.name = "Ali";
    s1.rollno = 123;
    cout<<"Name: "<<s1.name<<endl<<"Roll no: "<<s1.rollno<<endl;

    Teacher t1;
    t1.name = "Ahmed";
    t1.subject = "C++";
    cout<<"Name: "<<t1.name<<endl<<"Subject: "<<t1.subject<<endl;


return 0;
}