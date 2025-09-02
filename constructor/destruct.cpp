#include<bits/stdc++.h>
using namespace std;
class myclass{
    public :
    int age;
    myclass(int a){
        age=a;
        cout<<"constructor called";
        cout<<endl;
    }
    ~myclass(){
        cout<<"destructor called";
        cout<<endl;
    }
};

int main() {
    myclass obj(36);
    cout<<"inside main function"<<endl<< endl;
    cout<<obj.age;
    cout<<endl;
   
    return 0;     // Destructor is called
}
