#include <stdio.h>

void main() {
    float price, VAT = 11.0;
    printf("Please Enter the price HT: ");
    scanf("%f", &price);
    price *= (1 + VAT/100);
    printf("The price TTC is: %0.2f$\n", price);
    system("pause"); // pauses the program; display ONLY;
}