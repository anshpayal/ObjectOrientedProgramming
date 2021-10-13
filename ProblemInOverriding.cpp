/*
NOTE: READ THIS BEOFRE CHECKING CODE.
1. Parent class pointer can point to child class pointer.
2. At compile time, compiler don't know the address inside the pointer because at compile time 
there is no mermory allocated.
*/ 

#include<iostream>
using namespace std;

class ParentClass{
public:
    void Display(){
        cout<<"THIS IS PARENT CLASS"<<endl;
    }

};

class ChildClass : public ParentClass{
public:
    void Display(){ //Method Overriding 
        cout<<"THIS IS CHILD CLASS"<<endl;
    }
};


int main(){
    ParentClass *pointer, obj1;
    ChildClass obj2;
    pointer=&obj2; //from point 1 in note

    pointer->Display();
}
/*
    OUTPUT: THIS IS PARENT CLASS
    The problem Here is :
    The pointer of parent class which is calling display function is pointing to Child class object.
    So according to overriding concept the Child class display function should called but this not happed.
    Because of point number 2 in note.
    At compile time (early binding) compiler check the type of pointer which is of Parent class type,
    it binds the call with parent class display function. Because at compile time, compiler don't know the address inside pointer.
*/

/*
    Solution of this problem is stop early binding, because of early binding compiler is binding the pointer 
    with parentclass display function on the basics of type of pointer.
    By doing late binding (dynamic binding / Runtime binding) 
    To achieve late binding, declare the virtual keyword before parent class display function.
    CHECK THE SOLUTION OF THIS IN VIRTUAL FUNCTION CODE.
*/