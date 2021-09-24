#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    int salary;
public:
    void setData(int ID, int sal){
        id=ID;
        salary=sal;
    }
    void getData(){
        cout<<"Employee ID:"<<id<<" and Employee salary is:"<<salary<<endl;
    }
};


int main(){
    Employee Ansh,Ashish;
    Ansh.setData(1123,5000);      //We can see that,we are not able to access the id , salary variable directly  using set function to set data
    Ashish.setData(1124,6000);
    Ansh.getData();              //using getdata function for getting data.
    Ashish.getData();
}