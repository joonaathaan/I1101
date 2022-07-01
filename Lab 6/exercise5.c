#include <stdio.h>

void main() {
    int A[5][5], odd_sum = 0, diagonal_sum = 0, column_index = 0; 
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Enter Element %d of row %d: ", j + 1, i +1);
            scanf("%d", &A[i][j]);
            if(A[i][j] % 2 != 0) odd_sum += A[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        diagonal_sum += A[i][column_index++];
    }
    printf("The sum of odd elements in the array is %d\n", odd_sum);
    printf("The average of the elements located on the diagonal is %.2f\n", diagonal_sum / 5.0);
}