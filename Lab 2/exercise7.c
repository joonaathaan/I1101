#include <stdio.h>

void main() {
    int a, b;
    char operator;
    printf("Enter an expression to evaluate(eg. 2 + 5): ");
    scanf("%d %c %d", &a, &operator, &b);
    switch(operator) {
        case '+': {
            printf ("The sum of %d and %d is %d\n", a, b, a+b);
            break;
        }
        case '-': {
            printf ("The difference of %d and %d is %d\n", a, b, a-b);
            break;
        }
        case '*': {
            printf ("The product of %d and %d is %d\n", a, b, a*b);
            break;
        }
        case '/': {
            if(b == 0 || !b) {
                printf("Invalid division, b is null or equal 0\n");
            }
            else {
                printf ("The division of %d and %d is %.1f\n", a, b, (a*1.0)/b);
            }
            break;
        }
        case '%': {
             if(b == 0 || !b) {
                printf("Invalid division, b is null or equal 0\n");
            }
            else {
                printf ("The modulo of %d and %d is %d\n", a, b, a%b);
            }
            break;
        }
        default:{
            printf("Inalid operator '%c'\n", operator);
            break;
        }
    }
}