#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
int main(){
    // Implict call
    Point p(1, 2);
    // Explicit call
    Point a = Point(4, 2);

    p.displayPoint();
    a.displayPoint();

    return 0;
}

//Create a function which takes 2 point objects and computes the distance between those points ->sqrt