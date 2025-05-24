#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,p,r,n,t,ci;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time (in years): ";
    cin >> t;
    a=p*pow(1+r/100,t);
    ci=a-p;
    cout<<"ci:"<<ci;
    return 0;

}
