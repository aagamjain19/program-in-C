#include <stdio.h>
int main() {
    int number, area;

    printf("Side of square: ");
    scanf("%d", &number);

    area = number * number;

    printf("Area of square: %d", area);

    return 0;
}