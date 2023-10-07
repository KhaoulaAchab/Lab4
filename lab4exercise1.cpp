/*The Student class from our previous lab is defined below. 
Modify the Student class to include a “GradeBook” class reference as a friend of Student class. 
GradeBook class can access the students’ private information like id, name, age, etc. 
Create an array of Student to instantiate a few objects in main method and print private student information via friend Gradebook class.*/

#include <iostream>
#include <string>

using namespace std;

// Forward declaration of the GradeBook class
class GradeBook;

class Student {
private:
    string netID;  // Unique identifier for the student
    string name;   // Student's name
    int age;       // Student's age

    // /*Declare GradeBook as a friend class to allow access to private members*/


public:
    Student() {}
    Student(string netID, string name, int age)
        : netID(netID), name(name), age(age) {}

    string GetID() const { return netID; }
    string GetName() const { return name; }
    int GetAge() const { return age; }

    void Print() {
        cout << "ID: " << netID
             << " Name: " << name
             << " Age: " << age << endl;
    }

    bool operator <(const Student &obj) const {
        return this->name < obj.name;
    }
};

class GradeBook {
public:
    // Function to print private student information
    static void PrintStudentInfo(const /*Pass in the array of students*/) {
        cout << "Accessing private student information via GradeBook:" << endl;
        // Print the Student ID
        // Print the Student Name
        // Print the student's Age
    }
};

int main() {
    // Create an array of Student objects
    Student students[3];

    // Initialize student objects
    students[0] = Student("ID123", "John", 20);
    students[1] = Student("ID456", "Alice", 22);
    students[2] = Student("ID789", "Bob", 21);

    // Access and print private student information via GradeBook
    for (const Student &student : students) {
       // call the PrintStudentInfo function that belongs to the GradeBook class to print the student information.
    }

    return 0;
}
