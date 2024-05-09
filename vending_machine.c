#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int choise,ch,bill=0,cost,n;
    do
    {
    	printf("Enter your choise as\n 1)Snacks \n 2)cold drinks \n ");
    	scanf("%d",&choise);

	    switch (choise) 
		{
    	  case 1:
    		printf("Enter your choise in snacks\n 1)popcorn \n 2)ganthiya \n ");
    		scanf("%d",&ch);
    		printf("Enter number of packets\n");
    		scanf("%d",&n);
    	    switch (ch) 
			{
    	        case 1:
    	           cost = 10;
    	           cost = cost*n;
    	           break;
    	        case 2:
    	           cost = 15;
    	           cost = cost*n;
    	           
       		       break;
        	} bill = bill + cost ;
        	break;

      	case 2:
        	printf("Enter your choise in cold drinks \n 1)coca cola \n 2)limcA \n ");
    		scanf("%d",&ch);
    		printf("Enter the number of drinks \n");
    		scanf("%d",&n);
    	    switch (ch) 
			{
	            case 1:
	               cost = 45;
	               cost = cost*n;
	               break;
	            case 2:
	               cost = 35;
	               cost = cost*n;
    	           break;
    	       
    	    } bill = bill + cost ;
    	    break;

    	  default :
    	  	printf("Enter the quantity \n");
    		scanf("%d",&n);
        	cost = 20;
        	cost = cost*n;
    	    bill = bill + cost ;
    	    break;
   		}
   		printf("Enter 0 for exit \n Enter 1 for more order\n");
   		scanf("%d",&ch);
	} while (ch==1);
	printf("Your bill is : %d\n",bill);
	printf("THAN YOU !!!");
}