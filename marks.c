#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    float percentage;

    printf("Enter marks of subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &subject3);

    percentage = (subject1 + subject2 + subject3) / 3.0;

    if (percentage >= 40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}