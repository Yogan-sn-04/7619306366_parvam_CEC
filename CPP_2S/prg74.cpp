#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to reverse a number
int revNum(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int rev = revNum(num);

    if (isPrime(num) && isPrime(rev) && num != rev)
        cout << "Yes, the given number is an emirp number. 1\n";
    else
        cout << "No, the given number is not an emirp number.\n";

    return 0;
}
