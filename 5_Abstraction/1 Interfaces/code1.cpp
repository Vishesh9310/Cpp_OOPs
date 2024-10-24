#include<iostream>
using namespace std;

class Shape {
    public:
    virtual double getArea() const=0;//pure virtual function
    virtual double getPerimeter()=0;//pure virtual function
};

class Circle: public Shape{
    private:
    double radius;

    public:

    // Circle(double r){
    //     radius=r;
    // }

    Circle(double r):radius(r){}

    double getArea() const override{
        return 3.14159265359 * radius * radius;
    }
    
    double getPerimeter() override{
        return 2 * 3.14159265359 * radius;
    }
};

int main(){
    Circle circle(5.0);
    cout<<"Area: "<<circle.getArea()<<endl;
    cout<<"Perimeter: "<<circle.getPerimeter()<<endl;

    return 0;
}