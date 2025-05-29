#include <iostream>
#include <string>

using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;
    float baseSalary;

protected:
    // Protected constructor
    Employee(string n, int i, float b) : name(n), id(i), baseSalary(b) {}

    // Function to calculate base salary only
    virtual float calculateSalary() {
        return baseSalary;
    }

public:
    // Function to display details
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }

    // Virtual destructor
    virtual ~Employee() {}
};

// Derived class: Manager
class Manager : public Employee {
private:
    float bonus;

public:
    // Constructor
    Manager(string n, int i, float bSalary, float b)
        : Employee(n, i, bSalary), bonus(b) {}

    // Override calculateSalary
    float calculateSalary() override {
        return baseSalary + bonus;
    }

    // Override display
    void display() override {
        cout << "Manager Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

// Derived class: Developer
class Developer : public Employee {
private:
    float overtimePay;

public:
    // Constructor
    Developer(string n, int i, float bSalary, float otPay)
        : Employee(n, i, bSalary), overtimePay(otPay) {}

    // Override calculateSalary
    float calculateSalary() override {
        return baseSalary + overtimePay;
    }

    // Override display
    void display() override {
        cout << "Developer Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    // Create Manager and Developer objects
    Manager mgr("Alice Johnson", 101, 5000.0f, 1200.0f);    // baseSalary = 5000, bonus = 1200
    Developer dev("Bob Smith", 202, 4000.0f, 800.0f);        // baseSalary = 4000, overtimePay = 800

    // Display their details
    mgr.display();
    cout << endl;
    dev.display();

    return 0;
}