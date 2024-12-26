#include<stdio.h>
#include<math.h>

int main() 
{
	int n;
	printf("Enter array value: \n");
    scanf("%d",&n);
    char name[n][10]; int i, regn[n], gnd[n];
    float bs[n],da[n],hra[n],cal[n],sp[n],dd[n],total[n]; 
    
	for (i=0; i<n; i++)
	{
		printf("Enter your name, reg no, basic salary, DA, HRA : \n");
		scanf("%s",name[i]);
    	scanf("%d",&regn[i]);
    	scanf("%f",&bs[i]);
    	scanf("%f",&da[i]);
		scanf("%f",&hra[i]);
		printf("Enter your gender, 0 if female / 1 if male :");
    	scanf("%d",&gnd[i]);	
    	
    	if (gnd[i]==0)
    	{
    		sp[i] = 1500;
		}
		else
		{
			sp[i] = 2000;
		}
		printf("Basic Salary is : %f\n", bs[i]);
		printf("Special pay is : %f\n", sp[i]);
		
		if (bs[i]>80000)
		{
			dd[i] = 0.1*bs[i];
		}
		else if (bs[i]>50000)
		{
			dd[i] = 0.08*bs[i];
		}
		else if (bs[i]>25000)
		{
			dd[i] = 0.035*bs[i];
		}
		else
		{
			dd[i] = 0.02*bs[i];
		}
		printf("Deduction is : %f\n",dd[i]);
			
				
    	cal[i] = bs[i] * (da[i] + hra[i])*0.01;
		total[i] = bs[i] + cal[i] + sp[i] - dd[i];
		printf("Total gross salary is : %f\n\n", total[i]);
    }
    return 0;
}
