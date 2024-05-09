#include<stdio.h>
// 4.	Write a program to determine and print the sum of the following harmonic series  for a given value of n:
// 1+(1\2) + (1\3)+ …..+ (1\n)


int main()
{
    int i,x,n;
    float y;
    y=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        y= y + (1/i);
        printf("%f",&y);
    }
    return 0;
}