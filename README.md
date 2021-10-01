# Object Oriented Programming

- **Function Overloading**: 
    Function can have the same name but different parameters.
    Advantage: It increase the readability of program because you don’t use different names for the same action.
 - ### Why OOPS?
    - As the size of program increases the readability, maintainbility and bug free nature of program decrease.
    - This was the major problem with C language which relied upon function or procedures.(Hence named as procedural programming language)
    - Data security is another main concern in C language. 
 - ### Proceducal Oriented Programming
    - The main focus is on function not in flow of data.
    - Function can either use local or global data.
    - Data moves openly from function to function.
- ### Object Oriented Programming
    - It is programming paradigm that is defined using Object instead of only functions 
    - The object contains data (data members) and operations (function or member function) used to manipulate the data members.
- ### Programming Paradigms 
    - The method of classification of programming language based on their features.
     - Mainly two types:
         - Imperative Programming Paradigm
            - Procedural Programming Paradigm
            - Object-Oriented Programming or OOP
            - Parallel Programming
        - Declarative Programming Paradigm
            - Logical Programming Paradigm
            - Functional Programming Paradigm
            - Database Programming Paradigm
- ### What are features of OOPS?
     - Four main features:
        - Encapsulation
        - Data Abstraction
        - Inheritance
        - Polymorphism
- ###  What are the advantages of OOPS?
    - Improves maintainablity of the code.
    - Helpful in solving complex problems.
    - Promotes code reuse, which reducing redundancy.
    - Hides unnecessay details with the help of Data Abstraction.
    - Polymorphism offers a lot of flexibility.
- ### What is Object?
    - Object contains data (data member) and operation (member functions). Data can be referred as the properties of an object and operations can be referred as the function used to modify and access the data. 
    - It is an acutal entity to which user is interacted.
    - When object is created only then memory gets allocated.
- ### What is class?
    - Classes are used to create user defined data types, which contains multiple functions and variables.
    - Classes are blueprint for object.
- ### What is Friend Function?
    - A function which is present outside the class scope and access the private and protected member of class.
    - It can be declared in public and private section of class.
    - It cannot access  the members directly by using name, instead need object to access the member (example: objectname.membername).
- ### What is Friend Class?
    - A friend class is a class that can access the private and protected members of a class in which it is declared as friend.
    - In friend function, we have to declare every function individually even if it is of same class.
    - But if we want that the each and every member function of a class can access the private member of another class then we declare the class as friend class.
- ### What is constructor?
    - It is special method inside the class that inovked automatically when object of class is created.
    - It has same name as class.
    - It is special becuase it has no return type.
- ### Types of constrcutor
     - Default constructor.
        - Used to intialize the default values of data members.
        - Even if we do not create the default constructor, compiler will call a default constructor automatically and set data members to some junk value.
        - The constructor with no parameter called default constructor.
    - Parameterized constructor.
        - Used to set user defined values by passing an agrument to the constructor.
        - The constructor with parameter is called parameterized construtor.
        - It provides different values to distinct object.
    - Copy constructor.
- ### What is this pointer?
    - **Object Pointer:** A pointer contains address of object is called object pointer.<br/>
    Let's take a example that their is a class name **Box**, which has data members **l,b and h** and member functions **setDimension() & showDimension()**. 
    ```C++
    int main(){
        Box *p ;//this is a pointer of type Box
        Box smallBox; //this object of class Box
        p=&smallBox; //pointer p stores the address of smallBox object thats why it is object pointer
        p->setDimension(1,2,3); //can access the member function using pointer
        p->showDimension();
    }
    ``` 
    - **This Pointer:** 
        - this is a keyword in C++.
        - this is a local object pointer in every instance member function of class containing address of the caller object. (instance member function are those function which do not contain the static keyword as prefix)
        - this pointer can not be modify.
        - It is used to refer caller object in member function.
- ### What is Encapsulation?
    - Binding the data members and member function of class to do a specific job, without reavling the unneccessary detail.
- ### What is Abstraction?
    - Only relavant parts of the application get revealed, while keeping inner implementation hidden becuase user does not care about implementation, only need relavant outptut.
    - Provides security of program
    - Can change implementation of class independently without affecting user experience.
    - We can achieve abstraction:
        - **Abstraction using class:** Class helps to group data member and member function together using access specifiers and a class can decide which data member will be visible to outside world.
        - **Abstraction using header file:** We can create the seprate file which contains delacartion part of the class and later import it in main file.
- ### What is inheritance?
    - It is process of inheriting properties and behaviours of existing class into a new class.<br/>
    ```C++
    class BaseClass{

    }
    class DerivedClass: accessSpecifier BaseClass{

    }
    ```
- ### Types of inheritance
    - Single inheritance.<br/>
    ```C++
    class BaseClass{

    }
    class DerivedClass: public BaseClass{

    }
    ```
    - Multilevel inheritance.<br/>
    ```C++
    class BaseClass{

    }
    class DerivedClass1: public BaseClass{

    }
    class DerivedClass2: public DerivedClass1{
        
    }
    ```
    - Multiple inheritance.<br/>
    ```C++
    class BaseClass1{

    }
    class BaseClass2{

    }
    class DerivedClass2: public BaseClass1, public BaseClass2{
        
    }
    ```
    - Hierarchical inheritance.<br/>
    ```C++
    class BaseClass{

    }
    class DerivedClass1: public BaseClass{

    }
    class DerivedClass2: public BaseClass{
        
    }
    ```
    - Hybrid inheritance:It is mixture of two or more tpyes of inheritance.

- ### What is role of access specifiers (class DerivedClass: **accessSpecifier** BaseClass{};) while inherting the class?
Consider that their is  Base class (class A) and Derived class (class B). There are three ways in which we can use the access specifiers while inherting:<br/>
```C++
Class A{
private:
    //members
protected:
    //members
public:
    //members
};
Class B: Access_Specifier A{
private:
    //members
protected:
    //members
public:
    //members
};
```
- Class A: **private** B (Class A: B) -> It means public and protected members of Base class (class A) when inherited by derived class (class B), they will become private member of derived class (class B).
- Class A: **protected** B -> It means public and protected members of Base class (class A) when inherited by derived class (class B), they will become protected member of derived class (class B).
- Class A: **public** B -> It means public and protected members of Base class (class A) when inherited by derived class (class B), they will remain same in derived class (class B) also.

- ### What is polymorphism?
    - Poly means many and morph means forms. When one thing has many forms it is know as polymorphism.
    - Polymorphism is the ability of an object to take on many forms.
- ### Types of polymorphism?
    - There are two tpyes of polymorphism.
        - Compile time polymorphism.
        - Runtime polymorphism.
- ### What is compile time Polymorphism / Early binding/ static ?
    - When program starts executing, it executes from main() in c++. 
    - If function call get encountered, the execution jumps to the beginning of function being called.
    - 



## Mics Questions

- ### What are access specifiers and what is their significance?
    - It restrict the access of data members and member function of class.
    - These access specifiers also play a very vital role in achieving Encapsulation - one of the major features of OOPs.
- ### Diffrence between class and structure.

