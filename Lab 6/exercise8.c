#include <stdio.h>

void main() {
    int T[200][100], columns_sum[100], index = 0;
    for(int i = 0; i < 200; i++) {
        for(int j = 0; j < 100; j++) {
            printf("Enter Element %d of row %d: ", j + 1, i +1);
            scanf("%d", &T[i][j]);
            columns_sum[i] += T[i][j];
        }
    }

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 200; j++) {
            columns_sum[i] += T[j][i];
        }
    }
    
    for(int i = 0; i < 200; i++) {
        if(columns_sum[i] >  columns_sum[index]) index = i;
    }
    printf("The index of the column whose sum of the elements is the smallest is %d\n", index);
}