#include<iostream>
using namespace std;

class Employee{    //class name employee
    private:
        string name;                      //private data members can access directly outside the class
        int salary;
    public:
        int DOB;                          //anyone can access this data member outside the class 
        void setData(string Empname, int Empsalary, int EmpDOB ); 
        // {         //member function
        //     name=Empname;
        //     salary=Empsalary;
        //     DOB=EmpDOB;
        // }
        void getData(){
            cout<<"Employee name is:"<<name<<endl;
            cout<<"Employee Data of birth is:"<<DOB<<endl;
            cout<<"Employee salary is:"<<salary<<endl;
        }
};

void Employee::setData(string Empname, int Empsalary, int EmpDOB ){    //defination of setData function using scoperesolution outside the class.
    name=Empname;
    salary=Empsalary;
    DOB=EmpDOB;
}


int main(){
    Employee Ansh;                  //created object of class Employee.
    Ansh.setData("Ansh",5000,18);   //setting the using member function data
    Ansh.getData();                 //getting the data using member function.

//    cout<<"Name of Employee:"<<Ansh.name<<endl;    //this give error because we are accessing the private data member of class.
//    cout<<"DOB of Employee:"<<Ansh.DOB<<endl;      //execute successfully because DOB is public data member.
}