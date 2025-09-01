#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int age;

    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;  // Calls default constructor
    Student s2("Alice", 20);  // Calls parameterized constructor

    s1.display();
    s2.display();

    return 0;
}
