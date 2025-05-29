#include<iostream>
using namespace std;
class Base {
protected:
    int x;
};
class Derived : public Base {
public:
    void setX(int val) {
        x = val;
    }
    void display() {
        cout << "Value of x: " << x << endl;
    }
};
int main() {
    Derived d;
    d.setX(50);
    d.display();
    return 0;
}