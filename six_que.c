#include<stdio.h>
// 6.	Write a program to read two floating point numbers using a scanf statement assign their sum to an integer variable and then output the values of all the three variables. 
int main()
{
   float f1,f2;
   int total;

   printf("Enter your first  floating  number:");
   scanf("%f",&f1);
 
   printf("Enter your second floating  number:");
   scanf("%f",&f2);
 
   total = f1 + f2;

   printf("%f",f1);
   printf("%f",f2);
 
   printf("Total is: %d ",total);
   return 0;
}