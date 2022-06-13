#include <stdio.h>

void main() {
    int x, y;
    printf("Please enter 2 integers: ");
    scanf("%d %d", &x, &y);
    x += y;
    y = x - y;
    x -= y;
    printf(" the exchanged values of x and y are %d, %d respectively\n", x, y);
}
