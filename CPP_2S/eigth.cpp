//the summation of square of the
#include <iostream>
using namespace std;

int main() 
{
    int n, num, sum = 0;
    cout << "How many numbers?= ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum = sum + (num * num);
    }
    cout << "Sum of squares = " << sum;
    return 0;
}