#include<stdio.h>
// 2.	Writ a program that will read a real number from the keyboard and print the following output in one line :
// Smallest integer not less than the number 
// The given number 
// Largest integer not greater than the number 
int main()
{
    float x;
    printf("enter the real no. \n");
    scanf("%f",x);
    printf("%d , is the smallest integer less then the no. ", x+1);
    printf("%f is the number",x);
    printf("%d , is the largest no. not grater then the no. ", x);
    return 0;
    
}