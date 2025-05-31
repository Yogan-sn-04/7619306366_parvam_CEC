//number of divisors//
#include <iostream>
using namespace std;
int main() {
    int n, count = 0,a[10],i;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            a[i] = i; 
        }
    }

    cout << "Number of divisors of " << n << " is: " << count << endl;
    if (count==8)
    {
        cout << "The number is a sphenic number." << endl;
    }
    else
    {
        cout << "The number is not a sphenic number." << endl;
    }

    return 0;
};