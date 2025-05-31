//palandrome in strings
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    int len = strlen(str);
    bool isPalindrome = true;
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome)
        cout << str << " is a palindrome sequence." << endl;
    else
        cout << str << " is not a palindrome sequence." << endl;

    return 0;
}