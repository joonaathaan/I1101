#include <stdio.h>

void main() {
    float temperatureF, temperatureC;
    printf("Please enter the temperature in fahrenheit: ");
    scanf("%f", &temperatureF);
    temperatureC =(temperatureF-32)*5/9;
    printf("The temperature %f in celsius is equivalent to %f in fahrenheit\n", temperatureF, temperatureC);
    system("pause"); // pauses the program; display ONLY;
}