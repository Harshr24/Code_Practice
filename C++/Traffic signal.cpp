#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <time.h>

int main ()
{
	int rsp;
	int rt = 3, yt=2, gt=3;
	do 
	{
    	int signal=0;
		do 
		{
			switch(signal) 
		   {
		   	case 0:
    	        printf("RED LIGHT - Stop here\n");
    	        printf("Time (in sec) for the Next signal is : %d\n", rt);
    	        sleep(rt);
                signal = 1;
	            break;
    	    case 1:
        	    printf("YELLOW LIGHT - Be ready \n");
        	    printf("Time (in sec) for the Next signal is : %d\n", yt);
        	    sleep(yt);
                signal = 2;
        	    break;
        	case 2:
        	    printf("GREEN LIGHT - Go now \n");
        	    printf("Time (in sec) for the Next signal is : %d\n", gt);
        	    sleep(rt);
                signal = 0;
        	    break;
			}
		} while (signal != 0);
		
		/*OR  we can just write :
		do 
		{
    		int signal=0;
			do 
			{
    	        printf("RED LIGHT - Stop here\n");
    	        printf("Time (in sec) for the Next signal is : %d\n", rt);
    	        sleep(rt);
        
        	    printf("YELLOW LIGHT - Be ready \n");
        	    printf("Time (in sec) for the Next signal is : %d\n", yt);
        	    sleep(yt);
           
        	    printf("GREEN LIGHT - Go now \n");
        	    printf("Time (in sec) for the Next signal is : %d\n", gt);
        	    sleep(rt);
          	} 
			while (signal != 0);
        */
        
        
    	printf("Do you want to change the timer intervals? Enter (1 for yes & 0 for no) : ");
        scanf(" %d", &rsp);
		if (rsp == 1)
		{
			printf("Enter the new red light time: ");
            scanf("%d", &rt);
        	printf("Enter the new yellow light time: ");
            scanf("%d", &yt);
    		printf("Enter the new green light time: ");
            scanf("%d", &gt);	
		}
	} while (rsp != 0);
}
