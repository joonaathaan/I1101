#include <stdio.h>

void main() {
    int A1[4], A2[2], sum = 0;
    for(int i = 0; i < 4; i++ ) {
        printf("Enter integer %d of A1: ", i+1);
        scanf("%d", &A1[i]);
    }
    for(int i = 0; i < 2; i++ ) {
        printf("Enter integer %d of A2: ", i+1);
        scanf("%d", &A2[i]);
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            sum+= A1[i] * A2[j];
        }
    }
    printf("the sum is %d\n", sum);
}