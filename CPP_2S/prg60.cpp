#include <iostream>
#include <cmath>
using namespace std;
class Shape 
{
public:
    virtual void calcArea() 
    {
        cout << "Area not defined for generic shape." << endl;
    }
};
class Circle : public Shape 
{
private:
    double radius;
public:
    Circle(double r) 
    {
        radius = r;
    }
    void calcArea() override 
    {
        double area =3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
class Rectangle : public Shape 
{
private:
    double length, width;
public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    void calcArea() override
    {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};
class Triangle : public Shape 
{
private:
    double base, height;
public:
    Triangle(double b, double h) 
    {
        base = b;
        height = h;
    }
    void calcArea() override 
    {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};
int main() 
{
    double radius, length, width, base, height;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    Triangle triangle(base, height);

    cout << endl;
    circle.calcArea();
    rectangle.calcArea();
    triangle.calcArea();

    return 0;
}
