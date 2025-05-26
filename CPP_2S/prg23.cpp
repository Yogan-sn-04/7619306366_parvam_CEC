#include <iostream>
using namespace std;
int main() {
    const int s = 5;
    int arr1[s], arr2[s], sum[s];
    cout << "Enter 5 elements for first array:\n";
    for(int i = 0; i < s; i++) {
        cin >> arr1[i];
    }
    cout << "Enter 5 elements for second array:\n";
    for(int i = 0; i < s; i++) {
        cin >> arr2[i];
    }
    for(int i = 0; i < s; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    cout << "Sum of arrays:\n";
    for(int i = 0; i < s; i++) {
        cout << sum[i] << " ";
    }
    return 0;
}