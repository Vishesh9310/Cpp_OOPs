/*A copy constructor is a member function that initializes an object using another object of the same class
A Copy constructor is an overloaded constructor used to declare and initialize an object from another object.

ClassName (ClassName &obj)
{
  // body_containing_logic
}
*/

#include<iostream>
using namespace std;

class Number{
  int a;
  public:
    Number(){};

    Number(int num){
      a=num;
    }

    Number(Number &obj){
      cout<<"copy construtor call"<<endl;
      a=obj.a;
    }

    void display(){
      cout<<"The number for this object is "<<a<<endl<<endl;
    }
};

int main(){
    Number x,z(23),z2;
    z.display();

    Number z1(z);//copy constructor invoked
    z1.display();

    z2=z; //copy constructor not called
    z2.display();

    Number z3=z; //copy constructor invoked
    z3.display();

    //when no copy constructor is found, compiler supplies its own copy constructor

    return 0;
}