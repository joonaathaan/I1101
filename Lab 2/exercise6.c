#include <stdio.h>

void main() {
    int a, b;
    printf("Please enter 2 integers: ");
    scanf("%d %d", &a, &b);
    if(b != 0 && a % b == 0) {
        printf("%d is divisible by %d\n", a, b);
    }
    else {
        printf("%d is not divisible by %d\n", a, b);
    }
    system("pause"); // pauses the program; display ONLY;
}