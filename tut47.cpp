#include<iostream>
using namespace std;

class SimpleCalculator{
    int a,b;
public:
    void getData(){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }

    void performOperations(){
       cout<<"The value of a + b is: "<<a + b<<endl;
       cout<<"The value of a - b is: "<<a - b<<endl;
       cout<<"The value of a * b is: "<<a * b<<endl;
       if (b != 0)
           cout<<"The value of a / b is: "<<(float)a / b<<endl;
       else
           cout<<"Cannot divide by zero"<<endl;
    }
};

class ScientificCalculator{
public:
    void run() {
        SimpleCalculator calc;
        calc.getData();
        calc.performOperations();
    }
};

int main(){
    ScientificCalculator sciCalc;
    sciCalc.run();
    return 0;
}
