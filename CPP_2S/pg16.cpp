#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Binary: ";
    while(n > 0) 
    {
        cout << n % 2;
        n = n / 2;      
    }
    return 0;
}