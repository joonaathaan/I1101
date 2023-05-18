#include <stdio.h>

void main() {
    int i;
    printf("Please enter an integer");
    scanf("%i", &i);
    while(i>0) {
        printf("%i", i%10);
        i/=10;
    }
    system("pause"); // pauses the program; display ONLY;
}