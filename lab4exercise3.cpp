/*Implement the Employee and derived classes.
In the Employee hierarchy, getPay() is implemented differently in each subcla-
ss and must be a virtual method. Provide implementation for getPay() for each 
derived class.*/

#include <iostream>
#include <string>

using namespace std;

// Base class: Employee
class Employee {
protected:
    string name;
    float pay;

public:
    // Default constructor with default values
    Employee(string n = "John", float p = -1) : name(n), pay(p) {}

    // Define Virtual function to calculate pay for the employee 
    

    string getName() const {
        return name;
    }
};

// Derived class: SalariedEmployee
class SalariedEmployee : public Employee {
public:
    // Constructor with default values
    SalariedEmployee(string n = "John", float salary = 0) {
        name = n;
        pay = salary;
    }

    // Setter for salary
    void setSalary(float p) {
        pay = p;
    }

    // Override the getPay method to return salary
    float getPay() const {
        return pay;
    }
};


// Using the SalariedEmployee class as an example, define the Derived class: HourlyEmployee {
private:
    float workingHours;

public:
    // Define Constructor with default values
    

    // Define Setters for wage and working hours
   

    // Override the getPay method to calculate pay based on wage and working hours
    
};

//
// Define Derived class: CommissionedEmployee  {
private:
    float commissionRate;
    float volumeOfSales;

public:
    // Define Constructor with default values
    

    // Setters for base pay, commission rate, and volume of sales
   

    // Override the getPay method to calculate pay based on base pay and commission
    
};

int main() {
    // Create instances of each type of employee
    SalariedEmployee salariedEmployee("Alice", 50000);
    HourlyEmployee hourlyEmployee("Bob", 15, 40);
    CommissionedEmployee commissionedEmployee("Charlie", 30000, 0.1, 50000);

    // Print information and pay for each employee
    cout << "Salaried Employee:" << endl;
    cout << "Name: " << salariedEmployee.getName() << endl;
    cout << "Pay: $" << salariedEmployee.getPay() << endl;

    cout << "\nHourly Employee:" << endl;
    cout << "Name: " << hourlyEmployee.getName() << endl;
    cout << "Pay: $" << hourlyEmployee.getPay() << endl;

    cout << "\nCommissioned Employee:" << endl;
    cout << "Name: " << commissionedEmployee.getName() << endl;
    cout << "Pay: $" << commissionedEmployee.getPay() << endl;

    return 0;
}
