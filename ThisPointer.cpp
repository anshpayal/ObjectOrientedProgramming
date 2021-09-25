#include<iostream>
using namespace std;

class Box{
int l,b,h;
public:
    void setDimension(int l, int b, int h){
        this->l=l;   //this pointer cotains the address of the caller object. Currently this pointer is pointing to instance variable(data member "l") of object.
        this->b=b;
        this->h=h;
    }
    void showDimension(){
        cout<<"Length:"<<l<<" "<<"Breadth:"<<b<<" "<<"Height:"<<h;
    }
};

int main(){
    Box smallbox;
    smallbox.setDimension(1,2,3);
    smallbox.showDimension();
}