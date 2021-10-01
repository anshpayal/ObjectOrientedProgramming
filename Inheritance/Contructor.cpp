#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(int x){
         a=x;
    }
    void showA(){
        cout<<"Value of a:"<<a<<endl;
    }
};

class B: public A{
    int b;
public:
    B(int x, int y):A(x){
        b=y;
        showB();
    }
    void showB(){
        showA();
        cout<<"Value of b:"<<b<<endl;
    }
};
int main(){
    B obj(6,12);
}