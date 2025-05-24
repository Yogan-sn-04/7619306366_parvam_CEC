#include <iostream>
using namespace std;
int main() 
{
    int binary, decimal = 0, power = 1,lastDigit;
    
    cout << "Enter binary number: ";
    cin >> binary;
    while(binary > 0) 
    {
        lastDigit = binary % 10;  
        decimal += lastDigit * power; 
        power *= 2;                  
        binary /= 10;                
    }
    cout << "Decimal number: " << decimal;
    return 0;
}