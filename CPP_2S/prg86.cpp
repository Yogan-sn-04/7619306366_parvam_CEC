#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    cout << "String without repeated letters: ";
    for (int i = 0; str[i] != '\0'; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == i) {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}