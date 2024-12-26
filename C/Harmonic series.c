#include<stdio.h>
#include<math.h>

int main()
{ 
    int n;
    float sum, i;
    printf("Enter n value : "); 
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
    	sum = sum + 1.0/i;
	}
	printf("sum  is %f", sum);
	return 0;
}