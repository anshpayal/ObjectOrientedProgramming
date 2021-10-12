#include<iostream>
using namespace std;

class BaseClass{
public:
    void Display(){
        cout<<"This is BASE CLASS"<<endl;
    }
    void showData(){
        cout<<"No data is present:"<<endl;
    }
};

class DerivedClass : public BaseClass{
public:
    void Display(){ //Method overriding: Function present in derived class and have same prototype 
        cout<<"This is DERIVED CLASS"<<endl;
    }
    void showData(int x){ //Method Hiding: function present in derived class, same name but diffrecnt arguments  
        cout<<"Data present:"<<x<<endl;
    }
};

int main(){
    DerivedClass obj;
    obj.Display(); // This will call derived class display function because the object is of derived class.Hence it is Early Binding


    //obj.showData(); // As we can see that, showData() function without argument is present in base class. So, you may think that it will first search in derived class and then goes to base class and call that function but here this is not the case.
    //In C++, this case will throw error, because it will don't go search for showData() in base class. 
    //If showData() function with argument is not present in derived class then it go to base class and call showData().


    obj.showData(10); //This will call showdata function with argument which is present in derived class.
}