#include<stdio.h>
int main()
{
   int i;
   int n = 5;
   int A[n];
   for(i=0;i<10;i++)
   {
    A[i]=40+i;

   }
   for(i=0;i<10;i++)
   {
    printf("A[%d]=%d\n",i,A[i]);
   }
   return 0;

}
