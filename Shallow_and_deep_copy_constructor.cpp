#include <iostream>
#include <string>
using namespace std;
class Student {

public:
   string name;
   double* cgpaptr;

// parameterized constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"CGPA: "<<*cgpaptr<<endl;
}


};

int main() {

Student s1("Ali", 3.4);
Student s2(s1);
// s1.getInfo(); // default copy constructor called
*(s2.cgpaptr) = 9.2;
s1.getInfo();
// s2.getInfo();
    return 0;
}