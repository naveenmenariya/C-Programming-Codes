/*
3) Write a program to read the age of 100 persons 
and count the number of persons in the age group 
50 to 60. Use for and continue statements.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
int main()
{
	int n,count=0, x;
	for (int i=1;i<=100;i++)
	{
		x= rand()%100;
		printf("%d\t",x);
		if (x<61 && x>49)
		{
			count++;
		}
	}
	printf("\n people under the range 50-60 are : %d",count);
}
