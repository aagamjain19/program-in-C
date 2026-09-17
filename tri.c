#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        printf("Triangle is Valid.\n");

        // Equilateral
        if (a == b && b == c) {
            printf("Triangle is Equilateral.\n");
        }
        // Isosceles
        else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles.\n");

            // Also check if it is Right-angled
            if ((a*a + b*b == c*c) ||
                (a*a + c*c == b*b) ||
                (b*b + c*c == a*a)) {
                printf("It is also Right Angled.\n");
            }
        }
        // Scalene or Right-angle
        else {
            if ((a*a + b*b == c*c) ||
                (a*a + c*c == b*b) ||
                (b*b + c*c == a*a))
                printf("Triangle is Right Angled.\n");
            else{
                printf("Triangle is Scalene.\n");
            }
        }
    }
    else {
        printf("Triangle is Invalid.\n");
    }

    return 0;
}