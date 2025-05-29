#include <iostream>
using namespace std;

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

int main() {
    string name;
    int id;
    float baseSalary, bonus, overtimePay;

    // Input for Manager
    cout << "Enter Manager Details\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    cout << "Base Salary: ";
    cin >> baseSalary;
    cout << "Bonus: ";
    cin >> bonus;
    cin.ignore(); // To clear newline after bonus input

    Manager mgr(name, id, baseSalary, bonus);

    // Input for Developer
    cout << "\nEnter Developer Details\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    cout << "Base Salary: ";
    cin >> baseSalary;
    cout << "Overtime Pay: ";
    cin >> overtimePay;

    Developer dev(name, id, baseSalary, overtimePay);

    // Display details
    cout << "\nManager Details:\n";
    mgr.display();

    cout << "\nDeveloper Details:\n";
    dev.display();

    return 0;
}
