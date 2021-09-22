# Object Oriented Programming

## Concepts of OOPS in C++

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
        - The object contain data (data members) and operations (function or member function)
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
        - Bottom up approach.
        - Promotes code reuse, which reducing redundancy.
        - Hides unnecessay details with the help of Data Abstraction.
        - Polymorphism offers a lot of flexibility.
    - ### What is Object?
        - Object contains data and operation. Data can be referred as the properties of an
          object and operations can be referred as the function used to modify and access the data. 
        - It is an acutal entity to which user is interacted.
        - When object is created only then memory gets allocated.
    - ### What is class?
        - Classes are used to create user defined data types, which contains multiple functions and variables.
        - Classes are blueprint for object.
    - ### What is Friend Function?
        - A function which is present outside the class scope and access the private and protected member of class.
        - It can be declared in public and private section of code.
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
    - ### What is Encapsulation?
        - Binding the data members and member function of class to do a specific job, without reavling the unneccessary detail.
    - ### What is polymorphism?
        - Poly means many and morph means forms. When one thing has many forms it is know as polymorphism.
        - Polymorphism is base class pointer can refer to a variety of objects.
          For example:
            Person is base class and we drived two classes from it one is student and another is faculty. 
            Person *p= new student; //dynamically created pointer of base class which is pointing to derived class.
            P=new facutly();  //simlarly base class pointer has reference of faculty object.
        - Polymorphism is the ability of an object to act diffrently to the same interface(function). 
## Mics Questions

- ### What are access specifiers and what is their significance?
    - It restrict the access of data members and member function of class.
    - These access specifiers also play a very vital role in achieving Encapsulation - one of the major features of OOPs.
- ### Diffrence between class and structure.

