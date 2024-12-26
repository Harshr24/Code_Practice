/*5) Write a program in C to make a pyramid pattern with numbers increased by 1.
   1 
  2 3 
 4 5 6 
7 8 9 10 

*/
#include <stdio.h>
int main()
{
   int i,j,spc,rows,k,t=1;
   printf("Input rows : ");
   scanf("%d",&rows);
   
   printf("Pattern 1 : \n\n");
   spc=rows-1;
   for(i=1;i<=rows;i++,spc--)
   {
        for(k=spc;k>=1;k--)
            {
              printf(" ");
            }
	    for(j=1;j<=i;j++)
	    {
	    	printf("%d ",t++);
		}
	    printf("\n");
	}
	
	
	printf("\n\nPattern 2 : \n\n");
	int spc2,k2;
   	spc2=rows-1;
   	for(int i=1;i<=rows;i++)
   	{
        for(k2=spc2;k2>=1;k2--)
            {
              printf(" ");
            }
	    for(int j=1;j<=i;j++)
	    {
	    	printf("%d ",j);
		}
	    printf("\n");
	    spc2--;
	}
	
	
	printf("\n\nPattern 3 : \n\n");
	int spc3,k3;
   	spc3=rows-1;
   	for(int i=1;i<=rows;i++)
   	{
        for(k3=spc3;k3>=1;k3--)
            {
              printf(" ");
            }
	    for(int j=1;j<=i;j++)
	    {
	    	printf("%d ",i);
		}
	    printf("\n");
	    spc3--;
	}	
}