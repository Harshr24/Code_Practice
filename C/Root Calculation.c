#include <stdio.h>
#include <math.h>

int main() 
{
   double a, b, c, d, r1, r2,x;
   
   printf("Enter coefficients a, b and c: ");
   scanf("%lf %lf %lf", &a, &b, &c);

   d = (b*b) - (4*a*c);
   
   if (a==0)
   {
   		x = -b/c;
		printf("There is one solution : %.2lf",x);
		
		if (b==0)
		{
			printf("There is no solution");
		}
   }
   
   if (d> 0) 
   {
      r1 = (-b + sqrt(d)) / (2 * a);
      r2 = (-b - sqrt(d)) / (2 * a);
      printf("Roots are real and different: %.2lf and %.2lf", r1, r2);
   }

   else if (d == 0) 
   {
      r1 = -b / (2 * a);
      printf("\nRoots are real and same: %.2lf", r1);
   }

   else 
   {
      printf("\nRoots are complex and imaginary");
   }

   return 0;
}
