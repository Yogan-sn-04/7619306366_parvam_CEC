//1,4,7,12,23,......n(limit)
#include <stdio.h>
int main ()
{
    int x=1,y=4,z=7,n;
    scanf("%d",&n);
    while (x<=n)
    {
        int t=x+y+z;
        printf("%d,",x);
        x=y;
        y=z;
        z=t;
    }
    
    return 0;
}