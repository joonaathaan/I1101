#include <stdio.h>

void main() {
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    if( a > b) {
        printf("a is greater than b\n");
    }
    else if(a < b) {
        printf("a is less than b\n");
    }
    else if ( a == b ) {
        printf("a is equal b\n");
    }
}