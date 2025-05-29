#include<stdio.h>
int main()
{
    int x, y, z, lowerlimit, upperlimit;
    scanf("%d%d%d",&x,&y,&z);
    if(y<z){
        upperlimit = z;
        lowerlimit = y;
    }
    else{
        upperlimit = y;
        lowerlimit = z;
    };
    if(x>lowerlimit&&x<upperlimit){
        printf("Middle");
    }
    else if (x<lowerlimit){
        printf("Left");
    }
    else{
        printf("Right");
    };
    return 0;
}
