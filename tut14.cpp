#include<iostream>
using namespace std;

/// function prototype
//type fumction name(arguments);
// int sum(int a, int b); // -->Acceptable
// int sum(int a, b); // --> Not acceptable
int sum(int , int ); // --> Acceptable
// void g(void); //--> Acceptable
void g();

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    //formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}

void g(){
    cout<<"\ngood morning";
}