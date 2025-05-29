#include <stdio.h>

int main() 
{
    int size = 0, a[100], even[100], odd[100], i, even_count = 0, odd_count = 0;
    scanf("%d", &size);
    for (i = 0; i < size; scanf("%d", &a[i++]));
    for (i = 0; i < size; printf(" %d ", a[i++]));
    for (i = 0; i < size; (a[i] % 2 == 0 ? (even[even_count++] = a[i]) : (odd[odd_count++] = a[i])), i++);
    printf("\nEven :");
    for (i = 0; i < even_count; printf(" %d ", even[i++]));
    printf("\nOdd :");
    for (i = 0; i < odd_count; printf(" %d ", odd[i++]));

    return 0;
}
