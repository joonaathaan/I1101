#include <stdio.h>

void main() {
    int number, sum = 0;
    do {
     printf("Enter an integer: ");
    scanf("%d",&number);
    }
    while(number <=0);
    for(int i=1; i <= number;i++){
        sum += i*i;
    }
    printf("The sum is %d\n", sum);
}