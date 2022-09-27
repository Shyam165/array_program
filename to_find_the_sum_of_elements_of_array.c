#include<stdio.h>

int main()
{
 int Size, i, a[10];
 int Addition = 0; 
 printf("\n Please Enter the Size\n");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Elements\n");
 for(i = 0; i < Size; i++)
  {
      scanf("%d", &a[i]);
  }
 for(i = 0; i < Size; i ++)
 {
      Addition = Addition + a[i]; 
 }
  
 printf("Sum = %d ", Addition);
 return 0;
}