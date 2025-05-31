#include<iostream>
using namespace std;
int main()
{
    int count,n,i;
    cout<<"Enter an integer:";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    count++;
    
    }

    cout<<"Number of divisors of "<<n<<" is:"<<count<<endl;
    if (count==8)
    cout<<"The number is a sphenic number"<<endl;
    else
    cout<<"The number is not a sphenic number"<<endl;
    return 0;

}