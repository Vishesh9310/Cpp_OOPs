//Parameterized Constructor
#include <iostream>
using namespace std;

class Myclass{
    public:
    int a;
    int b;
    Myclass(int x, int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"a "<<a<<endl;
        cout<<"b "<<b<<endl;
    }
};

int main(){
    Myclass m1(10,20);
    m1.print();

    return 0;
}