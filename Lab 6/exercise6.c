#include <stdio.h>
#include <limits.h>

void main() {
    int T[10][3], max_value = INT_MIN, max_count = 0, row_sum[10], max_even = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter Element %d of row %d: ", j + 1, i +1);
            scanf("%d", &T[i][j]);
            if(T[i][j] > max_value) max_value = T   [i][j];
            if(T[i][j] % 2 == 0) {
                if(T[i][j] > max_even) max_even = T[i][j];
                row_sum[i] += T[i][j];
            }
        }
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 3; j++) {
            if(T[i][j] == max_value) ++max_count;
        }
    }
    printf("The maximum element of the array is %d\n", max_value);
    printf("The number of elements that are equal to the maximum in this array is %d\n", max_count);
    for(int i = 0; i < 10; i++) {
        printf("The sum of even numbers in row %d is %d\n", i+1 ,row_sum[i]);
    }
    printf("The maximum even number in this array is %d\n", max_even);
}