#include <stdio.h>

int main() {
    int limit;

    // Ask the user for the limit of the pattern
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // First part: Increasing pattern
    for (int i = 2; i <= limit; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Second part: Decreasing pattern
    for (int i = limit; i >= 1; i--) {
        for (int j = limit; j >= limit - i + 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}