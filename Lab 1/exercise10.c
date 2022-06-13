#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    char name[255], surname[255];
    int year;
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please Enter your surname: ");
    scanf("%s", surname);
    printf("Please enter your year of birth: ");
    scanf("%d", &year);
    printf("Your full name is %s %s\n", name, surname);
    printf("Your age is %i\n",  atoi(__DATE__ + 7) - year );
}