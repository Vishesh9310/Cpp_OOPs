/*
In C++ programming, this is a keyword that refers to the current instance of the class.
There can be 3 main usage of this keyword in C++.

It can be used to pass current object as a parameter to another method.
It can be used to refer current class instance variable.
It can be used to declare indexers(In object-oriented programming, an indexer allows instances of a particular class or struct to be indexed just like arrays.).
*/

#include <iostream>
using namespace std;
class Employee {
   public:
       int id; //data member (also instance variable)    
       string name; //data member(also instance variable)
       float salary;
       Employee(int id, string name, float salary)  
        {  
            this->id = id;  
            this->name = name;  
            this->salary = salary; 
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};

int main(void) {
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee 
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee
    e1.display();  
    e2.display();  
    return 0;
}
