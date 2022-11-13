#include <stdio.h>
#include <stdlib.h>
//#include <time.h>
void Merge(int *A, int LB, int Mid, int UB)
{
    int i = LB;
    int j = Mid + 1;
    int k = LB;
    int B[UB + 1];
    while (i <= Mid && j <= UB)
    {
        if (A[i] <= A[j])
        {

            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;

        if (i > Mid)
        {
            while (j <= UB)
            {
                B[k] = A[j];
                j++;
                k++;
            }
        }
        else if (j > UB)
        {
            while (i <= Mid)
            {
                B[k] = A[i];
                i++;
                k++;
            }
        }
    }
    for (int i = LB; i <= UB; i++)
    {

        A[i] = B[i];
    }
}

void MergeSort(int *A, int LB, int UB)
{
    int Mid;
    if (LB < UB)
    {
        Mid = (LB + UB) / 2;
        MergeSort(A, LB, Mid);
        MergeSort(A, Mid + 1, UB);
        Merge(A, LB, Mid, UB);
    }
}

void Display(int A[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d  ", A[i]);
    }
    printf("\n");
}
int main()
{

    int size = 6;
    int arr[] = {34, 90, 55, 8, 3, 200};
    int lb = 0;
    int ub = size - 1;
    printf("Array before sorting\n");
    Display(arr, size);
    printf("Array after sorting\n");
    MergeSort(&arr[0], lb, ub);
    Display(arr, size);
    return 0;
}