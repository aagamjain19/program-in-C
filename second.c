#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    // Find largest element
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    // Find first element smaller than largest
    for(i = 0; i < n; i++)
    {
        if(a[i] < largest)
        {
            second = a[i];
            break;
        }
    }

    // Find second largest
    for(i = i + 1; i < n; i++)
    {
        if(a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d", second);

    return 0;
}