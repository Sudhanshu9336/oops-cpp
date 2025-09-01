#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count;   // static variable declaration

    Student(string n) {
        name = n;
        count++;   // increases every time object is created
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

// Static variable must be defined outside the class
int Student::count = 0;

int main() {
    Student s1("Sudhanshu");
    Student s2("Dhruv");
    Student s3("Shikha");

    cout << "Total Students: " << Student::count << endl; // Access without object

    return 0;
}
// 2. Static Function in Class
// A static function can be called without creating an object.
// It can only access static variables (not normal instance variables).