#include <stdio.h>

void main() {
    float weight, size;
    char sex;
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your size in m: ");
    scanf("%f", &size);
    printf("Enter your sex: ");
    scanf(" %c", &sex);
    weight /= (size * size);
    if(weight > 20 && weight < 25) {
        printf("You are normal\n");
    }
    else if(weight > 25 && weight < 30) {
        printf("You are abnormal\n");
    }
    else if (weight > 30) {
        printf("You are obesity\n");
    }
    size *= 100;
    if( sex == 'm') {
        printf("The ideal weight is %.0f kg\n", size - 100 - ((size - 150) / 4));
    }
    else if (sex == 'f') {
        printf("The ideal weight is %.0f kg\n", size - 100 - ((size - 150) / 2));
    }
}