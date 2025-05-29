#include <stdio.h>

int main() {
    int m=10, n=99, t=77;
    t = m;
    m = n;
    n = t;
    printf("After swapping:\n");
    printf("m = %d\n", m);
    printf("n = %d\n", n);
    return 0;
}
