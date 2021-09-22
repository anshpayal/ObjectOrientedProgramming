#include<iostream>
using namespace std;
//4+5i complex number
class complex{
    int num1;
    int num2;
public:
    void setData(int a, int b){
        num1=a;
        num2=b;
    }
    void getData(void){
        cout<<num1<< " + "<<num2<<"i "<<endl;
    }
    friend complex sumOfComplex(complex o1, complex o2);  //By declaring the sumOfComplex inside class we can access its private member.
};

complex sumOfComplex(complex o1, complex o2){     
    complex o3;
    o3.setData((o1.num1+o2.num1),(o1.num2+o2.num2));
    return o3;
}

int main(){
    complex obj1, obj2, sum;
    obj1.setData(4,5);
    obj1.getData();
    obj2.setData(8,7);
    obj2.getData();
    sum=sumOfComplex(obj1,obj2);
    sum.getData();
}