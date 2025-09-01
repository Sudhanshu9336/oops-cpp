#include<iostream>
using namespace std;

// shape ek abstract class hai kyunki isme ek pure virtual function hai → virtual void draw() = 0;
// Iska object ban nahi sakta.
class shape{
    public:
    virtual void draw() = 0;// Shape abstract class hai → usme draw() pure virtual function hai.
    void display(){
        cout<<"Displaying shape"<<endl;
    }
};

// circle ne draw() function ka definition de diya (override kar diya).
// Ab circle abstract nahi hai, isliye iska object ban sakta hai.
class circle:public shape{
    public:
    void draw(){
        cout<<"Drawing a circle"<<endl;
    }
};
int main(){
    //shape s; // Error: cannot declare variable 's' to be of abstract type 'shape'
    circle c;
    c.draw();
    c.display();
//     shape* s = new circle();
// s->draw();  // Circle ka draw() chalega
}
// Abstract class me pure virtual + normal functions dono ho sakte hain.
// Pure virtual → force karta hai derived class ko override karne ke liye.
// Normal functions → reuse ke liye hote hain (jaise tumne display() likha).

// Q2. Pure virtual function kya hota hai?
// Ek virtual function jiska implementation base class me nahi hota, aur sirf = 0 likha hota hai. Syntax:
// virtual void functionName() = 0;