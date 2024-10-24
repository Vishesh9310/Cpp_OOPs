#include<iostream>
using namespace std;

class Class{
    int x,y,z;
    public:
    Class(){
        x=0;
        y=0;
        z=0;
    };

    Class(int a,int b=10,int c=13){
        x=a;
        y=b;
        z=c;
    }

    void print();
};

void Class :: print(){
    cout<<"Values of X,Y and Z are: "<<x<<" and "<<y<<" and "<<z<<endl;
}

int main(){
    Class c1(12),c2(12,54),c3;

    c1.print();
    c2.print();
    c3.print();

    

    return 0;
}