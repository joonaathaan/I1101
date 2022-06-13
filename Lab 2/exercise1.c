#include <stdio.h>

void main() {
    int A, B, C;
    printf("Saisir les trois entiers A, B et C: ");
    scanf("%d %d %d", &A, &B, &C);
    if(!C) {
        printf("Invalid input for C");
        return;
    }
    printf("A * B / C = %d * %d / %d = %.1f\n", A, B, C, A * B / (C * 1.0));
}