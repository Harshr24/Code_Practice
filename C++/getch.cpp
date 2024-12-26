#include <stdio.h>
#include <conio.h>

int main() 
{
	char c;

	printf("Enter a character: ");
	c = getch();
   	
	printf("\n(getch) You entered: %c", c);
	
	printf("\n(getnput) You entered: ");
	putchar(c);
	printf("\n");
	
	printf("(getche) You entered: %c\n", c);
	
	char name[50];
	printf("Enter your name: ");
	gets(name); // gets reads a string of characters from standard input
	printf("Hello, %s!\n\n", name);
	
	puts("Hello, world!");
	puts("My name is:");
	puts(name); // puts prints the string to standard output followed by a newline

	return 0;
}

