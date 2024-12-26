#include <stdio.h>

int main()
{
   int i, sum=0;
   printf("Numbers between 100 and 200 which divisible by 9 : \n");
   for(i=101;i<200;i++)
   {
     if(i%9==0)
     {
       printf("%d\t",i);
       sum += i;
     }
   }
   printf(" And sum is : %d",sum);
}