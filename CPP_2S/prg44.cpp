#include <iostream>
using namespace std;
class A {
protected:
    int a;
public:
    void get_a() {
        std::cout << "Enter the value of 'a': " << std::endl;
        std::cin >> a;
    }
};

class B : public A {
protected:
    int b;
public:
    void get_b() {
        std::cout << "Enter the value of 'b': " << std::endl;
        std::cin >> b;
    }
};

class C {
protected:
    int c;
public:
    void get_c() {
        std::cout << "Enter the value of c is: " << std::endl;
        std::cin>>c;
}
};
class D : public B, public C {
protected:
    int d;
public:
    void mul() {
        get_a();
        get_b();
        get_c();
        std::cout << "Multiplication of a, b, c is: " << a * b * c << std::endl;
    }
};

int main() {
    D d;
    d.mul();
 return 0;
}