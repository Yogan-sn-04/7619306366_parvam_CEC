//C Program to Check if a given Integer is Odd or Even
#include<stdio.h>

int main()
{
    int no=0,x;
    scanf("%i",&no);
    printf("%d is %s",no,(no%2==0)?"even no" : "odd no");
    return 0;
}