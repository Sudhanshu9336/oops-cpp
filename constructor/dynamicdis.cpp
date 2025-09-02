#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }
    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo* obj = new Demo();  // dynamic allocation
    cout << "Object created on heap" << endl;

    delete obj;  // 🔹 Destructor runs here manually
    cout << "Object deleted manually" << endl;

    return 0;
}
