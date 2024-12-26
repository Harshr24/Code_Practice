#include<stdio.h>
#include<math.h>

int main()
{ 
    int n;
    printf("Enter n greater than zero: "); 
    scanf("%d",&n);
    int prod = 1;
    for (int i = 1; i <= n; i++) 
    { 
        prod = prod * i; 
    }
    printf("n! = %d", prod);
	return 0; 
}
