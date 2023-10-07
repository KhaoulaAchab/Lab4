/*Create a class called Vehicle to store common information about a vehicle 
like number of wheels, color, fuel type, max speed etc. Create 3 derived c-
lasses named Truck, Car and Van and add personalized fields like 
size_of_containers for Truck, number_of_doors for Car and no_of_boxes for 
the Van class. Implement print method in each derived class to print compl-
ete vehicle information.*/

/*Create a class called Vehicle to store common information about a vehicle
like number of wheels, color, fuel type, max speed etc. Create 3 derived c-
lasses named Truck, Car and Van and add personalized fields like 
size_of_containers for Truck, number_of_doors for Car and no_of_boxes for 
the Van class. Implement print method in each derived class to print compl-
ete vehicle information.*/

#include <iostream>
#include <string>

using namespace std;

// Base class: Vehicle
class Vehicle {
protected:
    int numWheels;
    string color;
    string fuelType;
    int maxSpeed;

public:
    Vehicle(int wheels, string clr, string fuel, int speed)
        : numWheels(wheels), color(clr), fuelType(fuel), maxSpeed(speed) {}

    void Print() {
        cout << "Number of Wheels: " << numWheels << endl;
        cout << "Color: " << color << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Max Speed: " << maxSpeed << " mph" << endl;
    }
};

// Derived class: Truck
class Truck : public Vehicle {
private:
    int sizeOfContainers;

public:
    Truck(int wheels, string clr, string fuel, int speed, int containers)
        : Vehicle(wheels, clr, fuel, speed), sizeOfContainers(containers) {}

    void Print() {
        cout << "Truck Information:" << endl;
        Vehicle::Print();
        cout << "Size of Containers: " << sizeOfContainers << " cubic feet" << endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(int wheels, string clr, string fuel, int speed, int doors)
        : Vehicle(wheels, clr, fuel, speed), numberOfDoors(doors) {}

    void Print() {
        cout << "Car Information:" << endl;
        Vehicle::Print();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

// Derived class: Van
class Van : public Vehicle {
private:
    int numberOfBoxes;

public:
    Van(int wheels, string clr, string fuel, int speed, int boxes)
        : Vehicle(wheels, clr, fuel, speed), numberOfBoxes(boxes) {}

    void Print() {
        cout << "Van Information:" << endl;
        Vehicle::Print();
        cout << "Number of Boxes: " << numberOfBoxes << endl;
    }
};

int main() {
    // Create instances of each vehicle type
    Truck truck(18, "Blue", "Diesel", 65, 200);
    Car car(4, "Red", "Gasoline", 120, 4);
    Van van(4, "White", "Gasoline", 80, 100);

    // Print vehicle information
    truck.Print();
    cout << endl;
    car.Print();
    cout << endl;
    van.Print();

    return 0;
}

