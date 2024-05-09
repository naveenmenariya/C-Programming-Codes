/*1) Write a C program to evaluate the following functions upto n terms
A) Sinx = x - x3 / 3! + x5/5! - x7/7! + …………
B) cosx = 1 - x2 / 2! + x4/4! - x6/6! + …………
C) SUM = 1 + (1/2)2 + (1/3)3 +………………..
2) Write a program to compute the value of Euler’s number e, that is used as the base of natural logarithms. Use the following formula.
e = 1 + 1/1! + 1/2! + 1/3! + …………+1/n!

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
	
	printf("Cosx for given x and n is = ");
		int y2 =1,r2 ,z2, s2 = 1; float sum2;
	
		for (int j=0;j<=n;j++)
		{
			z2 = (2*j);
			
			for (int i=1;i<=z2;i++)
			{	y2 = x*y2;
			} 
			
			if (j%2!=0)
			{	r2 = -1;
			}
			else 
			{	r2 = 1;
			}
			
			for(int i=1;i<=z2;i++)
			{	s2 = s2*i;
			}
	
			sum2 = sum2 + (float)(r2*y2)/s2;
			y2=1;
		}
	printf("%f\n",sum2);
	
	float sum3 = 0, y3=1;
	for (int i = 1; i <= n; i++) 
	{
		for (int j=1;j<=i;j++)
			{	
				y3 *= (1.0/j) ;
			} 
        sum3 = sum3 + y3;
    }
    printf("Sum of the series 1 + ... (1/n)^n : %f ", sum3);
    
    
    float sum4 = 0, y4=1;
	for (int i = 1; i <= n; i++) 
	{
		for (int j=1;j<=i;j++)
			{	
				y4 *= i ;
			} 
        sum4 += (1.0/y4);
    }
    printf("\nSum of the Euler's series till n term is : %f ", sum4);

	return 0;
}