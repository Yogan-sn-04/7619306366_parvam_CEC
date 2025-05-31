#include<iostream>
using namespace std;
int main()
{
    char str[100],ch;
    int count=0;
    cout<<"Enter the string: ";
    cin>>str;

      for (int i = 0; str[i] != '\0'; i++) 
      {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}