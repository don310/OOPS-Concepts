#include<iostream>
using namespace std;

// Base Class
class Employee{
   
    public:
     int id;
    float salary;
        Employee(int inpid){
            id = inpid;
            salary = 34.5;
        }
    Employee(){}
};

// Derived Class Syntax
/*
 class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
 {
    class members/methods/etc...
Notes:
1. Default visibility mode is private
2. Public visibility mode: Public members of the base class becomes public members of the derived class
3. Private visibility mode: Public members of the base class becomes private members of the derived class
4. Private members are never inherited
 }
 */

// Creating a programmer class derived from employee base class
// Derived Class
class Programmer : public Employee{ // Public inheritance
public:
    Programmer(int inpid){ // Initialize base class using initialization list
         id = inpid; // No need to initialize id here as it's already initialized in the base class constructor
    }
    int languageCode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};


int main(){
    Employee deepak(1), rohan(2);
    cout<<"Deepak's salary: "<<deepak.salary<<endl; // Accessing salary using public member function
    cout<<"Rohan's salary: "<<rohan.salary<<endl; // Accessing salary using public member function
    Programmer skillf(10); // Creating object of derived class
    cout<<"Skillf's salary: "<<skillf.salary<<endl; // Accessing inherited member
    cout<<"Skillf's language code: "<<skillf.languageCode<<endl;
    cout<<"Skilif's data: "; 
    skillf.getdata();
    return 0;
}

//Syntax of inheritance
// Derived Class syntax
// class derived_class_name : access_modifier base_class_name
// {
// body of the derived class
// }


// Syntax of single inheritance
// class ClassA
// {
//     body of ClassA
// };
 
//derived from ClassA
// class ClassB : public ClassA
// {
    //body of ClassB
// };


//Multivalue inheritance
// class ClassA
// {
//     //body of ClassA
// };
 
// class ClassB
// {
//     //body of ClassB
// };
 
// //derived from ClassB and Class C
// class ClassC : public ClassA, public ClassB
// {
//     //body of ClassC
// };



