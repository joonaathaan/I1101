#include <stdio.h>

void main() {
    int M[20][10], row_index = -1, column_index = -1;
     for(int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
           printf("Enter Element %d of row %d: ", j + 1, i +1);
           scanf("%d", &M[i][j]);
        }
    }

    for(int i = 0; i < 20; i++) {
        int row_sum = 0;
        for(int j = 0; j < 10; j++) {
            row_sum += M[i][j];
        }
        if(row_sum / 4.0 > 390) {
            row_index = i;
            break;
        }
    }
    for(int i = 0; i < 10; i++) {
        int column_product = 1;
        for(int j = 0; j < 20; j++) {
            column_product *= M[j][i];
        }
        if(column_product <= 120) {
            column_index = i;
            break;
        }
    }
    printf("The index of the row that the average of elements is > 390 is %d\n", row_index);
    printf("The index of the column that the products of elements is <= 120 is %d\n", column_index);
}
