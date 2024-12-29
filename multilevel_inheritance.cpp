#include<bits/stdc++.h>
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

class Gradstudent : public Student{
    public:
    string research;
};


int main(){
    Gradstudent s1;
    s1.name = "Ali";
    s1.research= "AI";
    cout<<"name : "<<s1.name<<endl<<"Research: "<<s1.research<<endl;

}