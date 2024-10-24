/*
An equivalent special member function to a constructor is a destructor.
The constructor creates class objects, which are destroyed by the destructor. The word "destructor," followed by the tilde () symbol, is the same as the class name.
You can only define one destructor at a time. One method of destroying an object made by a constructor is to use a destructor.
Destructors cannot be overloaded as a result. Destructors don't take any arguments and don't give anything back.
As soon as the item leaves the scope, it is immediately called.
Destructors free up the memory used by the objects the constructor generated.
Destructor reverses the process of creating things by destroying them.

The language used to define the class's destructor:
~<classname>(){}

The language used to define the class's destructor outside of it:
<classname> :: ~<classname>(){}

//Defination: A destructor works opposite to constructor; it destructs the objects of classes.
It can be defined only once in a class. Like constructors, it is invoked automatically.
A destructor is defined like constructor. It must have same name as class. But it is prefixed with a tilde sign (~).
*/

#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"constructor invoked"<<endl;
    }

    ~Vehicle(){
        cout<<"destructor invoked"<<endl;
    }
};

int main(){
    Vehicle v1;
    
    return 0;
}