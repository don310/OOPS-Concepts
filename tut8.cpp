#include<iostream>
using namespace std;

int main(){
   
    int age;
    cout << "Tell me your age: " << endl;
    cin >> age;
    // Selection Control structure: if-else loadder
    // int age;
    // cout << "Tell me your age: " << endl;
    // cin >> age;
    // if(age < 18){
    //     cout << "Your age is less than 18." << endl;
    // }
    // else if(age == 18){
    //     cout << "Your age is equal to 18." << endl;
    // }
    // else{
    //     cout << "Your age is greater than 18." << endl;
    // }
    // Selection Control structure: Switch Case Statement

    switch (age)
    {
    case 18:
        cout << "You are 18." << endl;
        break;
    case 22:
        cout << "You are 22." << endl;
        break;
    case 3:
        cout << "You are 3." << endl;
        break;
    default:
        cout << "No special cases." << endl;
        break;
    }

    return 0;
}
