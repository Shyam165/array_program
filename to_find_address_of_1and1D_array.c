// calculate the  address of  element of 1d and 2d array
#include<stdio.h>
int main(){
    int a[10],row,col, b[10][10],i,j,size,address1, address2;
   printf("enter the size of 1d array\n");
   scanf("%d",&size);
   printf("enter the elements of 1d array\n");
   for(i=0;i<size;i++){
    scanf("%d",&a[i]);
   }
   printf("%d is  the element  that we have to find the address\n",a[4]);
   address1=&a[0]+(4-1)*2;
 printf("the address of  4 position of  element of 1d array is %d\n",address1);
 printf("enter the row for 2 array\n");
 scanf("%d",&row);
 printf("enter the col for 2d array\n");
 scanf("%d",&col);
 printf("enter the elements for 2d array\n");
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&b[i][j]);
    }
 }
 printf("%d is the element that we have to find the address\n",b[3][2]);
address2=&b[0][0]+((3-1)*2+(2-1))*2;
 printf("the address of element of position b[3][2] of 2d array is %d \n",address2);
 return 0;
}