#include <stdio.h>

void main() {
    int T[6][6], column_index = 1;
    printf("The pascale triangle is the following: \n");
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < column_index; j++){
            if(j == 0 || j -1  == column_index )  T[i][j] = 1;
            else {
                T[i][j] = T[i - 1][j - 1] + T[i - 1][j];
            }
            printf("%d ", T[i][j]);
        }
        column_index++;
        putchar('\n');
    }
}