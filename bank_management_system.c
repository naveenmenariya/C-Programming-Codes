// QUE 2. Write a program to create a bank management system that 
// allows the user to perform various banking operations like 
// deposit, withdraw, check balance, etc. Use switch case statements 
// to handle the user's input and perform the appropriate operation.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n,c,cash; char accno[11]; float bal;
	printf("Please Enter your Account number : ");
	scanf("%s",&accno[11]);
	
	do
	{
		printf("Enter choise \n 1) Deposit \t 2) withdraw \n 3) Check Balance \t 4) Account detail \n");
		scanf("%d",&n);
		switch (n)
    	{
        case 1:
        {
        	printf("Enter amount for deposit : ");
        	scanf("%d",&cash);
        	bal = bal + (1.0)*cash;
		}
        	break;
        case 2:
        {
        	printf("Enter amount for withdraw : ");
        	scanf("%d",&cash);
        	bal = bal - (1.0)*cash;
		}
        	break;
        case 3:
        {
        	printf("Check balance  %.2f \n", bal);
		}
        	break;
        case 4:
        	printf("account number is : %s \n", accno[11]);
        	break;
        default :
        	printf("choise is not valid \n");
        	break;
    	}
    	printf("Enter 1 for more \n 0 for close ");
    	scanf("%d",&c);
	} while (c==1);
	printf("Exit !!!");
}