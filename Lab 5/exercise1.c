#include <stdio.h>

void main() {
    int grades[10], students_60 = 0, above_average = 0;
    float average = 0;
    for (int i = 0; i < 10; i++) {
        do {
            printf("Enter grade %i: ", i + 1);
            scanf("%d", &grades[i]);
        }
        while (grades[i] < 0 || grades[i] > 100);
        if(grades[i] == 60)
            ++students_60;
        average += grades[i];
    }
    average = average / 10;
    for (int i = 0; i < 10; i++) {
        if(grades[i] > average)
            ++above_average;
    }
    printf("The number of students having the grade 60 is %d\n", students_60);
    printf("The average of the grades in this array is %.f\n", average);
    printf("The number of grades above the grade's average is %d\n", above_average);
}