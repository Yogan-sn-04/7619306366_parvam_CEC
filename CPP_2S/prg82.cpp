// autobiographical number
#include <iostream>
#include <string>
using namespace std;

bool isAutobiographical(int n)
{
    string num = to_string(n);
    int len = num.length();
    int count[10] = {0};

    for (char c : num)
    {
        count[c - '0']++;
    }

    for (int i = 0; i < len; i++)
    {
        if ((num[i] - '0') != count[i])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isAutobiographical(n))
        cout << n << " is an autobiographical number." << endl;
    else
        cout << n << " is not an autobiographical number." << endl;

    return 0;
}