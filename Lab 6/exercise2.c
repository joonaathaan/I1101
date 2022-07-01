#include <stdio.h>
#include <limits.h>

void main() {
    int T[5][4], min_value = INT_MAX, zero_count = 0, row_sum = 0;
    float row_average[5];
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter Element %d of row %d: ", j + 1, i +1);
            scanf("%d", &T[i][j]);
            if(T[i][j] < min_value) min_value = T[i][j];
            if(T[i][j] ==  0) ++zero_count;
            row_sum += T[i][j];
        }
        row_average[i] = row_sum / 4.0;
        row_sum = 0;
    }
    printf("The minimum of the elements of the array is %d\n", min_value);
    printf("The number of elements equal to zero is %d\n", zero_count);
    for(int i = 0; i < 5; i++) {
        printf("The average of row %d is %.2f\n", i + 1, row_average[i]);
    }
}