#include<stdio.h>
#include<math.h>

int main() 
{
    int n;
	printf("Enter array value: \n");
    scanf("%d",&n);
    char iname[n][10]; int i, srno[n], quan[n]; 
	float tax, total, sub_t[n], iprc[n];
    printf("Enter sr No, Item name, Item price, Quantity : \n");
	sub_t[-1]=0;
	for (i=0; i<n; i++)
	{
		scanf("%d",&srno[i]);
		scanf("%s",iname[i]);
    	scanf("%f",&iprc[i]);
    	scanf("%d",&quan[i]);
    	
    	sub_t[i] = iprc[i]*quan[i];
    	tax = tax + sub_t[i]*(0.05);
	    total = total + sub_t[i];
	}
	total = total + tax;
	printf("Sr no\t item name\t item price\t Quantity\t Subtotal\n");
	for (i= 0; i< n; i++)
	{
		printf("%d\t", srno[i]);
		printf("  %s\t", iname[i]);
		printf("\t%f\t", iprc[i]);
		printf("  %d\t", quan[i]);
		printf("\t%f\t", sub_t[i]);
		printf("\n");
	}
	printf("Tax is %f\n", tax);
	printf("Total amount is %f\n", total);
    return 0;
}
