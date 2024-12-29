#include <bits/stdc++.h>
using namespace std;

class Shape{  // Abstract class
    public:
    virtual void draw() = 0;  // pure virtual function
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};




int main(){
    Circle c1;
    c1.draw();
    return 0;

}