#include <stdio.h>

void main() {
    int M[3][5], S[5];
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
           printf("Enter Element %d of row %d: ", j + 1, i +1);
           scanf("%d", &M[i][j]);
        }
    }
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            S[i] += M[j][i];
        }
    }   
    for(int i = 0; i < 5; i++) {
        printf("The sum of column %d is %d\n", i+1, S[i]);
    }
}