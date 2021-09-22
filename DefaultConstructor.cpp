#include<iostream>
using namespace std;

class Sum{
    int num1;
    int num2;
public:
    // void setdata(){
    //     num1=4;
    //     num2=5;
    // }
    Sum(){                //default constructor : used to intialize data member to their default values.
        num1=4;           //call automatically when object is created, as you can see we didn't call it in main function.
        num2=5;
    }

    void getData(){
        cout<<"Sum is: "<<num1+num2;
    }
};

int main(){
    Sum result;
//    result1.setdata();        //calling this function of setting the value of num1=4, num2=5
    result.getData();
}