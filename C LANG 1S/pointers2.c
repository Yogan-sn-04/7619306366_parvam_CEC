#include <stdio.h>

int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    printf("n=%d pointer address = %x",p,&p);
    return 0;
}