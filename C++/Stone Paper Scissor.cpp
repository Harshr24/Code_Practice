#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int uc,p;
    do
    {
    	srand(time(NULL));
    	int r = rand()% 3+1;
    	printf("Enter your choise as : 1)Scissors \t 2)Stone \t 3)Paper : ");
    	scanf("%d",&uc);

	    switch (r)
	    {
	        case 1:
	        printf("Computer got scissor \n");
	        break;
	        case 2:
    	    printf("Computer got stone \n");
    	    break;
    	    case 3:
    	    printf("Computer got paper \n");
    	    break;
    	}
    
    // do not use switch (uc,r) it won't work !!! use nested swtich insted : 
    	switch (uc) 
		{
    	  case 1:
    	    switch (r) 
			{
    	        case 1:
    	           printf("It's a tie \n");
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
        	switch (r) 
			{
	            case 1:
	               printf("You won \n");
	               break;
	            case 2:
	               printf("It's a tie \n");
    	           break;
    	        case 3:
    	           printf("Computer won \n");
    	           break;
    	    }
    	    break;

    	  case 3:
        	switch (r) 
			{
    	        case 1:
    	           printf("Computer won \n");
    	           break;
    	        case 2:
    	           printf("You won \n");
    	           break;
    	        case 3:
    	           printf("It's a tie \n");
    	           break;
    	    }
    	    break;
   		}
   		printf("What to play again ? Enter 0:No or 1:Yes : ");
   		scanf("%d",&p);
	} while (p==1);
	printf("Exit !!! We Hope you liked it, Do visit again !");
}
