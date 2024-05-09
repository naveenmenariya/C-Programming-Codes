#include<stdio.h>
//1.	Write  program to 3 values using scanf statement and print the following results: 
//(a)	Sum of the values
// (b)	Average of the 3 values 
// (c)	Largest of the three 
// (d)	Smallest of the three


int main()
{
    int a,b,c,sum,avg,small,large;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("enter the third number\n");
    scanf("%d",&c);

    sum=a+b+c;
    printf("the sum of three number is : %d \n",sum);
    avg=sum/3;
    printf("the aveerage of all three number is : %d \n",avg);

    if(a>b&&a>c)
    {
        printf("%d is the largest number\n",a);
    }
    if(b>a&&b>c)
    {
        printf("%d is the largest number\n",b); 
    }
    if(c>a&&c>b)
    {
         printf("%d is the largest number\n",c);
    }
    if(a<b&&a<c)
    {
        printf("%d is the smallest number\n",a);
    }
    if(b<a&&b<c)
    {
        printf("%d is the smallest number\n",b); 
    }
    if(c<a&&c<b)
    {
         printf("%d is the smallest number\n",c);
    }


    return 0;

}