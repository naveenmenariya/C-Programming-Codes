//QUE 1  Write a program to create a simple game where the user can choose 
// to play Rock, Paper, and Scissors against the computer using switch 
// case statements to determine the winner of each round.



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int com,you,i;
    do
    {
    	srand(time(NULL));
    	int com = rand()% 3+1;
    	printf("Enter your choise as :\n 1)Scissors \n 2)Stone \n 3)Paper \n");
    	scanf("%d",&you);

	    switch (com)
	    {
	        case 1:
	        printf("Computer choose scissor \n");
	        break;
	        case 2:
    	    printf("Computer choose stone \n");
    	    break;
    	    case 3:
    	    printf("Computer choose paper \n");
    	    break;
    	}

    	switch (you) 
		{
    	  case 1:
    	    switch (com) 
			{
    	        case 1:
    	           printf("neutral \n");
    	           break;
    	        case 2:
    	           printf("Computer won \n");
    	           break;
    	        case 3:
    	           printf("You won\n");
       		       break;
        	}
        	break;

      	case 2:
        	switch (com) 
			{
	            case 1:
	               printf("You won \n");
	               break;
	            case 2:
	               printf("neutral \n");
    	           break;
    	        case 3:
    	           printf("Computer won \n");
    	           break;
    	    }
    	    break;

    	  case 3:
        	switch (com) 
			{
    	        case 1:
    	           printf("Computer won \n");
    	           break;
    	        case 2:
    	           printf("You won \n");
    	           break;
    	        case 3:
    	           printf("neutral \n");
    	           break;
    	    }
    	    break;
   		}
   		printf(" Enter 0 for No \n Enter 1 for Yes ");
   		scanf("%d",&i);
	} while (i==1);
	printf("GAME OVER !");
}