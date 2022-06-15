#include <stdio.h>

void main() {
    int grade, max_grade = 0, gt_grade = 0;
    for(int i = 1; i <=10;i++) {
        do {
        printf("Enter grade %d (0-100): ", i);
        scanf("%d", &grade);
        }
        while(grade < 0 || grade > 100);
        if (grade > 50) gt_grade++;
        if (grade > max_grade) max_grade = grade;
    }    
    printf("The number of grades greater than 50 are %d\n", gt_grade );
    printf("The maximum grade is %d\n", max_grade);
}
