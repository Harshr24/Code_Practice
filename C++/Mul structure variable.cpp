#include <stdio.h>
struct myStructure 
{
	 int myNum;
	 char myLetter;
};
int main() 
{
	 // Create different struct variables
	 struct myStructure s1;
	 struct myStructure s2;
	 // Assign values to different struct variables
	 s1.myNum = 12;
	 s1.myLetter = 'S';
	 s2.myNum = 21;
	 s2.myLetter = 'R';
	 // Print values
	 printf("s1 number: %d\n", s1.myNum);
	 printf("s1 letter: %c\n", s1.myLetter);
	 printf("s2 number: %d\n", s2.myNum);
	 printf("s2 letter: %c\n", s2.myLetter);
	 return 0;
}
