#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int rollno;


};
int main(){
    Student s1;
    s1.name = "Nafees";
    s1.age = 20;    
    s1.rollno = 1;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Roll No: "<<s1.rollno<<endl;
    return 0;



}