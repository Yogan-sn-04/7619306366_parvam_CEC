#include <stdio.h>

int main() {
    int start, end;
    int sum_even = 0, sum_odd = 0;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum_even += i;  
        } else {
            sum_odd += i;   
        }
    }
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);
    return 0;
}
