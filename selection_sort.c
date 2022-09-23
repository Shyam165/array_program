// write a program to sort the list of elements using the selection sort
#include <stdio.h>
void main()
{
    int a[10], n, i, j, pos, swap;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    printf("enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
                pos = j;
        }
        if (pos != i)
        {
            swap = a[i];
            a[i] = a[pos];
            a[pos] = swap;
        }
    }
    printf("sorted array\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}