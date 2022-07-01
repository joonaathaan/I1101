#include <stdio.h>

void main() {
    int  v1[10], v2[10], v3[10], n;
    do {
        printf("Enter the size (0 < n <= 10): ");
        scanf("%d", &n);
    }
    while(n < 1 || n > 10);
    for(int i = 0; i < n; i++) {
        do {
            printf("Enter element %d of array 1: ", i + 1);
            scanf("%d", &v1[i]);
        }
        while (v1[i] < 0 || v1[i] > 100);
        do {
            printf("Enter element %d of array 2: ", i + 1);
            scanf("%d", &v2[i]);
        }
        while (v2[i] < 0 || v2[i] > 100);
        v3[i] = v1[i] * v2[i];
    }
    printf("The product of v1 and v2 is: \n");
    for(int i = 0; i < n; i++) {
        printf("Element %d = %d * %d = %d\n", i + 1, v1[i], v2[i], v3[i]);
    }
}