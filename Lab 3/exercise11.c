#include <stdio.h>
#include <math.h>

void main() {
    int X, N, S = 0, d = 1;
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
    printf("The values of series:\n");
    for(int i = 1; i < N; i+= 2 ){
        int P =  d * pow(X, i);
        S += P;
        d *= -1;
        printf("%d\n", P);
    }
    printf("The sum of the series up to %d term is: %d\n", N / 2, S);
}