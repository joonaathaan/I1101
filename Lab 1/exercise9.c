#include <stdio.h>

void main() {
    int m, n;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("You entered %d and %d\n", m, n);
    printf("%d + %d = %d\n", m ,n, m + n);
    printf("%d - %d = %d\n", m ,n, m - n);
    printf("%d * %d = %d\n", m ,n, m * n);
    printf("%d / %d = %f\n", m ,n, m / (n * 1.0));
    printf("%d %% %d = %d\n", m ,n, m % n);
}