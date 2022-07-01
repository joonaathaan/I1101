#include <stdio.h>

void main() {
    int n, equal = 0;
     do {
        printf("Enter n (0 < n <= 10): ");
        scanf("%d", &n);
    }
    while ( n < 1 || n > 10);
    int V1[n], V2[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d of array 1: ", i + 1);
        scanf("%d", &V1[i]);
        printf("Enter element %d of array 2: ", i + 1);
        scanf("%d", &V2[i]);
        if(V1[i] != V2[i]) equal = 1;
    }
    printf("Array 1 and 2 are ");
    if(equal == 0) printf("equal");
    else printf("not equal");
    putchar('\n');

}