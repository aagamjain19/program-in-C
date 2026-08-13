#include <stdio.h>

int main() {
    int marks;
    char grade;
    
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    // Divide marks by 10 to get a single digit for switch-case
    switch (marks / 10) {
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
    
    if (marks > 100 || marks < 0) {
        printf("Invalid marks entered!\n");
    } else {
        printf("Grade = %c\n", grade);
    }
    
    return 0;
} 