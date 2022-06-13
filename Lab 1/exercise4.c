#include <stdio.h>

void main() {
    float radius, pi = 3.14;
    printf("Please enter the circle radius: ");
    scanf("%f", &radius);
    float perimiter = 2 * pi * radius, area = pi * radius * radius;
    printf("The perimeter of the circle is %0.2f\nThe area of the circle is %0.2f\n", perimiter, area);
}