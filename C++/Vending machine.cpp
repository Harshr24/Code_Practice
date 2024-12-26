#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int uc,p,bill,cost,q=1;
    do
    {
    	printf("Enter your choise as : 1)Snacks \t 2)Bevrages \t 3)Water : ");
    	scanf("%d",&uc);

	    switch (uc) 
		{
    	case 1:
    		printf("Enter your choise in snacks : 1)Biscuits \t 2)Chips \t 3)Cake : ");
    		scanf("%d",&p);
    		printf("Enter the quamtity : ");
    		scanf("%d",&q);
    	    switch (p) 
			{
    	        case 1:
    	           cost = 10*q;
    	           break;
    	        case 2:
    	           cost = 20*q;
    	           break;
    	        case 3:
    	           cost = 35*q;
       		       break;
        	} bill = bill + cost ;
        	break;

      	case 2:
        	printf("Enter your choise in Bevrages : 1)Cokes \t 2)Coffee \t 3)Tea \t 4)Juice : ");
    		scanf("%d",&p);
    		printf("Enter the quamtity : ");
    		scanf("%d",&q);
    	    switch (p) 
			{
	            case 1:
	               cost = 45*q;
	               break;
	            case 2:
	               cost = 35*q;
    	           break;
    	        case 3:
    	           cost = 30*q;
    	           break;
    	        case 4:
				   cost = 65*q;
				   break; 
    	    } bill = bill + cost ;
    	    break;
    	    
    	case 3:
    		printf("Enter the quamtity : ");
    		scanf("%d",&q);
        	cost = 20*q;
    	    bill = bill + cost ;
    	    break;

    	  default :
    	  	printf("Enter a valid choice ! ");	
   		}
   		printf("Want anything else ? Enter 0:No or 1:Yes : ");
   		scanf("%d",&p);
	} while (p==1);
	printf("Your bill is : %d\n",bill);
	printf("Exit !!! We Hope you liked it, Do visit again !");
}
