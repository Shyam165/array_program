#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[10][10];
    int n,m,i,j,count=0;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("Enter the number of column:\n");
    scanf("%d",&m);
    printf("Enter the elements of Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
      scanf("%d",&arr[i][j]);  
        }
    }
    printf("Elements are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
      printf("%d\t",arr[i][j]);  
        }
        printf("\n");
    }
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(arr[i][j]==0)
        {
            count++;
        }
    }
}
if(count>=(m*n)/2)
{
    printf("Given matrix is sparsh matrix:\n");
}
else
    {
    printf("Given matrix is not sparsh matrix:");
   }
 return 0;   
}