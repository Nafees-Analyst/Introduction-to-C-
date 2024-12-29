#include <bits/stdc++.h>
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

    // destructor
    ~Student(){

        cout<<"Hi, I am a destructor"<<endl;
        delete cgpaptr;  //deleting the  memory that the pointer is pointing to (dynamically allocated memory)
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaptr << endl;
    }

   
};

int main() {
    Student s1("Ali", 3.4);
    s1.getInfo();
    
    return 0;
}