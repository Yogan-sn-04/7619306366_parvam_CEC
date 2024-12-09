#include<stdio.h>

int main()
{
    int size=0,a[100],i,n;
    scanf("%d",&size);
    for(i=0;i<size;scanf("%d",&a[i++]));
    for(i=0;i<size;printf("%d ",a[i++]));
}