// QUE 5. Write a program to simulate a traffic signal that 
// switches between different colors based on a timer. 
// Use switch case statements to determine the current 
// state of the traffic signal and update the display accordingly. 
// Additionally, allow the user to change the timer intervals for each color.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <time.h>

int main ()
{
	int ans;
	int redt = 1, yellowt=1, greent=1;
	do 
	{
    	int signal=0;
		do 
		{
			switch(signal) 
		   {
		   	case 0:
    	        printf("RED LIGHT - Stop \n");
    	        printf("Time for the Next signal is : %d\n", redt);
    	        sleep(redt);
                signal = 1;
	            break;
    	    case 1:
        	    printf("YELLOW LIGHT - ready \n");
        	    printf("Time for the Next signal is : %d\n", yellowt);
        	    sleep(yellowt);
                signal = 2;
        	    break;
        	case 2:
        	    printf("GREEN LIGHT - Go  \n");
        	    printf("Time for the Next signal is : %d\n", greent);
        	    sleep(greent);
                signal = 0;
        	    break;
			}
		} while (signal != 0);
        
        
    	printf("enter 1 for change time interval \n 0 for same time interval ");
        scanf(" %d", &ans);
		if (ans == 1)
		{
			printf("Enter red light time: ");
            scanf("%d", &redt);
        	printf("Enter yellow light time: ");
            scanf("%d", &yellowt);
    		printf("Enter green light time: ");
            scanf("%d", &greent);	
		}
	} while (ans != 0);
}