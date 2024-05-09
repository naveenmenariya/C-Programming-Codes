#include<stdio.h>
#include<math.h>

int main() 
{
	int n;
	
    char name; int i, regn;
    float bs,da,hra,cal,sp,dd,total; 
    printf("Enter your name, reg no, basic salary, DA, HRA : \n");
    scanf("%s",&name);
    scanf("%d",&regn);
    scanf("%f",&bs);
    scanf("%f",&da);
	scanf("%f",&hra);
    sp=15000;	
	printf("Basic Salary is : %f\n", bs);
	printf("Special pay is : %f\n", sp);
		
	if (bs>80000)
	{
		dd = 0.3*bs;
	}
	else if (25000<bs<80000)
	{
		dd = 0.2*bs;
	}
	else
	{
		dd = 0.1*bs;
	}
	printf("Deduction is : %f\n",dd);
			
				
    cal = bs * (da + hra)*0.01;
	total = bs + cal + sp - dd;
	printf("Total gross salary is : %f\n\n", total);
    
	return 0; 
		
    
    
}