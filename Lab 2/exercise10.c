#include <stdio.h>

void main() {
    int salary;
    char employment_type;
    printf("Enter the salary of the employee: ");
    scanf("%d", &salary);
    printf("Enter the employment type (M for manager, E for engineer, T for technician): ");
    scanf(" %c", &employment_type);
    switch(employment_type) {
        case 'M':{
            salary += 800;
            printf("This is a manager who will receive %d\n", salary);
            break;
        }
        case 'E':{
            salary += 600;
            printf("This is an engineer who will receive %d\n", salary);
            break;
        }
        case 'T':{
            salary += 400;
            printf("This is a technician who will receive %d\n", salary);
            break;
        }
        default:{
            printf("Invalid employment type '%c'\n", employment_type);
            break;
        }
    }
    system("pause"); // pauses the program; display ONLY;
}