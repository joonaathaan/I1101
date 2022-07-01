#include <stdio.h>

void main() {
    int T[5][8], sum = 0, product = 1;
    for (int i = 0; i < 5 ; i++) {
        for(int j = 0; j < 8; j++) {
            printf("Enter Element %d of row %d: ", j + 1, i +1);
            scanf("%d", &T[i][j]);
            sum += T[i][j];
            product *= T[i][j];
        }
    }
    printf("The sum is %d\n", sum);
    printf("The average is %.2f\n", sum / (5 * 8.0));
    printf("The product is %d\n", product);
}