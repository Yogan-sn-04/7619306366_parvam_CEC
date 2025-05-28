#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void getData() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }
};
class Rectangle {
private:
    float length;
    float width;
public:
    void setValues(float l, float w) {
        length = l;
        width = w;
    }
    void displayArea() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};
class Student {
private:
    string name;
    int rollNo;
public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};
int main() {
    Person p1;
    p1.getData();
    cout << "\n--- Person Details ---" << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    Rectangle rect;
    float l, w;
    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;
    rect.setValues(l, w);
    rect.displayArea();
    string sName;
    int sRoll;
    cout << "\nEnter student name: ";
    cin >> sName;
    cout << "Enter roll number: ";
    cin >> sRoll;
    Student s1(sName, sRoll);
    cout << "\n--- Student Details ---" << endl;
    s1.display();
    return 0;
}
