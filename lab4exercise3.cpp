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
    virtual float getPay() const = 0;

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
    float getPay() const override {
        return pay;
    }
};

// Derived class: HourlyEmployee
class HourlyEmployee : public Employee {
private:
    float wage;
    float workingHours;

public:
    // Constructor with default values
    HourlyEmployee(string n = "John", float w = 0, float hours = 0)
        : wage(w), workingHours(hours) {
        name = n;
    }

    // Setters for wage and working hours
    void setWage(float w) {
        wage = w;
    }

    void setWorkingHours(float hours) {
        workingHours = hours;
    }

    // Override the getPay method to calculate pay based on wage and working hours
    float getPay() const override {
        return wage * workingHours;
    }
};

// Derived class: CommissionedEmployee
class CommissionedEmployee : public Employee {
private:
    float basePay;
    float commissionRate;
    float volumeOfSales;

public:
    // Constructor with default values
    CommissionedEmployee(string n = "John", float base = 0, float rate = 0, float sales = 0)
        : basePay(base), commissionRate(rate), volumeOfSales(sales) {
        name = n;
    }

    // Setters for base pay, commission rate, and volume of sales
    void setBasePay(float base) {
        basePay = base;
    }

    void setCommissionRate(float rate) {
        commissionRate = rate;
    }

    void setVolumeOfSales(float sales) {
        volumeOfSales = sales;
    }

    // Override the getPay method to calculate pay based on base pay and commission
    float getPay() const override {
        return basePay + (commissionRate * volumeOfSales);
    }
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
