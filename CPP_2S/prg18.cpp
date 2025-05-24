#include<iostream>
using namespace std;
int main() 
{
    float a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
     a=a+b;
     b=a-b;
     a=a-b;
    cout<< "After swapping a=" <<a <<"\n";
    cout<< "After swapping b=" <<b <<"\n";
    return 0;
}