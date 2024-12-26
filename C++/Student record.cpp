#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENT 100

struct student {
	int rn;
	char name[40];
	float marks;
};

void add_s(struct student stu[], int count) 
{
	if (count >= MAX_STUDENT) 
	{
		printf("Maximum limit of the students is reached.\n");
	} 
	else 
	{
		FILE *ftp;
		ftp = fopen("S_data.txt", "a");
		printf("Enter Name, Roll no and Marks : \n");
		scanf("%s", stu[count].name);
		scanf("%d", &stu[count].rn);
		scanf("%f", &stu[count].marks);
		fprintf(ftp, "%s\t%d\t%f\n", stu[count].name, stu[count].rn, stu[count].marks);
		fclose(ftp);
		printf("Student details added successfully.\n");
	}
}

void display() 
{
	FILE *ftp;
	ftp = fopen("S_data.txt", "r");
	char str[100];

	while (fgets(str, 100, ftp) != NULL) 
	{
		printf("%s", str);
	}
	fclose(ftp);
}

void search(struct student stu[], int count) 
{
	int roll;
	printf("Enter a roll number to search the student info in file : ");
	scanf("%d", &roll);
	FILE *ftp;
	ftp = fopen("S_data.txt", "r");
	fseek(ftp, 0 , SEEK_SET);
	if (fread(&stu[count], sizeof(struct student), 1, ftp) == 1) 
	{
		printf("Student found with the given roll number\n");
		printf("Name: %s\t Roll no: %d\t Marks: %.2f\n", stu[count].name, stu[count].rn, stu[count].marks);
	} 
	else 
	{
		printf("No Student found as per given roll number\n");
	}
	fclose(ftp);
}

void cal(struct student stu[], int count) 
{
	float sum, avg;
	for (int i = 0; i < count; i++) 
	{
		sum = sum + stu[i].marks;
	}
	avg = sum / count;
	printf("The average marks are : %.2f\n", avg);
}

int main() 
{
	struct student stu[MAX_STUDENT];
	int choice, count = 0;

	do {
		printf("Menu:\n");
		printf("1. Add Student Record\n");
		printf("2. Display Student record\n");
		printf("3. Find Student as per roll no\n");
		printf("4. Calculate average\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) 
		{
			case 1:
				add_s(stu, count);
				count++;
				break;
			case 2:
				display();
				break;
			case 3:
				search(stu, count);
				break;
			case 4:
				cal(stu, count);
				break;
			case 5:
				printf("Exiting program.\n");
				break;
			default:
				printf("Invalid choice. Enter valid input.\n");
		}
	} while (choice != 5);
	return 0;
}

