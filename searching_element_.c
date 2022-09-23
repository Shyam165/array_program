// write a program to search the element whether it is present in the array or not
#include <stdio.h>
#define MAX 23
void main()
{
    int a[MAX], i, n, size;
    int flag = 0;
    printf("Enter the size for array:\n");
    scanf("%d", &size);
    printf("Enter the elements for array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search in a array whether it is present in this array or not:\n");
    scanf("%d", &n);
    for (i = 0; i < size; i++)
    {
        if (a[i] == n)
        {
            printf("yes %d  element is present in this array in the position of index is %d\n", n, i + 1);
            flag = 1;
            break ;
        }
    }
    if (flag == 0)
    {
        printf("%d is not present in this array\n",n);
    }
    printf("The elements of array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}