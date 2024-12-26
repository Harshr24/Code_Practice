#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int a[100], n, i=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    do
    {    
        a[i]=n%8;    
        n=n/8;
        i++;
    }
    while (n>0);
     for(i=i-1;i>=0;i--)    
    {    
		printf("%d",a[i]);	
    }       
}