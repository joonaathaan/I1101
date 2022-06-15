#include <stdio.h>

void main() {
    int a, b, S = 0;
    do {
        printf("Enter 2 positive integers: ");
        scanf("%d %d", &a, &b);
    }
    while(a < 0 || b < 0);
    while (a >= 1) {
        S += a * b;
        a--;
        b++;
    }
    printf("The sum of this series is %d\n", S);
}