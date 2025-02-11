/*
Enum in C++ is a data type that contains fixed set of constants.
It can be used for days of the week (SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY and SATURDAY) , directions (NORTH, SOUTH, EAST and WEST) etc.
The C++ enum constants are static and final implicitly.
C++ Enums can be thought of as classes that have fixed set of constants.

//Points to remember for C++ Enum
1. enum improves type safety
2. enum can be easily used in switch
3. enum can be traversed
4. enum can have fields, constructors and methods
5. enum may implement many interfaces but cannot extend any class because it internally extends Enum class
*/

#include <iostream>  
using namespace std;  
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };  
int main()  
{  
    week day;  
    day = Friday;  
    cout << "Day: " << day+1<<endl;  
    return 0;  
}     