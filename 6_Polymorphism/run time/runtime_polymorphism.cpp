/*
Runtime Polymorphism:method overriding.
//rules:
1. function name
2. function arguments.
3. inheritance is important
*/

#include<iostream>
using namespace std;

//  base class declaration. 
class Animal{
   int a;  
    public:  
    void speak(){   
        cout<< "Speaking "<<endl;  
    }  
};

//  derived class declaration.
class Dog : public Animal  
{  
    int b;  
    public:  
    void speak(){  
        cout<<"Barking"<<endl;
    }  
};  


int main(){
    Dog obj;
    obj.speak();

    return 0;
}