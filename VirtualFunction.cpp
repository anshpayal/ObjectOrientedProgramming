//CHECK CODE OF ProblemInOverriding.cpp

#include<iostream>
using namespace std;

class ParentClass{
public:
    virtual void Display(){
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
    Solution of this problem is stop early binding, because of early binding compiler is binding the pointer 
    with parentclass display function on the basics of type of pointer.
    By doing late binding (dynamic binding / Runtime binding) 
    To achieve late binding, declare the virtual keyword before parent class display function.
    OUTPUT: THIS IS CHILD CLASS
*/