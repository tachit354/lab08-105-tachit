#include<iostream>
#include<string>
using namespace std;


int main(){
    int age = 0;
    int height = 0;
    int money = 0;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100 ){
            name = "Chopper";
        }else if(height < 180){
            name = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> money;
            if(money > 1100000000){
                name = "Zoro";
            }else name = "Sanji";
        }
    }else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> money;
        if (money > 500000000) name = "Jinbe";
        else name = "Franky";
    }else name = "Brook";

    cout << "Your character = " << name << "\n";
    return 0;

}
