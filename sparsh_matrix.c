#include<stdio.h>
#define MAX 10
int main(){
    int arr[MAX][MAX];
    int n,m,i,j,count=0, count1=0;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("Enter the number of column:\n");
    scanf("%d",&m);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
      scanf("%d",&arr[i][j]);  
        }
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Now we are converting this sparsh matrix into the triplet matrix which is mentioned below:\n");
   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
    if(arr[i][j]!=0)
    {
      printf("%d\t%d\t%d\n",i,j,arr[i][j]); 
      count1=count1+1;
    }
    //printf("\n");
   }
   
   }
   printf("%d\t%d\t%d\n",count1,count1,count1);
}
else
    {
    printf("Given matrix is not sparsh matrix:");
   }
 return 0;   
}