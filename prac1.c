#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, value, key;

    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    pos = 2;
    value = 25;

    for(i = n; i >= pos; i--)
        a[i] = a[i-1];

    a[pos-1] = value;
    n++;

    printf("\nAfter Insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    pos = 3;

    for(i = pos-1; i < n-1; i++)
        a[i] = a[i+1];

    n--;

    printf("\nAfter Deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    key = 40;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("\n%d Found at position %d", key, i+1);
            break;
        }
    }

    return 0;
}