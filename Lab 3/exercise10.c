#include <stdio.h>
#include <math.h>

void main() {
    int X, N, factorial = 1;
    float S = 0;
    do {
        printf("Input the value of x: ");
        scanf("%d", &X);
    }
    while (X < 0);
    do {
        printf("Input number of terms: ");
        scanf("%d", &N);
    }
    while (N < 0);

    for(int i = 0; i < N; i++ ) {
        S += pow (X * 1.0, i * 1.0) / factorial;
        factorial *= (i + 1);
    }
    printf("The sum is %.3f", S);
}