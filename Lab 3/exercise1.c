#include <stdio.h>

void main() {
    int digit;
    do {
        printf("Please enter a number(0-9): ");
        scanf("%d", &digit);
    }
    while(digit > 9 || digit < 0);
    printf("The multiplication table of %d is:\n", digit);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", digit, i, digit*i);
    }
    system("pause"); // pauses the program; display ONLY;
}