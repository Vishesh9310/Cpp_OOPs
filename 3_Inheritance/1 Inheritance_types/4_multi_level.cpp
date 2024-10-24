//MultiLevel Inheritance: A class can also be derived from one class, which is already derived from another class.
#include<iostream>
using namespace std;

class Parent{
    public:
    void function(){
        cout<<"This is parent function"<<endl;
    }
};

class Child:public Parent{
};

class Grandchild:public Child{
};

int main(){
    Grandchild obj;
    obj.function();
    return 0;
}