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
    - ### What is Encapsultional?
        - Binding the data members and member function of class to do a specific job, without reavling the unneccessary detail.

