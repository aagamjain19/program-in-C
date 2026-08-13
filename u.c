#include <stdio.h>
int main() {
    int a,b ;

    printf("enter a number : ");
    scanf("%d",&a); 

    printf("another number : ");
    scanf("%d",&b);

 float average = (a + b) / 2;

printf("average = %.2f", average);

return 0;
}
