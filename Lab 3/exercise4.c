#include <stdio.h>

void main() {
    int number = 4, sum = 0;
    while (number<=49)
    {
        sum += number * number;
        number += 3;
    }
    printf("The sum is %d\n", sum);
}