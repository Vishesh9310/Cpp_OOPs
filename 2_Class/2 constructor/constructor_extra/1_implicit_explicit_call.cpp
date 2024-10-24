#include<iostream>
using namespace std;

class Class{
    int x,y;
    public:
    Class(void); //constructor declaration

    Class(int a,int b){
        x=a;
        y=b;
    }

    void print();
};

Class::Class(void){//this is a default constructor as it accepts no parameters
    x=0;
    y=0;

}

void Class::print(){
    cout<<"Values of X and Y are: "<<x<<" and "<<y<<endl;
}

int main(){
    //Imlicit call
    Class c1(2,4);
    c1.print();

    //Explicit call
    Class c2= Class(4,5);
    c2.print();

    Class c3;
    c3=Class(3,4);
    c3.print();

    return 0;
}