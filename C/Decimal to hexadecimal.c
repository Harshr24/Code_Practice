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
        a[i]=n%16;    
        n=n/16; 
        i++;
    }
    while (n>0);
    
    for(i=i-1;i>=0;i--)    
    {    
        if(a[i]<10)
		{
			printf("%d",a[i]);	
		}
		else
		{
			printf("%c",(char) 65-10+a[i]);
		}
    }  
}