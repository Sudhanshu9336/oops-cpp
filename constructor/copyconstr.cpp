#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    //parametrised
    student(string n,int a){
        name=n;
        age=a;
        cout<<"parametrised constructor called"<<endl;
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
    //copy constructor
    student(const student &s){
        name=s.name;
        age=s.age;
        cout<<"copy constructor called"<<endl;
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
};


int main(){
    student s1("sudhanshu", 21);
    student s2 = s1;  // Calls copy constructor
    return 0;
}

