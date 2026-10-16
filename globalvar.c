#include <stdio.h>

int x = 100;

void show()
{
    int y = 20;

    printf("%d %d", x, y);
}

int main()
{
    printf("%d", x);
    return 0;
}