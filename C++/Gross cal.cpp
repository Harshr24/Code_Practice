#include<stdio.h>
#include<math.h>

int main() 
{
    char name[10]; int regn, gnd;
    float bs,da,hra,cal,sp,dd,total;
    printf("Enter your name, reg no, basic salary, DA, HRA : \n");
    scanf("%s",name);
    scanf("%d",&regn);
    scanf("%f",&bs);
    scanf("%f",&da);
	scanf("%f",&hra);
	printf("Enter your gender, 0 if female / 1 if male :");
    scanf("%d",&gnd);
    
    if (gnd==0)
    {
    	sp = 1500;
	}
	else
	{
		sp = 2000;
	}
	printf("Basic Salary is : %f\n", bs);
	printf("Special pay is : %f\n", sp);
	
	if (bs>80000)
	{
		dd = 0.1*bs;
	}
	else if (bs>50000)
	{
		dd = 0.08*bs;
	}
	else if (bs>25000)
	{
		dd = 0.035*bs;
	}
	else
	{
		dd = 0.02*bs;
	}
	printf("Deduction is : %f\n",dd);
		
		
    cal = bs * (da + hra)*0.01;
	total = bs + cal + sp - dd;
	printf("Total gross salary is : %f\n", total);
    return 0;
}
