#include<iostream>
using namespace std;

int main() {
    int a = 404;

    try {
        if (a == 404) {
            throw 404;
        }
    
    }
    catch (int n) {
        cout << "Exception caught: " << n << endl;
    }

}
