#include<stdio.h>
int main ()
{
    int f0=0,f1=1,counter=1,n=0;
    scanf("%d",&n);
    while(counter<=n)
    {
        int f2=f0+f1;
        printf("\n%i",f0);
        f0=f1;
        f1=f2;
        counter++;

    }
    return 0;
    
}