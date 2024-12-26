#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int unit; float st, total,cost;
    printf("Enter the number of units: ");
    scanf("%d",&unit);
    printf("\nUnit is : %d\n", unit);
    
    if (unit<=200)
    {
    	cost = 0.8*unit;
	}
	else if (unit>200 && unit <=300)
	{
		cost = 0.9*(unit-200) + 160;
	}
	else
	{
		cost = 1.0*(unit-300) + 250;
	}
	printf("Cost is : %.2f\n", cost);
	st = 100 + cost;
	if (st>400.00)
	{
		total = (0.15*st) + st;
	}
	else 
	{
		total = st;
	}
	
	printf("Sub Total is : %.2f\n", st);
	printf("Total amount is : %.2f", total);
	return 0;
}