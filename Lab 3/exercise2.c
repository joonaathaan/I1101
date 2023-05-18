#include <stdio.h>

void main() {
    int number, sum = 0, odd = 0, even = 0;
    for(int i=0; i < 10; i++) {
        printf("Plese enter an integer: ");
        scanf("%d", &number);
        sum += number;
        if(number % 2 == 0) even += number;
        else ++odd;
    }
    printf("The average of the integers entered is %f\n", sum/10.0);
    printf("The number of th odd integers is %d\n", odd);
    printf("The sum of seven integers is %d\n", even);
    system("pause"); // pauses the program; display ONLY;
}