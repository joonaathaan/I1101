#include <stdio.h>

void main() {
    char C[10];
    int a_count;

    for(int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i+1);
        scanf(" %c", &C[i]);
        if(C[i] == 'a') ++a_count;
    }
    printf("The number of characters 'a' entered is %d\n", a_count);
}