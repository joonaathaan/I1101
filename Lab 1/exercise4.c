#include <stdio.h>

void main() {
    float radius, pi = 3.14, perimiter, area;
    printf("Please enter the circle radius: ");
    scanf("%f", &radius);
    perimiter = 2 * pi * radius;
    area = pi * radius * radius; // pi * pow(radius, 2);
    printf("The perimeter of the circle is %0.2f\n", area);
    printf("The area of the circle is %0.2f\n", area);
    system("pause"); // pauses the program; display ONLY;
}