#include <stdio.h>
#include <stdlib.h>
int partition(int a[], int l, int r);
void quicksort(int a[], int l, int r);
void quicksort(int a[], int l, int r)
{
    if (l < r)
    {
        int q = partition(a, l, r);
        quicksort(a, l, q - 1);
        quicksort(a, q + 1, r);
    }
}
int partition(int a[], int l, int r)
{
    int temp, start, end, pivot;
    pivot = a[l];
    start = l;
    end = r;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    temp = a[l];
    a[l] = a[end];
    a[end] = temp;
    return end;
}
int main()
{
    int size, i;
    int a[50];
    printf("Enter the array size:\n");
    scanf("%d", &size);
    printf("Enter the array element :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, size-1);
    printf("after quick sorting the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}