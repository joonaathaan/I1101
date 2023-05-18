#include <stdio.h>

void main() {
    int grade_1, grade_2, grade_3;
    float average;
    printf("Enter 3 grades: ");
    scanf("%d %d %d", &grade_1, &grade_2, &grade_3);
    average = (grade_1 + grade_2 + grade_3) / 3;
    if(average < 50) {
        printf("Failed\n");
    }
    else if(average < 60) {
        printf("Fair\n");
    }
    else if(average < 70) {
        printf("Good\n");
    }
    else if(average < 80) {
        printf("Very good\n");
    }
    else {
        printf("Excellent\n");
    }
    system("pause"); // pauses the program; display ONLY;
}