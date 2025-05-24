#include <iostream>
#include <math.h>  
using namespace std;
int main() {
    int choice;
    float p, r, t;
    cout << "Select interest type:\n";
    cout << "1. Simple Interest\n";
    cout << "2. Compound Interest\n";
    cout << "3. Both Simple and Compound Interest\n";
    cout << "Enter your choice (1, 2 or 3): ";
    cin >> choice;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time (in years): ";
    cin >> t;
    switch (choice) {
        case 1: {
            // Simple Interest
            float simpleInterest = (p * r * t) / 100;
            cout << "Simple Interest = " << simpleInterest << endl;
            break;
        }
        case 2: {
            float amount = p * pow(1 + r/ 100, t);
            float compoundInterest = amount - p;
            cout << "Compound Interest = " << compoundInterest << endl;
            break;
        }
        case 3: {
            float simpleInterest = (p * r * t) / 100;
            float amount = p * pow(1 + r / 100, t);
            float compoundInterest = amount - p;
            cout << "Simple Interest = " << simpleInterest << endl;
            cout << "Compound Interest = " << compoundInterest << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please select 1, 2 or 3." << endl;
    }
    return 0;
}
