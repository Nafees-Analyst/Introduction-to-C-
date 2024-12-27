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
    // Teacher (){
    //     cout<<"this is a constructor."<<endl;
    // }


//parameterized constructor
    Teacher (string n,int a, string s, double sal){
        name = n;
        age = a;
        subject = s;
        salary = sal;

    }

    //custom copy constructor
    Teacher(Teacher &t){
        cout<<"I am a custom Copy constructor"<<endl;
        this->name = t.name;
        this->age = t.age;
        this->subject = t.subject;
        this->salary = t.salary;
    }
    //functoiion ot get info for constructor (parameterized)

    void getInfo(){
        cout<<"The name of the teacher is :"<< name <<endl;
        cout<<"The age of the teacher is: "<< age <<endl;
        cout<<"The subject that teacher teaches: "<< subject <<endl;
        cout<<"The salary of teacher is: "<< salary <<endl;


    }
};




int main(){

Teacher t1("Kamran",65,"C++",56000);
// t1.getInfo();
Teacher t2(t1); //custom copy constructor called

t2.getInfo();

// t1.name = "Zain";
// t1.age = 45;
// t1.subject = "C++";
// t1.salary = 56000;

// cout<<"The salary of the teacher is : "<<t1.salary<<endl;
return 0;
}