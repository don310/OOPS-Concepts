#include<iostream>
using namespace std;

class Animals{

    private: 
        int a, b;

    public:
        int c, d;
    void setData(int a, int b);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
    }
};

void Animals :: setData(int a1, int b1){
    int a = a1;
    int b = b1;
}
int main(){
    Animals bird;
    bird.c = 23;
    bird.d= 34;
    bird.setData(2, 5);
    bird.getData();

    return 0;
}