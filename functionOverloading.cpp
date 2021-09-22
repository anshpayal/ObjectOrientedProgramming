#include<iostream>
using namespace std;
//function overloading: Same function name but diffrent agruments.

int sum(int num1, int num2){
    return num1+num2;
}

int sum(int num1, int num2, int num3){
    return num1+num2+num3;
}

int main(){
    int num1=2, num2=3, num3=5;

    cout<<"The sum of 2 and 3 is ->"<<sum(num1, num2)<<endl;
    cout<<"The sum of 2 , 3 , and 5 is ->"<<sum(num1, num2, num3);
}