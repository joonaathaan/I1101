#include <stdio.h>
#include <math.h>

void main(){
    int nb_terms, series_sum;
    do {
        printf("Input the number of terms: ");
        scanf("%d", &nb_terms);
    }
    while(nb_terms < 1);

    for (int i = 1; i <= nb_terms; i++) {
        series_sum += pow(10, i) - 1;
    }
    printf("The sum is %d\n", series_sum);
}