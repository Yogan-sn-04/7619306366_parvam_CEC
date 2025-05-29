//1,4,9,25,36,49,81,....n(limit)
#include <stdio.h>
int main()
 {
    int limit,x;
    scanf("%d", &limit);
    for (x = 1; x<= limit; x++)
     {
         if (x%4==0)
        {
            continue;
        }
        printf("%d,", x*x);
    }
    return 0;
}
