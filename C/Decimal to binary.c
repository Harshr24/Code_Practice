/* #include<stdio.h>    
#include<stdlib.h>  

int main()
{  
    int a[100],n,i=0;    
    printf("Enter a number : ");    
    scanf("%d",&n);    
    do
    {    
        a[i]=n%2;    
        n=n/2; 
        i++;
    }
    while (n>0);
    printf("\nBinary form is : ");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",a[i]);
    }    
return 0;  
}

OR */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r, x, i = 1;
    do
    { 
        r = n % 2;
        x = x + (r*i);
        i = i*10 ;
        n = n/2;
    } while (n>0);
    printf("%d",x);
    return 0;
}