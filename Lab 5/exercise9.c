#include <stdio.h>

void main() {
    int n, m, t;
    do {
        printf("Enter n(0 <= n <= 100): ");
        scanf("%d", &n);
    }
    while ( n < 0 || n > 100);
    do {
        printf("Enter m(0 <= m <= 100): ");
        scanf("%d", &m);
    }
    while ( n < 0 || n > 100);
    t= n+m;
    int V1[n], V2[m], V3[t];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d of array 1: ", i+1);
        scanf("%d", &V1[i]);
    }
    for(int i = 0; i < m; i++){
        printf("Enter element %d of array 2: ", i+1);
        scanf("%d", &V2[i]);
    }
    printf("The elements of array 3 are ");
    for(int i = 0; i < t; i++) {
        if(i < n) V3[i] = V1[i];
        else V3[i] = V2[i - n];
        printf("%d ", V3[i]);
    }
    putchar('\n');
}