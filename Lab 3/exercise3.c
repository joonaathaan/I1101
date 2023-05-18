#include <stdio.h>

void main() {
    int number, sum = 0;
    do {
     printf("Enter a positive integer: ");
     scanf("%d",&number);
    }
    while(number <=0);
    for(int i=1; i <= number;i++){
        sum += i*i; // pow(i, 2);
    }
    printf("The sum is %d\n", sum);
    system("pause"); // pauses the program; display ONLY;
}