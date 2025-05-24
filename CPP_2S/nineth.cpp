#include <iostream>
using namespace std;

int main() {
    int size = 0, a[100], *large;
    
    cin >> size;
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }

    large = &a[0]; // Start with the first element

    for (int i = 1; i < size; ++i) {
        if (*large < a[i]) {
            large = &a[i];
        }
    }

    cout << "Largest element is " << *large << endl;

    return 0;
}
