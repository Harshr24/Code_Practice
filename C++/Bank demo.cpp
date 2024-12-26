#include <stdio.h>


	struct bank
	{
	    char h_name[10];
	    int acc_no;
	    float balance;
	};
	
	int getAccountInfo(struct bank s[], int i)
	{
	    printf("Enter Your Name: ");
	    scanf("%s", s[i].h_name);
	    printf("Enter Your account number: ");
	    scanf("%d", &s[i].acc_no);
	    return 0;
	}
	
	int deposit(struct bank s[], int i)
	{
	    float amt_dep;
	    printf("Enter The amount you want to deposit: ");
	    scanf("%f", &amt_dep);
	    s[i].balance += amt_dep;
	    printf("Deposited amount is: %.2f\n", amt_dep);
	    return 0;
	}
	
	int withdraw(struct bank s[], int i)
	{
	    float amt_wtd;
	    printf("Enter The amount you want to withdraw: ");
	    scanf("%f", &amt_wtd);
	    if (amt_wtd > s[i].balance)
	    {
	        printf("Invalid Transaction\n");
	    }
	    else
	    {
	        s[i].balance -= amt_wtd;
	    }
	    printf("Withdrawal amount is: %.2f\n", amt_wtd);
	    return 0;
	}
	
	int checkBalance(struct bank s[], int i)
	{
	    printf("Your balance is: %.3f\n", s[i].balance);
	    return 0;
	}
	
	int main()
	{
	    struct bank accounts[5];
	    int choice;
	    int i = 0;
	
	    do
	    {
	        printf("Enter Your choice:\n");
	        printf("1) Account Detail\n");
	        printf("2) Deposit\n");
	        printf("3) Withdraw\n");
	        printf("4) View balance\n");
	        printf("5) Exit\n");
	        scanf("%d", &choice);
	
	        switch (choice)
	        {
		        case 1:
		            if (i < 5)
	            	{
		                getAccountInfo(accounts, i);
		                i++;
	            	}
	            	else
		            {
		                printf("Maximum number of accounts reached.\n");
		            }
	            break;
	        
	
	        case 2:
	            deposit(accounts, i);
	            break;
	
	        case 3:
	            withdraw(accounts, i);
	            break;
	
	        case 4:
	            checkBalance(accounts, i);
	            break;
	
	        case 5:
	            printf("Exit\n");
	            break;
	
	        default:
	            printf("Invalid Choice\n");
	            break;
	        }
	    } while (choice != 5);
	    return 0;
	}







/*#include <stdio.h>

int i; 
struct bank
{
	char h_name[5][10];
	int acc_no[5];
	float balance[5];
	float history[5];
};
do 
{
	int main()
	{
		int choice;
		do
		{
			printf("Enter Your choice : 1)Account Detail \t 2)Deposit \t 3)Withdraw 4)View balance \t 5)Exit ");
			scanf("%d", &choice);
			
			switch (choice)
			{
				case 1:
				{
					int x= getAccountInfo();
					printf("%d",x);
				} 
				break;
				
				case 2:
				{
					int x= deposit();
					printf("%d",x);
				}
				break;
				
				case 3:
				{
					int x= withdraw();
					printf("%d",x);
				}
				break;
				
				case 4:
				{
					int x= checkBalance();
					printf("%d",x);
				}
				break;
				
				case 5:
					printf("Exit");
				break;
					
				default:
					printf("Invalid Choice");
				break;	
			}
		} while (choice==5);
		return 0;
	}
	
	float amt_dep[i], amt_wtd[i];
	
	int getAccountInfo()
	{
		struct bank s[i];
		printf ("Enter Your Name : ");
		printf ("Enter Your account number : ");
		scanf ("%s",s.h_name);
		scanf ("%d",&s.acc_no[i]);
		return 0;
	}
	
	int deposit()
	{
		struct bank s[i];
		float s.balance[i];
		printf ("Enter The amount you want to deposit : ");
		scanf ("%d",&s.amt_dep[i]);
		s.balance[i] += amt_dep[i];
		printf("Deposited amount is : %.2f",amt_dep[i]);
		return 0;
	}
	
	int withdraw()
	{
		struct bank s[i];
		float s.balance[i];
		printf ("Enter The amount you want to withdraw : ");
		scanf ("%d",&s.amt_wtd[i]);
		if (amt_wtd[i]>s.balance[i])
		{
			printf("Invalid Transaction");
		}
		else 
		{
			s.balance[i] -= amt_wtd[i];
		}
		printf("Withdrawal amount is : %.2f",amt_wtd[i]);
		return 0;
	}
	
	int checkBalance()
	{
		struct bank s[i];
		float s.balance[i];
		printf ("Your balance is : %.3f",s.balance[i]);
		return 0;
	}
} while (i==4);
i++;*/
