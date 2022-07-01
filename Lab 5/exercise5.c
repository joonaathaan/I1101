#include <stdio.h>

void main() {
    int n;
    do {
        printf("Enter n (0 < n <= 10): ");
        scanf("%d", &n);
    }
    while ( n < 1 || n > 10);
    int V[n], Vpair[n];
    for(int i =0; i < n; i++) {
        printf("Enter element %d: ", i +1);
        scanf("%d", &V[i]);
    }
    printf("The pair numbers from the array are: ");
    for(int i =0; i < n; i++) {
        if(V[i] % 2 == 0) {
            Vpair[i] = V[i];
            printf("%d ",  Vpair[i]);
        }
    }
    putchar('\n');
}