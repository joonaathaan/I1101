#include <stdio.h>

void main() {
    int number_1, number_2, number_3;
    float average;
    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &number_1, &number_2, &number_3);
    average =  (number_1 +  number_2 + number_3) / 3;
    printf("The average of the 3 numbers is %.2f\n", average);
}