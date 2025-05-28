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
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Person p1;
    p1.getData();
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;

    Rectangle rect;
    float l, w;
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    rect.setValues(l, w);
    rect.displayArea();

    return 0;
}
