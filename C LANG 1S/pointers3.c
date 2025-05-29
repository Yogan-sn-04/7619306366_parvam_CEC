#include <stdio.h>

int main() 
{
    int n=0,*p=&n;
    scanf("%d",&n);
    printf("var n value %d address is %x",n,&n);
   return 0;
}