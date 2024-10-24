#include<iostream>
using namespace std;

class student{
    public:
    int id;
    string name;

    void put_data(int i,string n){
        id=i;
        name=n;
    }
    
    void get_data(){
        cout<<"ID :"<<id<<endl;
        cout<<"Name :"<<name<<endl;
    }
};

int main(){
    student s1;
    int s_id;
    string s_name;
    cout<<"Enter Id: ";
    cin>>s_id;
    cout<<"Enter Name: ";
    cin>>s_name;
    s1.put_data(s_id,s_name);
    s1.get_data();

    return 0;
}