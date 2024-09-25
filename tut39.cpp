#include<iostream>
using namespace std;

class Base {
protected:
    int a;
private:
    int b;
};

class Derived: protected Base {
    // No additional members or methods specified in the Derived class
};

int main() {
    Base b;
    Derived d;
    
    // Accessing the 'a' member of Base class directly is not possible
    // because it's protected and cannot be accessed outside the class or its derived classes.
    // To access 'a', you would need to provide a public member function in the Base class or its derived classes.
    
    return 0;
}
