#include <stdio.h>

void main() {
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if(age >= 0 && age < 18) {
        printf("You are a young man\n");
    }
    else if (age >= 18 && age < 65) {
        printf("You are an adult\n");
    }
    else if (age >= 65) {
        printf("You are a senior\n");
    }
    else {
        printf("Invalid age\n");
    }
}