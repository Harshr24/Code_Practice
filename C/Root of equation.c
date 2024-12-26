#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,m,n,dnm, x1,x2;
	printf("Enter appropriate constants respectively for the equation ax1 + bx2 = m and cx1 + dx2 = n: \n");
	scanf("%d%d%d%d%d%d",&a,&b,&m,&c,&d,&n);
	dnm = (a*d)-(c*b);
	printf("Denominator is = %d\n",dnm);
	
	/*if (dnm==0)
	{
		printf ("Hence Enter appropriate constants : ");
		scanf("%d%d%d%d%d%d",&a,&b,&m,&c,&d,&n);
	}
	dnm = ((a*d)-(c*b));*/
	
	x1 = ((m*d)-(b*n))/dnm;
	x2 = ((n*a)-(m*c))/dnm;
	printf ("Root of the given equation are %d,%d: \n",x1,x2);
	return 0;
}