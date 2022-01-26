# Object Oriented Programming
## TOPICS
- [x] About OOPS
- [x] Procedural Oriented Programming
- [x] Programming Paradigm
- [x] Class 
- [x] Object
- [x] Access Modifiers
- [x] Getters and Setters
- [ ] BTS of Object creation
- [x] Object and This pointer
    - [x] Dangaling pointer
    - [x] Void pointer
    - [x] NULL pointer 
    - [x] Wild pointer
- [x] Constructor
    - [x] Default
    - [x] Parameterized
    - [ ] Copy
    - [ ] Deep and Shallow
- [ ] Destructor
- [ ] Initializtion List
- [ ] Const Keyword
    - [ ] Object Creation
    - [ ] const functions
    - [ ] Member data types
- [ ] Static Keyword
- [x] Friend Function
- [x] Friend Class
- [x] Encapsulation
- [x] Abstraction
- [x] Inheritance
    - [x] Types of inheritance
    - [ ] Daimond problem
- [ ] Polymorphism
    - [x] Compile Time
    - [x] Method Overloading
    - [x] Operator Overloading
    - [x] Run Time
    - [x] Method Overriding
    - [x] Virtual function
    - [x] Virtual pointer
    - [ ] Virtual Destrcutor
    - [ ] Template 


**AFTER EVERY CONCEPT CHECKOUT CODE AND RESEARCH MORE FOR BETTER UNDERSTANDING**

- ### Object Oriented Programming
    - It is programming paradigm that is defined using Object instead of only functions 
    - The object contains data (data members) and operations (function or member function) which is used to manipulate the data members. <br> OR <br>
    - It is programming style that revolve around objects.
    - The object is entity that has some properties(data member) and behaviour(functions).
    - We can relate object to real world entity because every object around us also have some properties and behaviour. 
    - For example: You play games. In game thier is a hero and enemy. Hero have some properties like Name, health, level and have some behaviour like Attack, Defense, dance etc. So, In programming Hero and enemy both are objects. 
 - ### Why OOPS in C++?
    - As the size of program increases the readability, maintainbility and bug free nature of program decrease.
    - This was the major problem with C language which relied upon function or procedures.(Hence named as procedural programming language)
    - Data security is another main concern in C language. 

- ###  What are the advantages of OOPS?
    - Improves maintainablity of the code.
    - Helpful in solving complex problems.
    - Promotes code reuse, which reducing redundancy.
    - Hides unnecessay details with the help of Data Abstraction.
    - Polymorphism offers a lot of flexibility.
- ### What are features of OOPS?
     - Four main features:
        - Encapsulation
        - Data Abstraction
        - Inheritance
        - Polymorphism
 - ### Procedural Oriented Programming
    - The main focus is on function not in flow of data.
    - Function can either use local or global data.
    - Data moves openly from function to function.
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


- ### What is Object?
    - Object contains data (data member) and operation (member functions). Data can be referred as the properties of an object and operations can be referred as the function used to modify and access the data. 
    - It is an acutal entity to which user is interacted.
    - When object is created only then memory gets allocated.
- ### What is class?
    - Classes are used to create user defined data types, which contains multiple functions and variables.
    - Classes are blueprint for object.

- ### What is Access Modifiers?
    - It helps in defining the accessibility of the data members and member functions inside class. 
    - There are three types of access modifiers: Public, Private and Protected. 
    - By default all the data member and member function are private. Means it cannot access outside the class.
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
- ### What is Dangling pointer?
A pointer pointing to a memory loaction that has been deleted (non-existing) is called dangling pointer.<br/>
There are three ways where pointer acts as dangling pointer: De allocation of memory, function call and value goes out of scope.
Example:
```C++
int main(){
    int *ptr=(int *)malloc(sizeof(int));
    ....
    ....
    free(ptr); 
    //Now ptr is become dangling pointer because it is pointing to memory location that is free or non-existing.
    //Solution:
    //ptr = NULL;
    return 0;
}
```
- ### What is Void pointer?
    - Void pointer is a specific pointer type **void*ptr**
    - It points to some data loaction in storage, and it also does not have any specific type.
    - It can point any tpye of data.
    - Any pointer type is convertible to a void pointer hence it can point to any value.
```C++
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int x = 4;
	float y = 5.5;
	//A void pointer
	void *ptr;
	ptr = &x;
	// (int*)ptr - does type casting of void
	// *((int*)ptr) dereferences the typecasted
	// void pointer variable.
	printf("Integer variable is = %d", *( (int*) ptr) );
	// void pointer is now float
	ptr = &y;
	printf("\nFloat variable is= %f", *( (float*) ptr) );
	return 0;
}
```
- ### What is NULL pointer?
A pointer is a pointer which is ponting to nothing. if we don't have address to be assigned to pointer, then we can simply use NULL.
```C++
int main()
{
    // Null Pointer
    int *ptr = NULL;
      
    printf("The value of ptr is %p", ptr);
    return 0;
}//OUTPUT: The value of ptr is (nil)
```
- ### What is Wild pointer?
A pointer which has not be intialized to anything (not even NULL) is know as wild pointer. 
```C++
int main()
{
    int *p;  /* wild pointer */
  
    int x = 10;
  
    // p is not a wild pointer now
    p = &x;
  
    return 0;
}
```
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
- ### What is problem in Inheritance in C++ and how it is solved in java?

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
    - As soon as program is compiled, the compiler converts each statement in C++ program into machinge language.
    - Each line of machine language is given its own unique sequential address, therefore each function ends up with a unique address.
    - **Binding** means the process of converting *identifiers* into address. For each variable and functions this binding is done. For function, it means that matching the call with the rigth function definition by the compiler. The binding is done either at compile time or run time.
    - As the name indicates, compiler links the function call with the correct function definition at compile time.<br/>
    For example: <br/>
    - We can achieve Compile time polymorphism by **Function overloading and Operator overloading**.
- ### What is Function Overloading?
Function can have the same name but different parameters.
Advantage: It increase the readability of program because you don’t use different names for the same action.
- ### What is Operator Overloading?
    - In C++ we can use any operator as the function name, by using 'operator' keyword as prefix of any operator(+)
    - But we can only use valid operator.
    - This method is used when we have to add or to implement any other mathematical logic with *non-primitive data*, else till now we are using function two add the two non primitve data.
    - When a opeator is overloaded with multiple jobs, it is know as operator overloading.
- ### What is Runtime polymorphism?

- ### What is Method Overriding?
    - Function overriding in C++ is a feature that allows us to use a function in the child class that is already present in its parent class.
    - The child class inherits all the data members, and the member functions present in the parent class. If you wish to override any functionality in the child class, then you can implement function overriding.
    -  Function overriding means creating a newer version of the parent class function in the child class.<br/>
    *Check code to understand the problem in overriding* 
- ### What is virtual function?
A virtual function is a member function which is declared in the base class using the keyword virtual and is re-defined (Overriden) by the derived class.
- ### Rule of virtual function?
    - Virtual functions cannot be static.
    - A virtual function can be a friend function of another class.
    - The prototype of virtual functions should be the same in the base as well as derived class.
    - They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.

    - Concept 1:
        - In any class, if virtual function is decalred then compiler itself create one extra variable inside parent class which is virtual pointer (*__vptr__). For checking this, create the object of class and check size, it will 2 bytes more.
        - For child class, compiler do not declare virtual pointer seprately becuase it gets inherited from parent class. 
        - It depends on object, whenever you create object of class vptr is created but only in case if class has virtual function or parent class contains virtual function.
        - If parent class contain virtual function then the overriden class also become virtual without declaring it virtual.
    - Concept 2:
        - Compiler make static array, which stores pointers pointing to function.
        - This static array is called Vtable.
        - Every child class has it own Vtable.
        - Virtual pointer (*__vptr__) points to vtable.


## Mics Questions

- ### What are access specifiers and what is their significance?
    - It restrict the access of data members and member function of class.
    - These access specifiers also play a very vital role in achieving Encapsulation - one of the major features of OOPs.
- ### Diffrence between class and structure.

- ### Diffrence between C and C++.

- ### Diffrence between java and C++.

