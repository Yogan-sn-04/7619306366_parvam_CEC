#include <iostream>
using namespace std;
class A {
    int a = 4;
    int b = 5;
public:
    int mul() {
        cout << "in class a" << endl;
        int c = a * b;
        cout << "returning c" << endl;
        return c;
    }
};

class B : public A {
public:
    void display() {
        cout << "in class b" << endl;
        int result = mul();
        cout << "Multiplication of a and b is: " << result << std::endl;
    }
};

int main() {
    B b;
    cout <<"b.display funtion";
    b.display();
    cout <<"b.mul funtion";
    b.mul();
    return 0;
}