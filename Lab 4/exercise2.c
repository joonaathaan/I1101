#include <stdio.h>

void main() {
    int N, series_sum = 0;
    do {
        printf("Input the number of terms: ");
        scanf("%d", &N);
    }
    while( N < 1);

    for(int i = 1; i <= N; i++){
        int multiplied_nb =  i * i;
        printf("%d * %d = %d\n", i, i, multiplied_nb);
        series_sum += multiplied_nb;
    }
    printf("The sum of the above series is %d\n", series_sum);
}