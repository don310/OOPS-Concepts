#include<iostream>
using namespace std;


// struct employee{
// int id;
// char favchar;
// int salary;
// };

// int main(){
//     struct employee deepak;
//     deepak.id = 1;
//     deepak.favchar = 'c';
//     deepak.salary = 120000;

//     cout<<"Employee id is "<<deepak.id<<endl;
//     cout<<"Employee favchar is "<<deepak.favchar<<endl;
//     cout<<"Employee salary is "<<deepak.salary<<endl;

// How the use of typedef in structure
    typedef struct employee{
    int id;
    char favchar;
    int salary;
    } ep;
    
     union money
    {
        int rice;
        int car;
        int pounds;
    };

    int main(){
        enum Meal{ breakfast, lunch, dinner };
        Meal m1 = breakfast;
        cout<<breakfast;
        // cout<<breakfast;
        // cout<<lunch;
        // cout<<dinner;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice;

    // ep deepak;
    // deepak.id = 1;
    // deepak.favchar = 'c';
    // deepak.salary = 120000;

    // cout<<"Employee id is "<<deepak.id<<endl;
    // cout<<"Employee favchar is "<<deepak.favchar<<endl;
    // cout<<"Employee salary is "<<deepak.salary<<endl;

   
    return 0;
}