#include<iostream>
using namespace std;

int main(){
    //What is a pointer; ---> data type which holds the address of other data types

    int a=3;
    // int * b = &a;
    int * b;
    b = &a;
    // & --> Address of Operator;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    
    // * --> Dereference operator;
    cout<<"The value at address is "<<*b<<endl;

    // Pointer to Pointer
    int ** c =&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address is "<<*c<<endl;
    cout<<"The value at address is "<<**c<<endl;

    return 0;
}