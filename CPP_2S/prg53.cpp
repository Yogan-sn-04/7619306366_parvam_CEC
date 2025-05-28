#include <iostream>
using namespace std;

// 4. Scope Resolution Operator Example
class Calculator {
public:
    int add(int a, int b); // Declaration
};

// Definition using scope resolution operator
int Calculator::add(int a, int b) {
    return a + b;
}

// 5. Use Protected Members
class Base {
protected:
    int protectedValue;
};

class Derived : public Base {
public:
    void setValue(int val) {
        protectedValue = val;
    }

    void displayValue() {
        cout << "Protected Value from Base: " << protectedValue << endl;
    }
};

// 6. Object with Multiple Functions - Circle
class Circle {
private:
    float radius;

public:
    void inputRadius() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void calculateArea() {
        float area = 3.1416 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

// 7. Multiple Objects of a Class - Employee
class Employee {
public:
    string name;
    int id;

    void input() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> id;
    }

    void display() {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    // 4. Calculator Example
    Calculator calc;
    int sum = calc.add(5, 10);
    cout << "Sum using Calculator: " << sum << endl;

    // 5. Derived using Protected
    Derived d;
    d.setValue(42);
    d.displayValue();

    // 6. Circle Area
    Circle c;
    c.inputRadius();
    c.calculateArea();

    // 7. Multiple Employees
    Employee e1, e2, e3;
    cout << "\nEnter data for Employee 1:\n";
    e1.input();
    cout << "\nEnter data for Employee 2:\n";
    e2.input();
    cout << "\nEnter data for Employee 3:\n";
    e3.input();

    cout << "\n--- Employee Details ---\n";
    e1.display();
    e2.display();
    e3.display();

    return 0;
}
