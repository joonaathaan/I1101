#include <stdio.h>
#include <stdlib.h>

void main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    x -= y;
    printf("The absolute value obtained = %d\n", abs(x));
}