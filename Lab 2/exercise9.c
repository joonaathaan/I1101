#include <stdio.h>

void main() {
    float weight, size;
    char sex;
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your size in m: ");
    scanf("%f", &size);
    printf("Enter your sex (M or F): ");
    scanf(" %c", &sex);
    weight /= (size * size);
    if(weight >= 20 && weight < 25) {
        printf("You are normal\n");
    }
    else if(weight >= 25 && weight < 30) {
        printf("You are abnormal\n");
    }
    else if (weight >= 30) {
        printf("You are obesity\n");
    }
    size *= 100;
    switch(sex) {
        case 'M':
        printf("The ideal weight is %.0f kg\n", size - 100 - ((size - 150) / 4));
        break;
        case 'F':
        printf("The ideal weight is %.0f kg\n", size - 100 - ((size - 150) / 2));
        break;
        default:
        printf("Are you human?");
        break;
    }
    system("pause"); // pauses the program; display ONLY;
}