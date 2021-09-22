#include<iostream>
using namespace std;

class Sum{
    int num1;
    int num2;
public:
    Sum(){      //default constructor
        num1=0;
        num2=0;
    }
    Sum(int a, int b){  //parameterized constructor defination
        num1=a;
        num2=b;
    }
    
    void getData(){
        cout<<"Sum is: "<<num1+num2<<endl;
    }
};

int main(){
    Sum result1;
    result1.getData();
    Sum result2(4,5);            //parameterized constructor
    result2.getData();
    Sum result3(8,11);
    result3.getData();
}