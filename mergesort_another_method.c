#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int mid,int r){
    int i, j, k;
    int n1=mid-l+1;
    int n2=r-mid;
    int b[n1];
    int c[n2];
    for(i=0;i<n1;i++){
        b[i]=a[l+i];
    }
    for(j=0;j<n2;j++){
        c[j]=a[mid+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2){
        if(b[i]<=c[j]){
        a[k]=b[i];
        k++;
        i++;
    }
    else{
        a[k]=c[j];
        k++;
        j++;
    }
}
while(i<n1){
    a[k]=b[i];
        k++;
        i++;
}
while(j<n2){
    a[k]=c[j];
    k++;
    j++;
}
}
void mergesort(int a[],int l,int r){
int mid ;
if(l<r){
mid=l+(r-l)/2;
mergesort(a,l,mid);
mergesort(a,mid+1,r);
merge(a,l,mid,r);
}
}

void main(){
    int a[100],i,n;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
mergesort(a,0,n-1);
printf("sorted elements \n");
for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
}