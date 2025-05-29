//print the fibonocci series of n mumbers
#include <stdio.h>

int main()
{
    int f0 = 0, f1 = 1, counter = 1, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    while (counter <= n)
    {
        if (counter == 1)
        {
            printf("%d", f0); 
        }
        else if (counter == 2)
        {
            printf(", %d", f1); 
        }
        else
        {
            int f2 = f0 + f1; 
            printf(", %d", f2);
            f0 = f1; 
            f1 = f2; 
        }
        counter++;
    }

    printf("\n"); 
    return 0;
}

