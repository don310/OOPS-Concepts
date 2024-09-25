#include<iostream>
using namespace std;

//Single inheritance
class Base {
    int data1; // Private by default and is not inheritable
public:
    int data2; // Corrected semicolon
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData() {
    data1 = 10;
    data2 = 20;
}

int Base :: getData1() {
    return data1; // Added semicolon
}

int Base :: getData2() {
    return data2;
}

class Derived: private Base { // Class is being derived publicly
    int data3;
public:
    void process();
    void display();
};

void Derived :: process() {
    setData();
    data3 = data2 * getData1();
}

void Derived :: display() {
    cout<<"value of data1 is "<<getData1() <<endl; // Corrected output message
    cout<<"value of data2 is "<<data2<<endl; // Corrected output message
    cout<<"value of data3 is "<<data3<<endl; // Corrected output message
}

int main() {
    Derived der;
    // der.setData();
    der.process();
    der.display();
    return 0;
}
 