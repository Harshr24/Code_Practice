#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n,c,cash; char acn[15]; float bal,bal1;
	printf("Please Enter your Account number : ");
	gets(acn);
	
	do
	{
		printf("\n Please Enter your choise as : \n 1) Deposit \t 3) Check Balance \n 2) Withdraw \t 4) Account detail \n");
		scanf("%d",&n);
		switch (n)
    	{
        case 1:
        {
        	printf("Enter the amount you want to deposit : ");
        	scanf("%d",&cash);
        	bal = bal + (1.0)*cash;
		}
        	break;
        case 2:
        {
        	if (bal>0)
			{
				printf ("Your accout has : INR %.2f\n",bal);
				printf("Enter the amount you want to withdraw : ");
        		scanf("%d",&cash);
        		bal1 = bal - (1.0)*cash;
        		if (bal1<0)
        		{
        			printf ("Sorry it's an invalid transaction.\n"); 
				}
				else 
				{
					bal = bal1;
				}
			}
			else 
			{
				printf("You have insufficent balance\n");
			}
		}
        	break;
        case 3:
        {
        	printf("Check balance here : %.2f \n", bal);
		}
        	break;
        case 4:
        	printf("Your account number is : %s ",acn); 
        	break;
        default :
        	printf("Invalid choise !. \n");
        	break;
    	}
    	printf("\nEnter 1 for more operations or 0 for exit : ");
    	scanf("%d",&c);
	} while (c==1);
	printf("Exit !!!");
}
