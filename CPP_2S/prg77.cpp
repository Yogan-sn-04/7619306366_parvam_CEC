#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; ++i) 
    {
        if (n % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}