#include "Circle.h"

//definition of all member function. 

Circle::Circle(){
    radius=0;
    pi=3.14;
}
Circle::Circle(int r){
    radius=r;
    pi=3.14;
}
double Circle::area(){
    return pi*radius*radius;
}
double Circle::perimeter(){
    return 2*pi*radius;
}