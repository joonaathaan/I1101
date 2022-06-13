#include <stdio.h>

void main() {
    float price, tax;
    int quantity;
    printf("Please Enter the price of the book: ");
    scanf("%f", &price);
    printf("Please Enter the tax amount: ");
    scanf("%f", &tax);
    printf("Please Enter the quanity of books: ");
    scanf("%d", &quantity);
    price *= quantity * (1 + tax/100);
    printf("The total price of %d book(s) is %0.2f$\n", quantity, price);
}