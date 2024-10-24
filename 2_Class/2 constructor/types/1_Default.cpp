// Default constructors
#include <bits/stdc++.h>
using namespace std;
class Myclass{
    public:
    int id;
    
    //Default Constructor
    Myclass()
    {
        cout << "Default Constructor called" << endl; 
        id=-1;
    }
};

int main() {
    // obj1 will call Default Constructor
    Myclass obj1;
    cout <<"Myclass id is: "<<obj1.id << endl;

    return 0;
}
