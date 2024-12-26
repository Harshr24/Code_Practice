#include<stdio.h>
int main()
{
	char a[10],b[10];
	int i,j,l1=0,l2=0,count=0,status;
	printf("Enter 2 strings S1 and S2 : ");
	scanf("%s%s",a,b);
	
	for(i=0;a[i]!='\0';i++)
	{
		l1=l1+1;
	}
	printf("\nLength of string 1 is : %d ",l1);
	for(i=0;b[i]!='\0';i++)
	{
		l2=l2+1;
	}
	printf("\nLength of string 2 is : %d \n",l2);
	
	for(i=0;i<(l1-l2);i++)
	{
		for(j=0;j<l2;j++)
		{
			if(a[i+j]==b[j])
			{
				count++;
			}
	}
	if(count==l2)
	{
		status=0;
	}
	else
	{
		status!=0;
	}
	count=0;
}
if(status==0)
{
	printf("It's a substring");
}
else
{
	printf("Its not a substring");
}
}
