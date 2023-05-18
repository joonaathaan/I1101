#include <stdio.h>

void main() {
    int X;
    printf("Enter an integer: ");
    scanf("%d", &X);
    if(0<= X && X < 37) {
        printf("Category A\n");
    }
    else {
        printf("Category B\n");
    }
    system("pause"); // pauses the program; display ONLY;
}