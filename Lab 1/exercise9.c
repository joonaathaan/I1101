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
    printf("%d / %d = %f\n", m ,n, (float)m / n);
    printf("%d %% %d = %d\n", m ,n, m % n);
    system("pause"); // pauses the program; display ONLY;ß
}