#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
public:
    void setRadius(float r) {
        radius = r;
    }
    void area() {
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Circle c;
    c.setRadius(5);
    c.area();
    return 0;
}