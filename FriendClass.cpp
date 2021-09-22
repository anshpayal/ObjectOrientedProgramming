#include<iostream>
using namespace std;

class complex;    //forward declartion

class Realpart{
public:
    int sumOfRealPart(complex o1, complex o2); //here o1 and o2 is of complex type thats why we did the forward declartion
};

class complex{
    int num1;
    int num2;
    //friend int Realpart::sumOfRealPart(complex, complex); //friend function declartion so that member function of real part can access the private member (num1, num2)
    friend class Realpart;  //By declaring frined class here, now all the functions of Realpart can access the private member of complex class, this is to avoid individual decalartion for every function of same class.
public:
    void setData(int a,int b){
        num1=a;
        num2=b;
    }
    void getData(void){
        cout<<num1<<" + "<<num2<<"i"<<endl;
    }
};

int Realpart::sumOfRealPart(complex o1, complex o2){ //defination of sumOfRealPart.
        int sum=o1.num1+o2.num1;
        return sum;
}

int main(){
    complex c1,c2;
    Realpart sum;
    c1.setData(2,5);
    c2.setData(3,2);
    c1.getData();
    c2.getData();
    int result=sum.sumOfRealPart(c1,c2);
    cout<<result;
}