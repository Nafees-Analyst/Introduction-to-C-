#include<iostream>
using namespace std;

class Parent{
public:
     void getInfo(){
        cout<<"Parent"<<endl;
    }
    virtual void hello(){
        cout<<"hello from parent"<<endl;
    }
};
class Child: public Parent{
    public:
    void getInfo(){
        cout<<"Child"<<endl;
    }
    void hello(){
        cout<<"hello from child"<<endl;
    }
};


int main(){
    Parent p1;
    p1.getInfo();

return 0;
}