#include <iostream>
using namespace std;

// Function 1: add with 2 ints
int add(int a, int b) {
    return a + b;
}

// Function 2: add with 3 ints
int add(int a, int b, int c) {
    return a + b + c;
}

// Function 3: add with 2 doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Add two ints: " << add(10, 20) << endl;
    cout << "Add three ints: " << add(10, 20, 30) << endl;
    cout << "Add two doubles: " << add(5.5, 4.5) << endl;
    return 0;
}
copy