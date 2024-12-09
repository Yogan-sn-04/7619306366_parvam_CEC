#include <stdio.h>
int main()
 {
    int n, sum = 0;
    printf("Enter a no");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
     {
        sum += i;
    }
    printf("the summation is %d\n",sum);
    return 0;
}
