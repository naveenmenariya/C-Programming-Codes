#include<stdio.h>
// 3.	Given the values of the variables x, y and z. write a program to rotate their values such that x has the value of y, y has the value of z and z has the value of x.

int main()
{
    int t=0,x,y,z;
    
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of y\n");
    scanf("%d",&y);
    printf("enter the value of z\n");
    scanf("%d",&z);
    t=x;
    x=y;
    y=z;
    z=t;

    printf("the new number is  x=%d\n,y=%d\n,z=%d",x,y,z);



    return 0;
}