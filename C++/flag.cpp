#include <stdio.h>

int main ()
{
	int x = 123;
	float pi = 3.1415926;
	char str[] = "Hello, world!";
	
	printf("%-10d\n", x); // left-justify the integer within 10 spaces
	printf("%10s\n", "Hello");
	printf("%+d\n", x); // prefix positive numbers with a plus sign
	printf("%05d\n", x); // pad the integer with zeros to a width of 5
	printf("% d\n", x); // prefix positive numbers with a space if no sign is specified
	
	printf("%f\n", pi); // output the floating-point number with default precision
	printf("%.2f\n", pi); // output the floating-point number with precision of 2
	
	printf("%s\n", str); // output the string
	printf("%#x\n", x); // add 0x prefix to the hexadecimal output of the integer
	printf("\n\n\n\n\n");
	
	int x2 = 42;
	float y = 3.14159;
	char s[] = "Hello, world!";

	printf("%05d\n", x2);    // Output: "00042"
	printf("%-10s\n", s);   // Output: "Hello, world!     "
	printf("%+d\n", x2);     // Output: "+42"
	printf("%#x\n", x2);     // Output: "0x2a"
	printf("%.2f\n", y);    // Output: "3.14"
	printf("%.*s\n", 5, s); // Output: "Hello"
	printf("\n\n");
	
	char a[10];
	scanf("%[abcd]",a);
	printf("%a");
	
}
