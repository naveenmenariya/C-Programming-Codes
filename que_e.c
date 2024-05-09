/*1) Write a C program to evaluate the following functions upto n terms
A) Sinx = x - x3 / 3! + x5/5! - x7/7! + …………
B) cosx = 1 - x2 / 2! + x4/4! - x6/6! + …………
C) SUM = 1 + (1/2)2 + (1/3)3 +………………..
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
int main()
{
	int n, x;
	printf("Enter the n's value : ");
	scanf("%d",&n);
	printf("Enter value of x : ");
	scanf("%d",&x);
	
	printf("Sinx for given n and x is = ");
	
	int y =1,r ,z, s = 1; float sum;

	for (int j=0;j<=n;j++)
		{
			z = (2*j)+1;
			
			for (int i=1;i<=z;i++)
			{	y = x*y;
			} 
				
			if (j%2!=0)
			{	r = -1;
			}
			else 
			{	r = 1;
			}
				
			for(int i=1;i<=z;i++)
			{	s = s*i;
			}
	
			sum = sum + (float)(r*y)/s;
			y=1;
		} 
	printf("%f\n",sum);
	}