//Function overloading:

#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"HEllo vishesh"<<endl;
    }

    int  sayHello(int name, int n){
        cout<<"HEllo vishesh"<<endl;
    }

    void sayHello(int name){
        cout<<"HEllo vishesh"<<name<<endl;
    }
    
    void sayHello(char name){
        cout<<"HEllo vishesh"<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();

    return 0;
}

//if we want to use many function with same so we need to change input argumets parameters or input arguments parameter types in all them.just like sayHello functions.