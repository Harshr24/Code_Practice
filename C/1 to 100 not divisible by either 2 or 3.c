#include <stdio.h>

int main()
{
   int i, sum=0;
   printf("Numbers between 1 and 100 which not divisible by either 2 or 3 : \n");
   for(i=1;i<100;i++)
   {
     if(i%2!=0 && i%3!=0)
     {
       printf("%d\t",i);
       sum+=i;
     }
   }
   printf("And the sum is :% d",sum);
}
