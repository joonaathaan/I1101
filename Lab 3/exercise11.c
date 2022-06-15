#include <stdio.h>
#include <math.h>

void main() {
    int X, N, S = 0;
    do {
        printf("Input the value of x: ");
        scanf("%d", &X);
    }
    while(X < 0);
    do {
        printf("Input the number of terms: ");
        scanf("%d", &N);
    }
    while(N < 0);
    N *= 2;
    for(int i = 1; i < N; i+= 2 ){
        if(i%4 == 1) S += pow(X * 1.0, i * 1.0);
        else S -= pow(X * 1.0, i * 1.0);
    }
    printf("The sum of the series up to %d term is: %d\n", N, S);
}