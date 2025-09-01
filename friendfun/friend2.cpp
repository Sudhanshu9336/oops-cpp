#include<iostream>
using namespace std;

// Ab compiler sochta hai:
// "Thik hai, shikha toh abhi define ho rahi hai ✅"
// "Par shivi kya hota hai ❓ Ye class hai? function hai? variable hai? 🤔"
// Lekin us waqt tak compiler ne class shivi { ... }; ko dekha hi nahi hai (wo neeche likha hai).
// Isliye compiler confuse ho jaata hai → aur error throw kar deta hai.
class shivi;
class shikha{
    private:
    int money=10;
    friend void sudhanshu(shikha,shivi);

};
class shivi{
    private:
    int money=20;
    friend void sudhanshu(shikha,shivi);
};
void sudhanshu(shikha s,shivi sh){
    cout<<"Shikha's money: "<<s.money<<endl;
    cout<<"Shivi's money: "<<sh.money<<endl;
    cout<<"sum of both money is "<<s.money + sh.money<<endl;
}
int main(){
    shikha s;shivi sh;
    sudhanshu(s,sh);
}
