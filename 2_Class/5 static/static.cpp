/*
In C++, static is a keyword or modifier that belongs to the type not instance.
So instance is not required to access the static members.
In C++, static can be field, method, constructor, class, properties, operator and event.

Advantage of C++ static keyword:
Memory efficient: Now we don't need to create instance for accessing the static members, so it saves memory.
Moreover, it belongs to the type, so it will not get memory each time when instance is created.
*/
#include<iostream>
using namespace std;

class Vehicle{
    public:

    string color;
    string name;
    static float tyres;
    
    Vehicle(string color,string name){
        this->color=color;
        this->name=name;
    }
    void display(){
        cout<<"Name:"<<name<<" color: "<<color<<endl;
    }
};

float Vehicle:: tyres=4;

int main(){
    Vehicle v1=Vehicle("Red","Car");
    Vehicle v2=Vehicle("Blue","XUV");

    v1.display();
    v2.display();
    
    return 0;
}