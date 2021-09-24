#ifndef CIRCLE_H  // these two command tell the compiler that this header file can be used in multiplaces.
#define CIRCLE_H
//Declare all the member of the class here.
class Circle
{
private:
    int radius;
    double pi;
public:
    Circle();
    Circle(int r);
    
    double area();
    double perimeter();
};
#endif

