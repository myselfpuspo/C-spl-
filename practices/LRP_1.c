#include<stdio.h>
int main(){
   int i,count;
   printf("Enter the value:");
   scanf("%d",&count);

   for ( i = 1; i <= count; i++)
   {
    printf("%d",i);
    if (i!=count)
    {
      printf(",");
    }
    
   }
   
   return 0;
}