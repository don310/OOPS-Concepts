#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
     return (fib(n-2) + fib(n-1));
    }
 }
    

// // fib(5)
// fib(3) + fib(4)

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

int main(){
    // fsctorial of a number
    //6! = 6*5*4*3*2*1
    //0! = 1 by definition
    //1! = 1 by definition
    //n! = n * (n-1)

    int n;
    cout<<"Enter a number of terms "<<endl;
    cin>>n;
    // cout<<"The factorial of a is "<<factorial(a)<<endl;
    for(int i = 0; i < n; i++){
    cout<<fib(i)<<"";
    }
    return 0;
}
