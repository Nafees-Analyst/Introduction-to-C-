#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }
    Person(){
            cout<<"paretn constructor"<<endl;
    }
    ~Person(){
        cout<<"parent destructor"<<endl;
    }

};

class Student : public Person{
   public:
    int rollno;
    Student(){
        cout<<"child constructor"<<endl;
    }
    ~Student(){
        cout<<"child destructor"<<endl;
    }

void getInfo(){
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"The age of the student is: "<<age<<endl;
    cout<<"The roll number of the student is: "<<rollno<<endl;
}

};



int main(){
Student s1;
s1.name = "Ali";
s1.age = 34;
s1.rollno = 101;    
s1.getInfo();



}