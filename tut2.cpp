#include<iostream>
using namespace std;

int glo=6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=78;
    // int a=4;
    // int b=5;
    int a=4, b=5;
    float pi=3.14;
    char c ='u';
    bool is_true = true;
    bool is_false = false;
    sum();
    cout<< glo;
    cout<<is_true<<is_false;
    // cout<<"Here the value of a is: "<<a<<"\nthe value of b is: "<<b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}
