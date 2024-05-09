/*4) Write a program to print all integers 
that are not divisible by either 2 or 3 and 
lie between 1 and 100. Program should also account 
the number of such integers and print the result.*/
#include <stdio.h>

void main()
{
   int i, sum=0;
   printf("Numbers between 1 and 100 which not divisible by either 2 or 3 : \n");
   for(i=1;i<100;i++)
   {
     if(i%2!=0&&i%3!=0)
     {
       printf("% 5d",i);
       sum+=i;
     }
   }
   printf("\n\nThe sum : %d \n",sum);
}