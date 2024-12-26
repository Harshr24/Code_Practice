#include<stdio.h>
#include<math.h>

int main()
{ 
    int a,b,c,sum;
    float avg;
    printf("Enter 3 no : "); 
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    sum=a+b+c;
    printf("sum is : %d\n",sum);
    avg=sum/3;
    printf("average is : %.2f\n",avg);
    
    if (a>b && a>c)
    {
    	printf("largest number is : %d\n",a);
	}
	else if (b>c && b>a)
    {
    	printf("largest number is : %d\n",b);
	}
	else if (c>a && c>b)
    {
    	printf("largest number is : %d\n",c);
	}
	
	
	
	if (a<b && a<c)
    {
    	printf("smallest number is : %d\n",a);
	}
	else if (b>c && b>a)
    {
    	printf("smallest number is : %d\n",b);
	}
	else if (c<a && c<b)
    {
    	printf("samllest number is : %d\n",c);
	}
	
	int temp = 0;
	temp = a;
	a=b;
	b=c;
	c=temp;
	printf("New x,y,z are : %d %d %d\n",a,b,c);
}