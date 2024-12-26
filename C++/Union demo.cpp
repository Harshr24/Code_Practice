#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data                           // replace union by struct 
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data data;
	
	data.i=10;
	printf("data.i : %d\n",data.i);
	data.f=3.14;
	printf("data.f : %.2f\n",data.f);
	strcpy(data.str,"Hello World!");
	printf("data.str : %s\n",data.str);
	printf("data.f : %.2f\n",data.f);
	printf("Memory occupied by data : %lu bytes \n\n",sizeof(data));              // if union is used memory is union of all and in struct it is sigma.
	// in union data is lost one after another but in struct it is stored seprately for each. 
	printf("Memory occupied by int data : %lu bytes \n",sizeof(data.i));
	printf("Memory occupied by float data : %lu bytes \n",sizeof(data.f));
	printf("Memory occupied by char data : %lu bytes \n",sizeof(data.str));
	return 0;
}
