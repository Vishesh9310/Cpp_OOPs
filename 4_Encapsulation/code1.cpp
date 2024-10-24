/*
Encapsulations: wrapping up data members and function(methods and behaviour)

1. fully encapsulated class: all datamembers are private ( access in same class only.)
2. Information hiding or Data hiding.


advantages:
1. data hide(security).
2. if we want, we can make class-"Read only."
3. code reusablility.
4. encapsulation: unit *packing/testing.*
*/

#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}