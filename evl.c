#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double powr(double base,double expo)
{
   int n=1;
for (int i=1;i<=expo;i++)
{
   n=n*base;
}
return n;
}


int main()
{
   int x,y,i,min=5,max=45,f;
   srand(time(NULL));
   for (i=1;i<=100;i++)
   {
      x=(rand() % (max - min + 1)) + min;
      x=01;
      double base = x;
      double exponent = 10.0;
       f=powr(base, exponent);
      if((x%2==0)||(x==0))
      {
         y= f +(x*x);
      }
      else
      {
         y=(x*x*x)+x+4;
      }
      printf("the value of %dth random number (%d) is %d\n",i,x,y);
   
   }
   return 0;


}