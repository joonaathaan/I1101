#include <stdio.h>
#include <stdlib.h>

void main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("The absolute value obtained = %d\n", abs(x-y));
    system("pause"); // pauses the program; display ONLY;
}