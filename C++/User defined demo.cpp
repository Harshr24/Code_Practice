/*#include<stdio.h>
int rev(int);
int main()
{
	int no = 5;
	rev(no);
	return 0;
}
int rev (int no)
{
	if (no==0)
	{
		return 0;
	}
	else 
	{
		printf("%d",no);
	}	
	rev(--no);
}*/

#include <stdio.h>

int factorial(int n) 
{
    int i, fact = 1;
    for (i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main() 
{
    int num, i, j, a[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    
    for (i = 0; i < num; i++) 
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) 
        {
            a[i][j]= nCr(i,j);
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    return 0;
}
