#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    return 0;
}
