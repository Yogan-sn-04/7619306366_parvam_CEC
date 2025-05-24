#include <iostream>
#include <math.h>  
using namespace std;
int main()
{
    int n,dig,i;
    cout<<"please enter the number:";
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        cout<<dig<<"\n";
        n=n/10;
    }
}