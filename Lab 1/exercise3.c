#include <stdio.h>

void main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("The inverse of %d is 1/%d\n", number, number);
}