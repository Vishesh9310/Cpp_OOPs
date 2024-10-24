#include<iostream>
using namespace std;

class Car{
    public:
    //data members
    int mileage=1000;
    int speed=120;

    //member functions
    void On_headlight(){
        cout<<"Head Lights are on"<<endl;
    }

    void Off_headlight(){
        cout<<"Head Lights are off"<<endl;
    }
};

int main(){
    Car new_car; //new_car is an object of the Class Car
    new_car.On_headlight();
    cout<<new_car.mileage;


    return 0;
}