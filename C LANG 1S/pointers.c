#include <stdio.h>

int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    printf("var n value %D address is %x",n,&n);
    printf("\npointer p target  value %d target address is %x pointer adress is %x",*p,p,&p);
    return 0;
}