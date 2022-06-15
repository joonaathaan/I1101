#include <stdio.h>

void main() {
    int digit;
    do {
        printf("Please enter a number(0-9): ");
        scanf("%d", &digit);
    }
    while(digit > 9 || digit < 0);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", digit, i, digit*i);
    }
}