#include <stdio.h>
int main() {
    int score = 92;
    char grade;

    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
        case 8:
            grade = 'B';
            break;
        case 7:
        case 6:
            grade = 'C';
            break;
        default:
            grade = 'F';
            break;
    }
    printf("grade = %c\n", grade);
    return 0;
}