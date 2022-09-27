#include<stdio.h>
#define MAX 10
int main(){
    int arr[MAX][MAX];
    int m,n,i,j;
    printf("enter the number of rows:\n");
    scanf("%d", &m);
    printf("enter the number of column\n");
    scanf("%d",&n);
     printf("enter number\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           
            scanf("%d",&arr[i][j]);
        }
    }
    printf("row-major order \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("column-major order \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }

}