#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 34, 34, 54, 56};
    int mathMarks[4];
    mathMarks[0] = 1442;
    mathMarks[1] = 12244;
    mathMarks[2] = 1432;
    mathMarks[3] = 122;
    mathMarks[4] = 122;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<mathMarks[4]<<endl;

    // You can change the value of an array
    marks[2] = 45;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    //quick quiz: do the same using while and do-while loop

    // Pointers and Arrays

    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    // cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
 
    return 0;
}