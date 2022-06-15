#include <stdio.h>

void main() {
    int a_count = 0, m_count = 0, p_count = 0;
    char letter;
    for(int i=1; i<=5; i++) {
        printf("Enter the letter %d: ",i);
        scanf(" %c", &letter);
        if(letter == 'a' || letter == 'A') a_count++;
        else if(letter == 'm' || letter == 'M') m_count++;
        else if(letter == 'p' || letter == 'P') p_count++;
    }
    printf("You entered the letter a: %d time(s)\n", a_count);
    printf("You entered the letter m: %d time(s)\n", m_count);
    printf("You entered the letter p: %d time(s)\n", p_count);
}