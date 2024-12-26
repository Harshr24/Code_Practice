#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fptr;

    // After opening the file in write mode ("w"), you cannot read from it using fgets(). 
	// You need to close the file after writing and then reopen it in read mode ("r") to read its contents.
	// or use r+ / w+ mode for both.
	
	char str[100],s1[100];
    fptr = fopen("Data.txt", "a");
    	int n=1;
    	printf("The file is now opened.\n");
    	fprintf(fptr, "%d : We are learning files.\n", n);
    	//fputs("\nWe are executing the task.\n", fptr);
    	printf ("Enter the data you wish to add : ");
    	while (n<3)
    	{
			gets (s1);
			n++;
			//fputs(s1, fptr);
			fprintf(fptr, "%d : %s\n",n,s1);
		}		
    fclose(fptr);
    printf("The file is now closed.\n");


	fptr = fopen("Data.txt", "r");
    {
        printf("File contents:\n");
        while (fgets(str, 100, fptr) != NULL)
        {
            printf("%s", str);
        }
   }
    fclose(fptr);   
    
    
    //int x = remove("fptr.txt");
	//if (x==0);                               //to remove a file
	//printf("File removed.");
	
    return 0;
}
