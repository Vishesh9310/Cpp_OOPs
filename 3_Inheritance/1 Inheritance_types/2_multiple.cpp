//Multiple Inheritance: A class can also be derived from more than one base class, using a comma-separated list.
#include<iostream>
using namespace std;

class parent1{
    public:

    void father(){
        cout<<"I am a father"<<endl;
    }
};

class parent2{
    public:

    void mother(){
        cout<<"I am a mother"<<endl;
    }
};

class child: public parent1, public parent2{
};

int main(){
    child c1;
    c1.father();
    c1.mother();
    return 0;
}