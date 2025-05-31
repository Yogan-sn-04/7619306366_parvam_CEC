//FIND VOWELS
#include<iostream>
using namespace std;

int main()
{
    char ch;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    cout << "Type a letter from the alphabet: ";
    cin >> ch;

    int i;
    for(i = 0; i < 5; i++) {
        if(ch == vowels[i]) {
            break;
        }
    }

    if(i < 5)
        cout << ch << " is a vowel." << endl;
    else
        cout << ch << " is not a vowel." << endl;

    return 0;
}