#include <stdio.h>

void main() {
    int A, B, C;
    printf("Enter A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);
    if(!C) { 
     printf("Invalid input for C");
    }
    else  { 
        printf("A * B / C = %d * %d / %d = %.1f\n", A, B, C, A * B / (float)C);
    }
    system("pause"); // pauses the program; display ONLY;
}