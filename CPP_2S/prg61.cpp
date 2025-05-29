#include <iostream>
using namespace std;

class Polygon {
public:
    int l, b;
    void getData() {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;
    }
};

class Triangle : public Polygon {
public:
    void area() {
        float a = 0.5f * l * b;
        cout << "Area of Triangle = " << a << endl;
    }
};

class Rectangle : public Polygon {
public:
    void area() {
        int a = l * b;
        cout << "Area of Rectangle = " << a << endl;
    }
};
class Circle {
private:
    float radius;
public:
    void setRadius(float r) {
        radius = r;
    }
    void area() {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Triangle t;
    cout << "Triangle:" << endl;
    t.getData();
    t.area();

    Rectangle r;
    cout << "\nRectangle:" << endl;
    r.getData();
    r.area();
     
    Circle c;
    c.setRadius(9);
    c.area();
    return 0;

    return 0;
}