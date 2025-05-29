#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;
    float baseSalary;

public:
    Employee(string n, int i, float bs) {
        name = n;
        id = i;
        baseSalary = bs;
    }

    void calculateSalary() {
        cout << "Salary: " << baseSalary << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        calculateSalary();
    }
};

// Derived class - Manager
class Manager : public Employee {
private:
    float bonus;

public:
    Manager(string n, int i, float bs, float b) : Employee(n, i, bs) {
        bonus = b;
    }

    void calculateSalary() {
        float total = baseSalary + bonus;
        cout << "Total Salary (Base + Bonus): " << total << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        calculateSalary();
    }
};

// Derived class - Developer
class Developer : public Employee {
private:
    float overtimePay;

public:
    Developer(string n, int i, float bs, float ot) : Employee(n, i, bs) {
        overtimePay = ot;
    }

    void calculateSalary() {
        float total = baseSalary + overtimePay;
        cout << "Total Salary (Base + Overtime): " << total << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        calculateSalary();
    }
};

// Main function
int main() {
    Manager mgr("Alice", 101, 5000.0, 1200.0);
    Developer dev("Bob", 102, 4000.0, 800.0);

    cout << "Manager Details:\n";
    mgr.display();

    cout << "\nDeveloper Details:\n";
    dev.display();

    return 0;
}
