#include <stdio.h>
#include <string.h>

struct myStructure 
{
	 int myNum;
	 char myLetter;
	 char myString[30]; // String
};
int main() 
{
	 struct myStructure s1;
	 // Assign a value to the string using the strcpy function
	 strcpy(s1.myString, "Good Morning");
	 
	 printf("Hello , %s !", s1.myString);
	 
	 // Create a structure variable and assign values to it
	 struct myStructure s2 = {12, 'R', "Some text"};
	 
	 printf("\n%d %c %s", s2.myNum, s2.myLetter, s2.myString);
	 
	 
	 //Copying the structure
	 // Create another structure variable
	 struct myStructure s3;
 
	 // Copy s1 values to s2
	 s3 = s2;
	 // Print values
	 printf("\n%d %c %s", s2.myNum, s2.myLetter, s2.myString);
	 return 0;
}
