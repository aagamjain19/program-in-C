#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}