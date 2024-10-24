//Single Inheritance: A class that is derived from another class.
#include<iostream>
using namespace std;

class parent{
    public:
    int num=10;

    void print(){
        cout<<"digit is: "<<num<<endl;
    }
};

class child: public parent{
    public:
    void change_num(int n){
        num=n;
    }
};

int main(){
    child c1;
    c1.change_num(12);
    c1.print();
    return 0;
}