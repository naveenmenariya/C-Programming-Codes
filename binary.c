/*#include<stdio.h>    
int main()
{  
int a[50],n,i;    
 
printf("Enter the number\n ");
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
    a[i]=n%2;    
    n=n/2;    
}    
for(i=i-1;i>=0;i--)    
{   
    printf("%d",a[i]);    
}  
return 0;  
 
}*/
#include<stdio.h>
int main()
{
    int num,i,a,b,c,f=0;
    int n, reverse = 0, remainder;
    printf("enter a number :");
    scanf("%d",&a);
    b=a;
    printf("the binary number of %d is --  ",a);
    while (b>0)
    {
        c=b%2;
        f=(f*10)+c;
        b=b/2;
        

    }
    
    while (f != 0) {
    remainder = f % 10;
    reverse = reverse * 10 + remainder;
    f/= 10;
    
  }

  printf("%d", reverse);

       


     printf("\n");
    

    b=a;
    printf("the octadecimal of %d is --  ",a);
    while (b>0)
    {
        c=b%8;
        b=b/8;
        printf("%d",c);
        
    }
    printf("\n");
      b=a;
    printf("the hexadecimal of %d  is  --  ",a);
    while (b>0)
    {
        c=b%16;
        b=b/16;
        printf("%d",c);
        
    }
    
    return 0;


}