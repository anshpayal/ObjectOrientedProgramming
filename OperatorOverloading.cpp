#include<iostream>
using namespace std;

class Complex{
    int realNumber;
    int imaginaryNumber;
public:
    void setData(int x, int y){
        realNumber=x;
        imaginaryNumber=y;
    }
    void showData(){
        cout<<"Real part sum is:" <<realNumber<<endl;
        cout<<"Imaginary part sum is:"<<imaginaryNumber<<endl;
    }
    // Complex add(Complex c){
    //     Complex temp;
    //     temp.realNumber=realNumber+c.realNumber;
    //     temp.imaginaryNumber=imaginaryNumber+c.imaginaryNumber;
    //     return temp;
    // }
    Complex operator +(Complex c){
        Complex temp;
        temp.realNumber=realNumber+c.realNumber;
        temp.imaginaryNumber=imaginaryNumber+c.imaginaryNumber;
        return temp;
    }
};

int main(){
    Complex c1,c2,c3,c4;
    c1.setData(2,3);
    c2.setData(4,6);
    //c3=c1+c2;        // when complier reach to this line, it tries to find out the right defination of '+' operator 
                     //Because complier knows how to add the primitve type of data but it is complex type of data, Hence it throws error.
    
    //c3=c1.add(c2);    //It means that c1 ne add function ko call kiya, add function me c2 ko pass kiya gya or function ne sum return kiya jooki c3 me aake store hogya.
    //c3.showData();

// TILL NOW IT IS NORMAL PROGRAM OF ADDING COMPLEX NUMBERS
// In C++ we can use any operator as the function name, by using 'operator' keyword as prefix of any operator(+)
//But we can only use valid operator.
// This method is used when we have to add or to implement any other mathematical logic with non-primitive data, else till now we are using function two add the two non primitve data.

    c3=c1.operator+(c2); //Just name of function is changed.
    c3.showData();
    
    c4=c1+c2;          //answer will be same just format of function call get changed
    c4.showData();

//Hence here we created more then one defination of '+' operator. 
//When a opeator is overloaded with multiple jobs, it is know as operator overloading.
// It is way to implement compile time polymorphism.
    



}