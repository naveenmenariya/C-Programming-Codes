/*5) Write a program in C to make a pyramid pattern with numbers increased by 1.
1 
2 3 
4 5 6 
7 8 9 10 
*/

#include <stdio.h>
int main()
{
   int i,j,spc,rows,k,t=1;
   printf("Input rows : ");
   scanf("%d",&rows);
   t=1;
   for(i=1;i<=rows;i++)
   {
      for(j=1;j<=i;j++)
      {
         printf("%5d ",t++);
      }
	   
	printf("\n");
   
   }
}


