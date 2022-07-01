#include <stdio.h>

void main() {
    int grades[10], max_grade = 0, min_grade = 100;
    for (int i = 0; i < 10; i++) {
        do {
            printf("Enter grade %i: ", i + 1);
            scanf("%d", &grades[i]);
        }
        while (grades[i] < 0 || grades[i] > 100);
        if(grades[i] > max_grade)
            max_grade = grades[i];
        if(grades[i] < min_grade)
            min_grade = grades[i];
    }
    printf("The minimum grade is %d\n", min_grade);
    printf("The maximum grade is %d\n", max_grade);
}