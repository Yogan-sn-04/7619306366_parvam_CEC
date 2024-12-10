//1,2,4,7,11,16,22,..........n(limit)
#include <stdio.h>
int main()
 {
    int limit,x,current=1,diff=1;
    scanf("%d", &limit);    
    for (x = 1; x<= limit; x++)
     {
        printf("%d ", current);
        current += diff;
        diff++;
     }
    return 0;
}
  