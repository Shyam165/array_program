// write a program to sort the list of  element using bubble sort
#include<stdio.h>
void main(){
    int i,j,size,a[20],temp;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elements of array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("array after implimenting bubble sort\n");
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    }