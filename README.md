# Lab-4-Templates

Welcome to OOP-NYUAD lab 4. This lab is designed to help you practice and understand important concepts in object-oriented programming and class inheritance. In each exercise, we'll work on different aspects of class design and hierarchy.

## Exercise 1: GradeBook and Student Classes

### Description
In this exercise, we'll explore the concept of friend classes and access control in C++. We'll extend the `Student` class to include a `GradeBook` class as a friend. This exercise will teach you how to establish friend relationships between classes to allow access to private members. You'll also see how to create an array of objects and access private information using a friend class.

### Sample Output
```
Accessing private student information via GradeBook:
ID:123 Name: John Age: 20
ID:456 Name: Alice Age: 22
ID:789 Name: Bob Age: 21
```

## Exercise 2: Vehicle Class

### Description
Create a `Vehicle` class to store common information about a vehicle, such as the number of wheels, color, fuel type, and max speed. Extend the class to include three derived classes: `Truck`, `Car`, and `Van`. Each derived class should have personalized fields (e.g., `size_of_containers`, `number_of_doors`, `no_of_boxes`) and a utility method to print complete vehicle information.

### Sample Output
```
Truck Information:
Number of Wheels: 18
Color: Blue
Fuel Type: Diesel
Max Speed: 65 mph
Size of Containers: 200 cubic feet

Car Information:
Number of Wheels: 4
Color: Red
Fuel Type: Gasoline
Max Speed: 120 mph
Number of Doors: 4

Van Information:
Number of Wheels: 4
Color: White
Fuel Type: Gasoline
Max Speed: 80 mph
Number of Boxes: 100
```

## Exercise 3: Employee and Derived Classes

### Description
Exercise 3 delves into class inheritance and polymorphism. You'll implement an `Employee` class hierarchy with different pay calculation methods in derived classes. This exercise will demonstrate how to create base and derived classes, override methods, and use virtual functions. By the end, you'll have a strong understanding of inheritance and polymorphism in C++.

### Sample Output
```
Salaried Employee:
Name: Alice
Pay: $50000

Hourly Employee:
Name: Bob
Pay: $600

Commissioned Employee:
Name: Charlie
Pay: $8000
```

## Exercise 4: Bank Account Types

### Description
In the final exercise, we'll expand our knowledge of class inheritance by creating two additional bank account types, `CurrentAccount` and `SavingsAccount`. You'll learn how to define new derived classes with specialized members and methods. Additionally, we'll explore the concept of method overriding. By the end of this exercise, you'll understand how to design complex class hierarchies with multiple levels of inheritance.


### Sample Output
```
Current Account Statement:
Account Holder: John Doe
Number of Withdrawals: 2
Number of Deposits: 1
Balance: $800

Savings Account Statement:
Account Holder: Alice Smith
Number of Withdrawals: 1
Number of Deposits: 2
Balance: $4700
Monthly Interest (Profit): $11.75
