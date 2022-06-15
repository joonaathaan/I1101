#include <stdio.h>
#include <math.h>

void main() {
    int X, N, S;
    do {
        printf("Enter a strictly positive integer: ");
        scanf("%d", &X);
    }
    while( X < 0);
    do {
        printf("Enter a strictly positive and odd integer: ");
        scanf("%d", &N);
    }
    while( N < 0 || N % 2 == 0);

    for(int i = 1; i <= N; i+= 2) {
        if (i%4 == 1) S += pow(X * 1.0, i * 1.0) / i;
        else S -= pow(X * 1.0, i * 1.0) / i;
    }
    printf("The sum of this series is %f\n", S * 1.0);
}