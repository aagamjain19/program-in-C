#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("enter marks: ");
    scanf("%d", &marks);

    marks =marks / 10;

    switch (marks) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;
        default:
            grade = 'F';
    }

    if (marks > 100 || marks < 0) {
        printf("invalid marks entered!\n");

    } else {
        printf("grade = %c\n", grade);
    }
    
    return 0;
}