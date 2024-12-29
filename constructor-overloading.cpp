#include <iostream>
using namespace std;
class Student{
 public: 
  string name;
  
  Student(){
      cout<<"non parameterized"<<endl;
  }
  
  Student(string name){
      this->name = name;
      cout<<"parameterized"<<endl;
  }
  
};

int main() {
    Student s1("nafees");

    return 0;
}