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
    Complex add(Complex c){
        Complex temp;
        temp.realNumber=realNumber+c.realNumber;
        temp.imaginaryNumber=imaginaryNumber+c.imaginaryNumber;
        return temp;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(4,6);
    //c3=c1+c2;        // when complier reach to this line, it tries to find out the right defination of '+' operator 
                     //Because complier knows how to add the primitve type of data but it is complex type of data, Hence it throws error.
    
    c3=c1.add(c2);    //It means that c1 ne add function ko call kiya, add function me c2 ko pass kiya gya or function ne sum return kiya jooki c3 me aake store hogya.
    c3.showData();

// TILL NOW IT IS NORMAL PROGRAM OF ADDING COMPLEX NUMBERS

    

}