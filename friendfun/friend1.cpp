// 🧑‍💻 Friend Function in C++

// 👉 Definition:
// Friend function ek aisa function hai jo class ka member nahi hota lekin fir bhi wo us class ke private aur protected members ko access kar sakta hai.
// Iske liye class ke andar friend keyword se us function ko declare karna padta hai.
// ✅ Example Code:
#include <iostream>
using namespace std;

class A {
private:
    int privateData;

protected:
    int protectedData;

public:
    A() {
        privateData = 10;
        protectedData = 20;
    }

    // Friend function declaration
    friend void showData(A obj);
};

// Friend function definition (class ke bahar likhte hain)
void showData(A obj) {
    cout << "Accessing private data: " << obj.privateData << endl;
    cout << "Accessing protected data: " << obj.protectedData << endl;
}

int main() {
    A obj;
    showData(obj); // friend function call
    return 0;
}

// 🔎 Output:
// Accessing private data: 10
// Accessing protected data: 20

// ⚡ Key Points:

// showData class A ka member function nahi hai, lekin friend ki wajah se private/protected members ko access kar sakta hai.

// Friend function ko object ke through call nahi karte, simple normal function ki tarah call hota hai.

// Ye encapsulation todta hai, isiliye ise carefully use karte hain.