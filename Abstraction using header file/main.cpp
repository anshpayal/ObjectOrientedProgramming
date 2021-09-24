#include<iostream>
#include "Circle.cpp"

using namespace std;

int main(){
    Circle c1(4);
    Circle c2(6);
    cout<<"Area of Circle one is: "<<c1.area()<<" and Perimeter of circle one is: "<<c1.perimeter()<<endl;
    cout<<"Area of Circle two is: "<<c2.area()<<" and Perimeter of circle two is: "<<c2.perimeter()<<endl;
}

