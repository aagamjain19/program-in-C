#include <stdio.h>

int main(void)
{
    double principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
