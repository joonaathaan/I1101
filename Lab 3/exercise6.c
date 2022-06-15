#include <stdio.h>

void main() {
    int number = 0, total_sum = 0;
    while(total_sum<=1000){
        number++;
        total_sum += number;
    }
    printf("The number of elements in this series is %d\n", number);
}